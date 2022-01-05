// this is the top level file for the febex config
// the configuration will be processed by a C-preprocessor,
// then the output is fed to setpar. 

add sfp 4

// write your modules here:
add module 0 16
add module 1 16
add module 2 16
add module 3 16

#include "default/base.h" // base config for febex 
#include "thresholds.h"
set *.*.*.trigger_validation_src 0x100
set *.*.*.discr_threshold_timing 50
set *.*.*.discr_threshold_gamma 100
