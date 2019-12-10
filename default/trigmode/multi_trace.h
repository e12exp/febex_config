#warning "Switching to free running single event trace mode"
set *.*.*.trigger_timing_delay           100   //  0+delay
set *.*.*.trigger_validation_delay       180   // 80+delay
set *.*.*.trigger_validation_gate_length 220   //120+delay
set *.*.*.signal_delay                   160   // 60+delay
set *.*.qpid_delay                       110   // 10+delay
set *.*.num_events_readout 1
set *.*.*.opmode_enable_trace 1
LASTMSG="Switched to free running single event trace mode"
