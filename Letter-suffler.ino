#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R2, /* reset=*/ U8X8_PIN_NONE);

String textOut;
int delayTime;

void setup() {
  u8g2.begin();  
}


void draw(){

  for (int i = 0; i<30;i++) {
    
    switch (i) {
     case 0 : textOut = "FZMQ"; delayTime = 0; break;
     case 1 : textOut = "ZLEU"; break;
     case 2 : textOut = "FOBN"; break;
     case 3 : textOut = "DWYO"; break;
     case 4 : textOut = "RAIY"; break;
     case 5 : textOut = "ZEYR"; break;
     case 6 : textOut = "HRRT"; break;
     case 7 : textOut = "PGBO"; break;
     case 8 : textOut = "PBMM"; break;
     case 9 : textOut = "PHIO"; break;
     case 10 : textOut = "PGEB"; break;
     case 11 : textOut = "PFTW"; break;
     case 12 : textOut = "PWFF"; break;
     case 13 : textOut = "PWBS"; break;
     case 14 : textOut = "PRAA"; break;
     case 15 : textOut = "PRJR"; break;
     case 16 : textOut = "PRPR"; break;
     case 17 : textOut = "PRZP"; break;
     case 18 : textOut = "PRXB"; break;
     case 19 : textOut = "PRJF"; break;
     case 20 : textOut = "PRBT"; break;
     case 21 : textOut = "PRVS"; break;
     case 22 : textOut = "PRVM"; break;
     case 23 : textOut = "PRVX"; break;
     case 24 : textOut = "PRVT"; break;
     case 25 : textOut = "PRVA"; break;
     case 26 : textOut = "PRVK"; break;
     case 27 : textOut = "PRVJ"; break;
     case 28 : textOut = "PRVN"; break;
     case 29 : textOut = "    "; delayTime = 1400; break;
    }


    do {
       u8g2.setFont(u8g2_font_inb21_mf);
       u8g2.drawRFrame(0,0,128,64,5);
       u8g2.drawStr(25, 43, textOut.c_str());
       delay(delayTime);
    } while ( u8g2.nextPage() );

  }; //For loop ends here
   
};


void loop() {
  draw();
  delay(1600);
}
