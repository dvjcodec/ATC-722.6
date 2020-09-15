#include <SoftTimer.h>

void pollstick(Task* me);
void gearUp();
void gearDown();
void polltrans(Task* me);
void boostControl(Task* me);
void fuelControl(Task* me);
int adaptSPC(int mapId, int xVal, int yVal);
void adaptSPCup();
void adaptSPCdown();
void radioControl();
void onReleased(unsigned long pressTimespanMs);

void keypadWatch(Task* me);
void keypadControl(int command);

extern int spcPercentVal;       
extern unsigned long int shiftStartTime;
extern unsigned long int shiftDuration;
extern boolean trans;
extern boolean boostSensor;
extern boolean shiftBlocker;
extern boolean debugEnabled;
extern boolean boostLimit;
extern int n2Speed;
extern int n3Speed;
extern boolean fullAuto;
extern boolean fuelPumpControl;
extern boolean shiftPending;
extern boolean ignition;
extern boolean fuelPumps;
extern boolean radioEnabled;
extern boolean stickCtrl;
extern boolean horn;
extern boolean manual;
extern boolean truePower;
extern boolean tccLock;
extern boolean stick;
extern boolean autoGear;
extern boolean tpsConfigMode;
extern double lastShiftPoint;
extern boolean tpsInitPhase1, tpsInitPhase2;
extern byte page;
extern double boostPWM;
extern boolean boostLimitShift;
extern int boostOverride;
extern double lastPress;