////////Advance_I-Ching////
//Written by A.Abernethy
//2018
////TO DO LIST///
///Add in Clock(done)
///Add in datalogger(done)
///

////////////Change Log///////////
//6/28/2018//
//Started Coding//
//7/2/2018//
//Completed Beta//
///7/3/2018//
//Re-Wrote lines()
//new analog values.
//changed buzzer pin, led pins
//added buzzer_func
//changed_boot animation
//menu animation added
//7/7/2018
///Add in datalogger(done)
///Add in Clock(done)
////////////Display Stuff////////////////
// include the SevenSegmentTM1637 library


#include "SevenSegmentTM1637.h"
#include "SevenSegmentExtended.h"
#include "pitches.h"
#include "RTClib.h"
#include <Wire.h>
#include <SPI.h>
#include <SD.h>

#include "RTClib.h"
/* initialize global TM1637 Display object
*  The constructor takes two arguments, the number of the clock pin and the digital output pin:
* SevenSegmentTM1637(byte pinCLK, byte pinDIO);
*/
///Temprature variable///
float temparture;
//////
////sleep mode//
boolean sleep_state=false;
int sleep_read[]={0,0,0,0,0};
int sleep_avg;
int wake=1;
unsigned long wake_timer;
int wake_delay=30000;
/////
const int chipSelect = 53;
const byte PIN_CLK = 22;   // define CLK pin (any digital pin)
const byte PIN_DIO = 23;   // define DIO pin (any digital pin)
SevenSegmentExtended    display(PIN_CLK, PIN_DIO);

RTC_DS3231 rtc;

char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
///debug///
int debug=1;
///debug///
///Menu///
int menudelay(400);
int mode=3;
int pmode=0;
///////////Variables for hexagrams///////////////
byte leds[]={36,37,38,39,40,41,30,31,32,33,34,35};//hexagram display
byte Lline[]={0,0,0,0,0,0};//Line Reading Storage
byte Rline[]={0,0,0,0,0,0};
byte raw[]={0,0,0,0,0,0};
byte R_read=0;
byte L_read=0;
int reading[]={0,0,0};//To get reading for coin
///////////////
int buzzer=11;// buzzer pins

int buzzer_set=0;
int buzzer_inc=1;
int buzzer_mode=0;
unsigned long buzzer_t;
int buzzer_delay(125);
int buzzer_delay_inc=5;
int notes[]={NOTE_A5,NOTE_AS5,NOTE_B5,NOTE_C6,NOTE_D6,NOTE_DS6,NOTE_E6,NOTE_E6,NOTE_F6,NOTE_FS6,NOTE_G6,NOTE_GS6,NOTE_A6,NOTE_AS6,NOTE_B6,NOTE_C7};

////Alarm Clock settings;
int long A_hours=0;
int long A_minutes=0;
int long A_seconds=0;
////button variables///
int random_number=0;
unsigned long debouncedelay=100;
unsigned long debouncedelay2=250;
int trng=24;// True random mode switch
int button[]={48,47,46,45,44};//buttons
int buttonstate;
int lastbuttonstate;
int menuchoice=0;
int sub_menuchoice=0;
int lastmenuchoice=0;
int buttonpushcounter=0;
int pushes=0;
int run_counter=0;
int run_counter_set=75;
boolean trng_read;//state of trng
boolean done;//done getting readying
///timr variable
int H_M_S=0;
int timr_uplastbuttonstate=0;
int timr_downlastbuttonstate=0;
int timr_selectlastbuttonstate=0;

int timr_upbuttonstate=0;
int timr_downbuttonstate=0;
int timr_selectbuttonstate=0;



int timer_set=0;//when to run timer.
long int hours;
long int minutes;
long int seconds;
long int future_hours;
long int future_minutes;
long int future_seconds;
long int hours_write;
long int minutes_write;
long int seconds_write;
unsigned long timr_debounce;
/// cont variable
int cont_uplastbuttonstate=0;
int cont_downlastbuttonstate=0;
int cont_selectlastbuttonstate=0;

int cont_upbuttonstate=0;
int cont_downbuttonstate=0;
int cont_selectbuttonstate=0;
int cont_write;
int cont_run;
int cont_set;
unsigned long cont_debounce;
unsigned long t_cont;
// coin variable
int coin_n=0;
int coin_sum=0;
int coin[]={0,0,0};
int toss=0;
int coin_lastbuttonstate=0;
int coin_buttonstate=0;
int coin_buttonpushcounter=0;
unsigned long coin_t;
///
///rndS buttons
unsigned long get_read;
int get_readdelay=80;
unsigned long rnds_debounce;
int rnds_uplastbuttonstate=0;
int rnds_downlastbuttonstate=0;
int rnds_selectlastbuttonstate=0;
int rnds_backlastbuttonstate=0;
int rnds_upbuttonstate=0;
int rnds_downbuttonstate=0;
int rnds_selectbuttonstate=0;
int rnds_backbuttonstate=0;
int rnds_pushbuttoncounter=5;
int rnds_menuchoice=0;
int trnd_runmode=0;
int noisepwr=44;//noise genetrator power pin
  ///rnds Analog Values
    int rnds_L_pot=0;//left pot.
    int rnds_R_pot=0;//right pot.
    int rnds_photocell=0;//photocell value
    int rnds_noise=0;//Noise vaule
    unsigned long seed_val=0;
    /////regualr Analog Values
     int L_pot=0;//left pot.
    int R_pot=0;//right pot.
    int photocell=0;//photocell value
    int noise=0;//Noise vaule

///animations//
int thinkingled=42;//Thinking Led
int leddelay(200);//menudelay
int leddelay_inc=-1;
int LNled=0;//left side currentled
int Ldirection=1;//chase direction(Left)
int Rdirection=-1;//chase direction(Right)
int RNled=11;//right side currentled
////running animation
int R_leddelay(250);//menudelay
int R_LNled=0;//left side currentled
int R_Ldirection=1;//chase direction(Left)
int R_Rdirection=1;//chase direction(Right)
int R_RNled=6;//right side currentled



boolean skipt;//skip boot up
int menuedisabled=0;// is the iching running?
int runcmd=0;
////////the timers////
unsigned long debounce;
unsigned long menu_animation;

unsigned long coin_debounce;

unsigned long t_timr;




///////////////////////////////////
void setup() {
  startup();
  
}

void loop(){
  DateTime now = rtc.now();
  sleep();
 
  
  ///debug///
  if(debug==1){
    debug_func();
  }
  ///
 
  
  ///
  if(sleep_state==false){
    display.on();
    get_menuchoice();
     buzzer_func();
  if(sub_menuchoice==0){
    
      if(digitalRead(button[0])==LOW&&
      digitalRead(button[1])==LOW&&
      digitalRead(button[2])==LOW&&
      digitalRead(button[3])==LOW&&
      digitalRead(button[4])==LOW
      )
      {
        if(menuchoice==0){
         
        display.printDualCounter(now.hour(),now.minute());}
      }
      else{
       
        display.clear();
        
      }
    
   
   if((millis()-menu_animation>leddelay)){
    animation();
    menu_animation=millis();
  }
  }
  
  }
  if(sleep_state==true){
     for (int g=0;g<12;g++){
      digitalWrite(leds[g],LOW);
    }
        display.clear();
        display.off();
  }
  
  
  
  ///
  switch(menuchoice){
    if(sub_menuchoice==0){
    case 1:
    display.print("timr");
    if(pushes==2&&digitalRead(button[0])==HIGH){pushes=0;display.blink();sub_menuchoice=1;menuchoice=6;}
    break;
    case 2:
    display.print("Cont");
    if(pushes==2&&digitalRead(button[1])==HIGH){pushes=0;display.blink();sub_menuchoice=2;menuchoice=7;}
    break;
    case 3:
    display.print(" Reg");
    if(pushes==2&&digitalRead(button[2])==HIGH){pushes=0;display.blink();sub_menuchoice=3;menuchoice=8;}
    break;
    case 4:
    display.print("Coin");
    if(pushes==2&&digitalRead(button[3])==HIGH){pushes=0;display.blink();sub_menuchoice=4;menuchoice=9;}
    break;
    case 5:
    display.print("RndS");
    if(pushes==2&&digitalRead(button[4])==HIGH){pushes=0;display.blink();sub_menuchoice=5;menuchoice=10;}
    break;
  }
  if(sub_menuchoice==1){
    case 6:
    
    if(done==false&&timer_set==0){readtrngpin();set_timr();}
    if(timer_set==1){buzzer_func();timr();}
    if(done==true&&timer_set==0){
      
       lines();
      display.printDualCounter(L_read,R_read);
      
      WriteSD();
   
    }
  
     
    
    }
    
    
    
    
  if(sub_menuchoice==2){
    case 7:
    
    readtrngpin();
    cont_func();
    
    }
    /////////
  if(sub_menuchoice==3){
    case 8:
    readtrngpin();
    regular_run();
 }

  /////////////  
  if(sub_menuchoice==4){
    case 9:
    coin_func();
    }
    ///////////////
  if(sub_menuchoice==5){
    case 10:
    rnds();
    ////
    }
  if(digitalRead(button[4])==HIGH&&sub_menuchoice!=0){
    menuchoice=11;
  case 11:
  reset();
  
  }
  

//////////////
}
}


