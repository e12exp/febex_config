// this is the top level file for the febex config
// the configuration will be processed by a C preprocessor,
// then the output is fed to setpar. 

add sfp 4

// Messel side

// write your modules here:
add module 0 17
add module 1 17
add module 2 17
add module 3 18

#include "default/base.h" // base config for febex 

set *.*.tot_enabled 1
set *.*.tot_threshold 32768

// custom trigger setup

set *.*.*.trigger_validation_src 0x100
// 0x100: gamma discriminator (self-triggering)

// global thresholds

set *.16.*.opmode_run 0
set 3.17.*.opmode_run 0
set 1-2.2,3,6,7,10,11,14,15.9-10.opmode_run 0 ; // NC forward iphos
// gamma ranges

#define SET_THRESHOLD(CH, TIMING, GAMMA) set CH.discr_threshold_timing TIMING ; set CH.discr_threshold_gamma GAMMA
// If CH contains "," indirect calls to SET_THRESHOLD will fail. Use () to avoid this.
// (Setpar just strips "(" and ")", so don't even think about doing something fancy with them)
#define GAMMA_DEFAULT(CH)  SET_THRESHOLD((CH), 50, 170) // best
#define GAMMA_BAD4(CH)     SET_THRESHOLD((CH), 60, 200)
#define GAMMA_BAD5(CH)     SET_THRESHOLD((CH), 80, 220) 
#define GAMMA_BAD6(CH)     SET_THRESHOLD((CH), 100, 250) // worst


#define PROTON_BAD(CH)     SET_THRESHOLD((CH), 80, 200)
#define PROTON_DEFAULT(CH) SET_THRESHOLD((CH), 20, 50)
#define MUTE(CH)           set CH.opmode_run 0

// lower trigger for proton ranges:
#define PROTON 1-2.0,2,4,6,8,10,12,14.*
GAMMA_DEFAULT(*.*.*)
PROTON_DEFAULT(PROTON)

#include "thresholds.h"

//set *.*.*.opmode_enable_trace 1
