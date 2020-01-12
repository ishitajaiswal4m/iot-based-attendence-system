#include <LiquidCrystal.h>

 boolean stringComplete = false;
 String inputString = " " ;
 int n = 0;
 #define BUZZ 8

 //initialize the library with the numbers of the interface pins 

 LiquidCrystal lcd{2,3,4,5,6,7};// R5,EN,D4,D5,D6,D7 

 int count = 0;
 char input[12]; //memory for storing 12 characters of ID
   
void setup()
{
   Serial.begin(9600);
   pinMode(BUZZ,OUTPUT);
   inputString.reserve(200);
      //set up the LCD's number of columns and rows:

                 Serial.begin(9600); //serial communication enabling by 9600 baud rate
            pinMode(8,INPUT); //receive pin set as output 
                            lcd.setCursor(0,0);// move cursor to second line  
                            lcd.print("KIET SEC:-B "); //showing name
                            lcd.setCursor(0,1);
                            lcd.print("RFID-READER ");
                            delay(2000);
                            lcd.setCursor(0,1);
                            lcd.print(" SWIPE CARD "); //showing name 
                            delay(2000);
                            
                            
}

void loop() {
  if(stringComplete){
     Serial.println(inputString);
     if(inputString.equals("10004AAAB949")){  //A
           lcd.setCursor(0,0); //move cursor to second line 
           lcd.print("WELCOME     ");  //showing name
                        lcd.setCursor(0,1);  // move cursor to second line 
                        lcd.print("   ISHITA   "); //showing name 

     }

      if(inputString.equals("10004B0196CC")){  //B
           lcd.setCursor(0,0); //move cursor to second line 
           lcd.print("WELCOME     ");  //showing name
                        lcd.setCursor(0,1);  // move cursor to second line 
                        lcd.print("  PRASHANT  "); //showing name 

     }
     if(inputString.equals("10004AD5B13E")){  //C
           lcd.setCursor(0,0); //move cursor to second line 
           lcd.print("WELCOME     ");  //showing name
                        lcd.setCursor(0,1);  // move cursor to second line 
                        lcd.print("  NIKHIL  "); //showing name 

     }
     if(inputString.equals("10004AC4CA54")){  //D
           lcd.setCursor(0,0); //move cursor to second line 
           lcd.print("WELCOME     ");  //showing name
                        lcd.setCursor(0,1);  // move cursor to second line 
                        lcd.print("  AKASH  "); //showing name 

     }
      
     stringComplete = false;
     inputString = "";
  }
}

void serialEvent() {
    while(Serial.available()){
      n++;
      char inChar = (char) Serial.read();
      inputString == inChar;
      if(n >= 12){
        n = 0;
        stringComplete = true;
        
      }
    }
}


                      
        
      
