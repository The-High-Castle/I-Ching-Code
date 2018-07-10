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
//added buzzer_func
//changed_boot animation
//menu animation added
////////////Display Stuff////////////////
// include the SevenSegmentTM1637 library


#include "SevenSegmentTM1637.h"
#include "SevenSegmentExtended.h"
#include "pitches.h"
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

////button variables///
int random_number=0;
unsigned long debouncedelay=100;
unsigned long debouncedelay2=250;
int trng=51;// True random mode switch
int button[]={48,47,46,45,44};//buttons
////Menu
 int menu_uplastbuttonstate=0;
int menu_downlastbuttonstate=0;
int menu_selectlastbuttonstate=0;
int menu_backlastbuttonstate=0;
int menu_upbuttonstate=0;
int menu_downbuttonstate=0;
int menu_selectbuttonstate=0;
int menu_backbuttonstate=0;
int menu_pushbuttoncounter=3;
int menu_menuchoice=0;
unsigned long menu_debounce;
///regular mode
int run_counter=0;
int run_counter_set=75;
boolean trng_read;//state of trng
boolean done=false;//done getting readying
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
unsigned long timr_debounce;
/// cont variable
int cont_uplastbuttonstate=0;
int cont_downlastbuttonstate=0;
int cont_selectlastbuttonstate=0;

int cont_upbuttonstate=0;
int cont_downbuttonstate=0;
int cont_selectbuttonstate=0;

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

////
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

//random generator values Analog Values
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
  if(menu_menuchoice==0){
   
   if((millis()-menu_animation>leddelay)){
    animation();
    menu_animation=millis();
  
  }
  }
  get_menuchoice();
  
  ///
 
//////////////
}


