void get_menuchoice(){
  if(menuchoice==0){
     
    
    if((millis()-menu_animation>leddelay)){
    animation();
    menu_animation=millis();
  }
  }
  if(sub_menuchoice==0){
  if(digitalRead(button[0])==HIGH){menuchoice=1;digitalWrite(buzzer,HIGH);}
  if(digitalRead(button[1])==HIGH){menuchoice=2;digitalWrite(buzzer,HIGH);}
  if(digitalRead(button[2])==HIGH){menuchoice=3;digitalWrite(buzzer,HIGH);}
  if(digitalRead(button[3])==HIGH){menuchoice=4;digitalWrite(buzzer,HIGH);}
  if(digitalRead(button[4])==HIGH){menuchoice=5;digitalWrite(buzzer,HIGH);}
  }
  

  /// 
  /*
  if(digitalRead(button[0])==HIGH){menuchoice=1;digitalWrite(buzzer,HIGH);}
  if(digitalRead(button[1])==HIGH){menuchoice=2;digitalWrite(buzzer,HIGH);}
  if(digitalRead(button[2])==HIGH){menuchoice=3;digitalWrite(buzzer,HIGH);}
  if(digitalRead(button[3])==HIGH){menuchoice=4;digitalWrite(buzzer,HIGH);}
  if(digitalRead(button[4])==HIGH){menuchoice=5;digitalWrite(buzzer,HIGH);}
  */

  ////
  if((digitalRead(button[0])==HIGH||
     digitalRead(button[1])==HIGH||
     digitalRead(button[2])==HIGH||
     digitalRead(button[3])==HIGH||
     digitalRead(button[4])==HIGH)&&
     buttonstate==0)
     {
      
      
      if((millis()-debounce)>=debouncedelay){
        buttonpushcounter++;
        buttonstate=1;
        
        debounce=millis();
      
      
      }
     }
  ////
   if(
     digitalRead(button[0])==LOW&&
     digitalRead(button[1])==LOW&&
     digitalRead(button[2])==LOW&&
     digitalRead(button[3])==LOW&&
     digitalRead(button[4])==LOW)
     {
      buttonstate=0;
      if(((millis()-debounce)>=debouncedelay2)){
      buttonpushcounter=0;
      digitalWrite(buzzer,LOW);
      
      debounce=millis();
      }
     }
  ////
  
  
  
  if(buttonpushcounter==3)(buttonpushcounter=0);

  pushes=buttonpushcounter%3;
  
  
}

