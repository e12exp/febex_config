// this is the top level file for the febex config
// the configuration will be processed by a C-preprocessor,
// then the output is fed to setpar. 

add sfp 4

// write your modules here:
add module 0 16

#include "default/base.h" // base config for febex 
#include "default/trigmode/single_self.h"

#include "thresholds.h"
