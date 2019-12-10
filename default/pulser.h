#if !defined(PULSER_SFP) || !defined(PULSER_MODULE)
#error "Please #define PULSER_SFP and PULSER_MODULE before running this."
#fi
#warning "pulser configuration is untested!"
// add module with "add module 0 1 pulser_2.0"

set PULSER_SFP.PULSER_MODULE.num_events_readout 255
set PULSER_SFP.PULSER_MODULE.output_channel 0b11111111
set PULSER_SFP.PULSER_MODULE.output_polarity positive
set PULSER_SFP.PULSER_MODULE.output_mode normal
set PULSER_SFP.PULSER_MODULE.common_duty 0
set PULSER_SFP.PULSER_MODULE.*.enable 1
set PULSER_SFP.PULSER_MODULE.*.integration_mode drop
set PULSER_SFP.PULSER_MODULE.*.pulse_mode periodic
set PULSER_SFP.PULSER_MODULE.*.amplitude_mode varying
set PULSER_SFP.PULSER_MODULE.*.nf 255
set PULSER_SFP.PULSER_MODULE.*.ns 0
set PULSER_SFP.PULSER_MODULE.*.e_const 0
set PULSER_SFP.PULSER_MODULE.*.e_min 0
set PULSER_SFP.PULSER_MODULE.*.e_max 230
set PULSER_SFP.PULSER_MODULE.*.e_step 1
set PULSER_SFP.PULSER_MODULE.*.shift_q 8
set PULSER_SFP.PULSER_MODULE.*.trigger_length 20
set PULSER_SFP.PULSER_MODULE.*.trigger_delay disable
set PULSER_SFP.PULSER_MODULE.*.delay_mode constant
set PULSER_SFP.PULSER_MODULE.*.trigger_common freerunning
set PULSER_SFP.PULSER_MODULE.*.ext_trigger 0b00000000
set PULSER_SFP.PULSER_MODULE.*.decay_const_linear 0
set PULSER_SFP.PULSER_MODULE.*.decay_const_drop 8000
set PULSER_SFP.PULSER_MODULE.*.duty 5000
set PULSER_SFP.PULSER_MODULE.*.delay_const 0
set PULSER_SFP.PULSER_MODULE.*.delay_min 0
set PULSER_SFP.PULSER_MODULE.*.delay_max 0
set PULSER_SFP.PULSER_MODULE.*.delay_step 0
set PULSER_SFP.PULSER_MODULE.*.enable_square 0
set PULSER_SFP.PULSER_MODULE.*.square_width 0
set PULSER_SFP.PULSER_MODULE.*.square_height 0
