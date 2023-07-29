# PWM_arduino_gen
An example of using PWM Teensy (Arduino also works well) for generating an arbitrary waveform.
The figures below show a sine wave's output signal at 50 Hz, 100Hz, and 500Hz, respectively where a low pass filter with a cut-off frequency of 800 Hz (R:200 ohm C: 10 microF) is used to average PWM signal.

![f=50Hz](https://github.com/Nakarin315/PWM_arduino_gen/assets/93529299/f6d3c8a2-b571-443c-8547-36da7cacee2e)
![f=100Hz](https://github.com/Nakarin315/PWM_arduino_gen/assets/93529299/fc76ce10-d149-42d5-82f5-00d0ebb9ef5f)
![f=500Hz](https://github.com/Nakarin315/PWM_arduino_gen/assets/93529299/4eb53705-ece2-448e-8f7a-e149418b3d52)

The figure below shows the Teensy broad and low pass filter which is attached at the PWM output pin.

![Screenshot 2023-07-29 234148](https://github.com/Nakarin315/PWM_arduino_gen/assets/93529299/a5c3c5be-48b7-447c-b3a0-b4adab9c94b0)
