#ifndef __WL_PLAY_H__
#define __WL_PLAY_H__

/*
=============================================================================

							WL_PLAY DEFINITIONS

=============================================================================
*/

#define BASEMOVE                35
#define RUNMOVE                 70
#define BASETURN                35
#define RUNTURN                 70

#define JOYSCALE                2

extern  bool noadaptive;
extern  unsigned        tics;
extern  int             viewsize;

extern  int             lastgamemusicoffset;

//
// current user input
//
extern  int         controlx,controly;              // range from -100 to 100
extern  boolean     buttonstate[NUMBUTTONS];
extern  boolean     buttonheld[NUMBUTTONS];
extern  exit_t      playstate;
extern  boolean     madenoise;
extern  int         godmode;

extern  boolean     demorecord,demoplayback;
extern  int8_t      *demoptr, *lastdemoptr;
extern  memptr      demobuffer;

//
// control info
//
extern  boolean		alwaysrun;
extern  boolean     mouseenabled,mouseyaxisdisabled,joystickenabled;
extern  int         dirscan[4];
extern  int         buttonscan[NUMBUTTONS];
extern  int         buttonmouse[4];
extern  int         buttonjoy[32];

void    PlayLoop (void);

void    CenterWindow(word w,word h);

void    InitRedShifts (void);
void    FinishPaletteShifts (void);

void    PollControls (void);
int     StopMusic(void);
void    StartMusic(void);
void    ContinueMusic(int offs);
void    StartDamageFlash (int damage);
void    StartBonusFlash (void);

#ifdef SPEAR
extern  int32_t     funnyticount;           // FOR FUNNY BJ FACE
#endif

extern  boolean     noclip,ammocheat;
extern  int         singlestep;
extern  unsigned int extravbls;

#endif