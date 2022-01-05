// this is the top level file for the febex config
// the configuration will be processed by a C-preprocessor,
// then the output is fed to setpar. 

add sfp 4

// write your modules here:
add module 0 17
add module 1 17
add module 2 17
add module 3 18


#include "default/base.h" // base config for febex 
#include "thresholds.h"
set *.*.*.trigger_validation_src 0x100
set *.*.*.discr_threshold_timing 50
set *.*.*.discr_threshold_gamma 100

// last modules are not to be be read out

set 0-2.16.*.opmode_run 0
set 3.17.*.opmode_run 0
