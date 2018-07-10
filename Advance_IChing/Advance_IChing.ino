////////Advance_I-Ching////
//Written by A.Abernethy
//2018
////TO DO LIST///
///Add in Clock
///Add in datalogger
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
////////////Display Stuff////////////////
// include the SevenSegmentTM1637 library
#include "SevenSegmentTM1637.h"
#include "SevenSegmentExtended.h"

/* initialize global TM1637 Display object
*  The constructor takes two arguments, the number of the clock pin and the digital output pin:
* SevenSegmentTM1637(byte pinCLK, byte pinDIO);
*/
const byte PIN_CLK = 50;   // define CLK pin (any digital pin)
const byte PIN_DIO = 49;   // define DIO pin (any digital pin)
SevenSegmentExtended    display(PIN_CLK, PIN_DIO);
///debug///
int debug=1;
///debug///
///Menu///
int menudelay(400);
int mode=3;
int pmode=0;
///////////Variables for hexagrams///////////////
byte leds[]={41,40,39,38,37,36,35,34,33,32,31,30};//hexagram display
byte Lline[]={0,0,0,0,0,0};//Line Reading Storage
byte Rline[]={0,0,0,0,0,0};
byte raw[]={0,0,0,0,0,0};
byte R_read=0;
byte L_read=0;
int reading[]={0,0,0};//To get reading for coin
///////////////
int buzzer=2;// buzzer pin
int buzzer_set=5;
int buzzer_inc=1;
int buzzer_mode=0;
unsigned long buzzer_t;
int buzzer_delay(125);
int buzzer_delay_inc=5;

////button variables///
unsigned long debouncedelay=100;
unsigned long debouncedelay2=250;
int trng=51;// True random mode switch
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
int timer_set=0;
long int minute;
long int second;
/// cont variable
int cont_run;
int cont_set;
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
int noisepwr=52;//noise genetrator power pin
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
int thinkingled=53;//Thinking Led
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

void loop()

{

  buzzer_func();
  
  ///debug///
  if(debug==1){
    debug_func();
  }
  ///
 
  
  ///
  if(sub_menuchoice==0){
   
   if((millis()-menu_animation>leddelay)){
    animation();
    menu_animation=millis();
  }
  }
  
  get_menuchoice();
  
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
  if(digitalRead(noisepwr)==HIGH){digitalWrite(noisepwr,LOW);}
  Serial.print("triggered!");
  for(int x=0;x<12;x++){
  
    digitalWrite(leds[x],LOW);
  }
     run_counter=0;
    display.clear();
    display.print("Exit");
    display.blink();
    digitalWrite(thinkingled,LOW);
      for(int j=0;j<6;j++)
      {
        if(j<6){
       Lline[j]=0;
        Rline[j]=0;
        }
       
                    
    
                    
                    }
  
                    menuchoice=0;
                    sub_menuchoice=0;
                    R_read=0;
                    L_read=0;
                    done=false;
                    buzzer_mode=0;
                    buzzer_func();
                    display.clear();
                   
  
  }
  }
  

//////////////
}


