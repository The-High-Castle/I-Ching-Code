void startup(){
  
  if(debug==1){
Serial.begin(9600);
 display.begin();
  }
   if (!SD.begin(chipSelect)) {
    display.print("Err");
    display.blink();
    // don't do anything more:
    
  }
  
  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, lets set the time!");
    // following line sets the RTC to the date & time this sketch was compiled
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // This line sets the RTC with an explicit date & time, for example to set
    // January 21, 2014 at 3am you would call:
    // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));
  }
/*Set Timers*/
wake_timer=millis();
buzzer_t=millis();
get_read=millis();
coin_t=millis();
coin_debounce=millis();
t_timr=millis();
menu_animation=millis();
rnds_debounce=millis();
/*Buzzer,thinking,TRNG and noise pwr*/
 randomSeed(analogRead(A3)+analogRead(A2)+analogRead(A1));
DateTime now = rtc.now();
   File dataFile1 = SD.open("Startup.txt", FILE_WRITE);
   dataFile1.println("/////////////");
   dataFile1.println("Turned On");
   dataFile1.println("/////////////");
   dataFile1.print(now.year());
   dataFile1.print("/");
   dataFile1.print(now.month());
   dataFile1.print("/");
   dataFile1.print(now.day());
   dataFile1.print("|");
   dataFile1.print(now.hour());
  dataFile1.print(":");
  dataFile1.print(now.minute());
  dataFile1.print(":");
  dataFile1.println(now.second());
  dataFile1.print("Your Random Number Was  ");
  dataFile1.println(random(1,100000));
  dataFile1.println("/////////////");
  dataFile1.close();

pinMode(thinkingled,OUTPUT);
pinMode(trng,INPUT);
if(digitalRead(trng)==HIGH){
  skipt=true;
}

pinMode(noisepwr,OUTPUT);
  /*Start Up Display*/

 
  
  /* LEDS */
  for(int x=0;x<12;x++){
    pinMode(leds[x],OUTPUT);}
    for(int s=0;s<6;++s){
       if(s==0){
        
        }
   
    digitalWrite(leds[s],HIGH);
    digitalWrite(leds[s+6],HIGH);
   
   
    delay(52);
    
    
  }
   
        
   /* buttons */
  for(int x=0;x<5;x++){
    pinMode(button[x],INPUT);
  }
  pinMode(buzzer,OUTPUT);

  display.print("THE I-CHING");

 

  buzzer_mode=3;


 if(skipt==true){
 
 run_counter_set=random(1,76);///regular run gen;
 
 delay(2000);

 digitalWrite(thinkingled,HIGH);
 digitalWrite(noisepwr,HIGH);
 buzzer_func();
 
 
delay(750);
 digitalWrite(noisepwr,LOW);}
 digitalWrite(thinkingled,LOW);
 display.clear();
  /* LEDS */
  for(int x=0;x<12;x++){
  
    digitalWrite(leds[x],LOW);
  }


buzzer_mode=0;
buzzer_func();
}

