void startup(){
  if(debug==1){
Serial.begin(9600);
  }
/*Set Timers*/
get_read=millis();
coin_t=millis();
coin_debounce=millis();
t_timr=millis();
menu_animation=millis();
rnds_debounce=millis();
/*Buzzer,thinking,TRNG and noise pwr*/
pinMode(buzzer,OUTPUT);
pinMode(thinkingled,OUTPUT);
pinMode(trng,INPUT);
if(digitalRead(trng)==HIGH){
  skipt=true;
}

pinMode(noisepwr,52);
  
  /* LEDS */
  for(int x=0;x<12;x++){
    pinMode(leds[x],OUTPUT);
    digitalWrite(leds[x],HIGH);
  }
   /* buttons */
  for(int x=0;x<5;x++){
    pinMode(button[x],INPUT);
  }
  
  /*Start Up Display*/
 display.begin();
 display.print("THE I-CHING");
 if(skipt==true){
 delay(2000);
 digitalWrite(thinkingled,HIGH);
 digitalWrite(noisepwr,HIGH);
 delay(2000);
 digitalWrite(buzzer,HIGH);
 delay(2000);
 digitalWrite(buzzer,LOW);
 delay(2000);
 digitalWrite(noisepwr,LOW);}
 display.clear();
  /* LEDS */
  for(int x=0;x<12;x++){
  
    digitalWrite(leds[x],LOW);
  }

}

