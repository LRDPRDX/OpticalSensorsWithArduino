# OpticalSensorsWithArduino

This is a C++ library for operating optical sensor ADNS2610 with Arduino Uno. 

## Getting started

Copy

## How to use

In order to operate the first you should do is to sensor you should create an object of `Sensor` class in your Arduino application code:

```
Sensor opticalSensor( SCK_PIN, SDIO_PIN );
```

Then you can use public methods of this class. For example, getting shift along the X-axis is as follows:

```
opticalSensor.GetDX();
```

Full list of available functions one can find in the *ReferenceGuide.pdf* document in `docs` directory.

For information about the sensor refer to official documentation (also in `docs` directory).

## Tests
