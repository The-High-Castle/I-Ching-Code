void buzzer_func(){
  if(buzzer_mode==0){
   if(
    digitalRead(button[0])==LOW||
    digitalRead(button[1])==LOW||
    digitalRead(button[2])==LOW||
    digitalRead(button[3])==LOW||
    digitalRead(button[4])==LOW){
   buzzer_set=0;}
  if(digitalRead(button[0])==HIGH){buzzer_set=10;}
  if(digitalRead(button[1])==HIGH){buzzer_set=20;}
  if(digitalRead(button[2])==HIGH){buzzer_set=30;}
  if(digitalRead(button[3])==HIGH){buzzer_set=40;}
  if(digitalRead(button[4])==HIGH){buzzer_set=50;}
  }

  
  
  if(buzzer_mode==1){
  buzzer_set=random(0,150);
  
  }
  if(buzzer_mode==2){
    if((millis()-buzzer_t>buzzer_delay)){
      Serial.print("tick!");
      buzzer_set+=buzzer_inc;
      buzzer_delay+=buzzer_delay_inc;
      if(buzzer_set==150){buzzer_inc=-10;}
      if(buzzer_set==0){buzzer_inc=10;}
      if(buzzer_delay==100){buzzer_delay_inc=-10;}
      if(buzzer_delay==0){buzzer_delay_inc=10;}
      buzzer_t=millis();
    }
  }

  if(buzzer_mode==3){
   for(int e=0;e<3;e++){
   buzzer_set=random(0,150);
   analogWrite(buzzer,buzzer_set);
   delay(100);
   buzzer_set=random(0,150);
   analogWrite(buzzer,buzzer_set);
   delay(100);
   buzzer_set=random(0,150);
   analogWrite(buzzer,buzzer_set);
   delay(100);
   buzzer_set=random(0,150);
   analogWrite(buzzer,buzzer_set);
   delay(100);
   buzzer_set=random(0,150);
   analogWrite(buzzer,buzzer_set);
   delay(100);
   buzzer_set=random(0,150);
   analogWrite(buzzer,buzzer_set);
   if(e==2){buzzer_set=0;}
   }
   
  }
  analogWrite(buzzer,buzzer_set);
  
  }
