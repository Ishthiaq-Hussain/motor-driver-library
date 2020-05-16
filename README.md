# Motor Driver Arduino library


> This library is for Arduino for you to ease ur work with motor driver in a robot  with simple code.



## Ciruit Diagram
+ ![Wiring](https://github.com/Ishthiaq-Hussain/motor-driver-library/blob/master/Untitled%20Sketch_bb.png)

## Installation
[Installing Additional Arduino Libraries](https://www.arduino.cc/en/Guide/Libraries)

## Usage
+ Include library file header
```cpp
#include<motordrive.h>
```

+ Create an object, this object takes one parameters which corressponds to the digital pins is connected to on the Arduino.
```cpp
motordrive md(9,10,11,12);
```
connect the four motor driver pins from 9 to 12 respectively
+ In *loop()* function, call the forward function to move forward
```cpp
md.forward();
```

+ In *loop()* function, call the reverse function to move reverse
```cpp
md.reverse();
```

+ In *loop()* function, call the right function to move right
```cpp
md.right();
```

+ In *loop()* function, call the left function to move left
```cpp
md.left();
```

+ In *loop()* function, call the hault function to stop 
```cpp
md.hault();
```
> These functions will help u to navigate using simple codes

## Contributors
    Vinodhini
    Ishthiaq Hussain
    
