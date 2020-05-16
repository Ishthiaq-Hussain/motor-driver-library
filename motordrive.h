 #ifndef motordrive_h
 #define motordrive_h
 #include<Arduino.h>
 class motordrive{
  private:
      int motor1;
      int motor2;
      int motor3;
      int motor4;

      public:
         motordrive(int rmf,int rmb, int lmf,int lmb);
         void pinsetup();
         void forward();
         void right();
         void left();
         void reverse();
         void hault();
};
#endif