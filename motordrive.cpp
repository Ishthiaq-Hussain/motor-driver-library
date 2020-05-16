 #include<Arduino.h>
 #include<motordrive.h>
 motordrive::motordrive(int rmf,int rmb, int lmf,int lmb){
          motor1=rmf;
          motor2=rmb;
          motor3=lmf;
          motor4=lmb;
          }

          void motordrive::pinsetup()
          {
            pinMode(motor1,OUTPUT);
            pinMode(motor2,OUTPUT);
            pinMode(motor3,OUTPUT);
            pinMode(motor4,OUTPUT);
          }
          void motordrive::forward()
          {
            digitalWrite(motor1,HIGH);
            digitalWrite(motor2,LOW);
            digitalWrite(motor3,HIGH);
            digitalWrite(motor4,LOW);
            delay(1000);
          }
          void motordrive::right()
          {
            digitalWrite(motor1,LOW);
            digitalWrite(motor2,LOW);
            digitalWrite(motor3,HIGH);
            digitalWrite(motor4,LOW);
            delay(1000);
          }
          void motordrive::left()
          {
            digitalWrite(motor1,HIGH);
            digitalWrite(motor2,LOW);
            digitalWrite(motor3,LOW);
            digitalWrite(motor4,LOW);
            delay(1000);
          }
          void motordrive::reverse()
          {
            digitalWrite(motor1,LOW);
            digitalWrite(motor2,HIGH);
            digitalWrite(motor3,LOW);
            digitalWrite(motor4,HIGH);
            delay(1000);
          }
          void motordrive::hault()
          {
            digitalWrite(motor1,LOW);
            digitalWrite(motor2,LOW);
            digitalWrite(motor3,LOW);
            digitalWrite(motor4,LOW);
            delay(2000);
          }
