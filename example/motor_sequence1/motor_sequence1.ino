#include <motordrive.h>


motordrive md(9,10,11,12);
void setup(){
  md.pinsetup();
}
void loop(){
  md.forward();
  md.right();
  md.left();
  md.reverse();
  md.hault();
}
