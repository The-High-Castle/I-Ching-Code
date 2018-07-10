void get_menuchoice(){
 
  if(sub_menuchoice==0){
  if(digitalRead(button[0])==HIGH){menuchoice=1;}
  if(digitalRead(button[1])==HIGH){menuchoice=2;}
  if(digitalRead(button[2])==HIGH){menuchoice=3;}
  if(digitalRead(button[3])==HIGH){menuchoice=4;}
  if(digitalRead(button[4])==HIGH){menuchoice=5;}
  }
  

  /// 
  /*
  if(digitalRead(button[0])==HIGH){menuchoice=1;buzzer_func();}
  if(digitalRead(button[1])==HIGH){menuchoice=2;buzzer_func();}
  if(digitalRead(button[2])==HIGH){menuchoice=3;buzzer_func();}
  if(digitalRead(button[3])==HIGH){menuchoice=4;buzzer_func();}
  if(digitalRead(button[4])==HIGH){menuchoice=5;buzzer_func();}
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
      
      
      debounce=millis();
      }
     }
  ////
  
  
  
  if(buttonpushcounter==3)(buttonpushcounter=0);

  pushes=buttonpushcounter%3;
  
  
}

