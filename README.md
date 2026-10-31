# My-first-C-project
# Ultrasonic Sensor Data Filter (C++)

### Overview
In embedded systems and robotics, hardware sensors occasionally return negative error codes (e.g., `-50`, `-404`) due to calibration delays or electrical noise. 

This C++ program sanitizes an array of raw distance sensor readings in a single `O(n)` pass:
* Filters out corrupted negative values.
* Dynamically initializes `min` and `max` on the first valid reading (`num == 0`) to prevent negative initialization bugs.
* Computes the true moving average (`double`) of valid signals.
