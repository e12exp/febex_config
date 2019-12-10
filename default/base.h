// This is part of the default configuration. 
// Only change this if you want to change the future defaults for every system.
//otherwise, config/febex.h is the place for custom changes, just add them 
// after you include default/febex.h

// Global thresholds 
set *.*.*.discr_threshold_timing                  50
set *.*.*.discr_threshold_gamma                   300
set *.*.*.discr_threshold_proton                  400

// Fast aka Trigger branch ###################################################
set *.*.discr_integration_time                    24      //(x 20 ns)
set *.*.discr_shift_right                         3
set *.*.discr_gaptime                             50      //(x 20 ns)
set *.*.*.proton_trigger_walk_correction          0
set *.*.*.discr_enable_walk_correction            1
//  Discriminator #2 ("Proton") ---------------------------------------------
set *.*.*.proton_trigger_enable                   1
set *.*.*.proton_trigger_gate_length              84
set *.*.*.proton_trigger_timing_delay             0
// Event recording trigger --------------------------------------------------
set *.*.logic_gate_size                           2200    //(x 40 ns)
set *.*.*.trigger_enable_validation               1
set *.*.*.trigger_timing_delay                    0       //(x 10 ns)
set *.*.*.trigger_validation_gate_length          120     //(x 10 ns)
set *.*.*.trigger_validation_delay                80
set *.*.*.trigger_timing_src                      0x0080 
set *.*.*.trigger_validation_src                  0x0200 
// Various trigger-related --------------------------------------------------
set *.*.*.opmode_run                              1
set *.*.num_events_readout                        199

// Module trigger matrix

// (see tlist.out for a human-readable version)
set *.*.iomatrix_gpt1  0b00000000000000
set *.*.iomatrix_gpt2  0b00000010000000 
set *.*.iomatrix_gpt3  0b00000000000000 
set *.*.iomatrix_gpt4  0b00000000000000 
set *.*.iomatrix_t1    0b00000000000001 
set *.*.iomatrix_t3    0b00000000010000 
set *.*.iomatrix_rorq  0b00001000000000 
set *.*.iomatrix_busy  0b00000000000000 
set *.*.veto_dst       0b00000000000000

//channel triggers
set *.*.*.trigger_timing_src        0x080  //0x080=channel gamma discr
set *.*.*.trigger_validation_src    0x100  //0x100=channel timing discr
set *.*.*.trigger_timing_dst        0x000 
set *.*.*.trigger_gamma_dst         0x000 
set *.*.*.trigger_proton_dst            0x002 //0x002=GPT2

// Analysis branch ###########################################################
set *.*.*.signal_delay                            60      //(x 40 ns)
//  MAU (Moving average unit) Filter ------------------------------------------
set *.*.mau_integration_time                      31      //(x 40 ns)
set *.*.mau_shift_right                           3
// Baseline reconstruction and substraction ----------------------------------
set *.*.bl_exclude_gatesize                       10000   //(x 40 ns)
set *.*.bl_integration_time                       1023    //(x 40 ns)
set *.*.use_fixed_bl                              0
set *.*.fixed_bl_val                              25600
set *.*.bl_shift_right                            10
// Moving window deconvolution -----------------------------------------------
set *.*.mwd_window_size                           270     //(x 40 ns)
set *.*.mwd_tau                                   875     //(x 40 ns)
set *.*.mwd_shift_right                           11
// Peak finding and energy determination -------------------------------------
set *.*.energy_gate_size                          600     //(x 20 ns)
set *.*.energy_integration_time                   63      //(x 40 ns)
set *.*.energy_bias_correct                       0
set *.*.energy_shift_right                        7
// QPID parameters -----------------------------------------------------------
set *.*.qpid_t1                                   0       //(x 40 ns)
set *.*.qpid_t2                                   49      //(x 40 ns)
set *.*.qpid_t3                                   74      //(x 40 ns)
set *.*.qpid_t4                                   250     //(x 40 ns)
set *.*.qpid_integration_time                     2       //(x 40 ns)
set *.*.qpid_delay                                10
set *.*.qpid_tau_f                                15
set *.*.qpid_tau_s                                83
set *.*.qpid_nf_shift_right                       2
set *.*.qpid_ns_shift_right                       2
//  Time over threshold (TOT) parameters -------------------------------------
set *.*.tot_threshold                             64000
set *.*.tot_enabled                               0
// Operation modes and trace settings ----------------------------------------
set *.*.trace_length                              1000    //(x 40 ns)
set *.*.*.opmode_enable_trace                     0
set *.*.*.opmode_invert                           1
set *.*.*.tracemode                               0
// Febex Addon Board Settings ------------------------------------------------
set *.*.*.dac_baseline                            4096
