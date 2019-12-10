// individial thresholds for channels (in a separate file, may be auto-generated.)

// in general, we tend to set the timing threshold to 50-80% of the gamma threshold

// it might be a good idea to have two separate files for both preamp ranges
// and #include one with an #ifdef guard or something. 

set 0.0.0.discr_threshold_timing 100 
set 0.0.0.discr_threshold_gamma 200

// a bad channel can be disabled alltogether:

set 0.0.0.opmode_run 0
