void startup(){
  
  if(debug==1){
Serial.begin(9600);
  }
/*Set Timers*/
menu_debounce=millis();
timr_debounce=millis();
buzzer_t=millis();
get_read=millis();
coin_t=millis();
coin_debounce=millis();
t_timr=millis();
menu_animation=millis();
rnds_debounce=millis();
cont_debounce=millis();
t_cont=millis();
/*Buzzer,thinking,TRNG and noise pwr*/


pinMode(thinkingled,OUTPUT);
pinMode(trng,INPUT);
if(digitalRead(trng)==HIGH){
  skipt=true;
}

pinMode(noisepwr,52);
  /*Start Up Display*/
 display.begin();
 
  
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
  randomSeed(analogRead(A3));
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

