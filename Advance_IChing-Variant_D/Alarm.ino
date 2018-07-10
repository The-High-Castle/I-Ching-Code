void Alarm(){
  if(alarm_set==0){

    
  for (int g=0;g<12;g++){
      digitalWrite(leds[g],LOW);
    }
  Alarm_upbuttonstate=digitalRead(button[0]);
  Alarm_downbuttonstate=digitalRead(button[1]);
  Alarm_selectbuttonstate=digitalRead(button[2]);
 
  
 ////////////// 

  if( Alarm_upbuttonstate!= Alarm_uplastbuttonstate){
    //Serial.print("UP!");
    
    if(Alarm_upbuttonstate==HIGH){
      
      
     
      
    if((millis()-Alarm_debounce)>=debouncedelay){
        
        
         if(A_H_M_S==0){
        if(A_hours<24){A_hours+=1;}
         }
         if(A_hours==24){A_hours=0;}
        
         if(A_H_M_S==1){
        if(A_minutes<60){A_minutes+=1;}
          }
          if(A_minutes==60){A_minutes=0;}
           if(A_H_M_S==2){
        if(A_seconds<59){A_seconds+=1;}
          }
          if(A_seconds==60){A_seconds=0;}

        Alarm_debounce=millis();

      }

    }
  }
    ////////////// 
  if( Alarm_downbuttonstate!= Alarm_downlastbuttonstate){
   // Serial.print("DOWN!");
    
    if(Alarm_downbuttonstate==HIGH){
      
      
     
      
    if((millis()-Alarm_debounce)>=debouncedelay){
        
        if(A_H_M_S==0){
        if(A_hours>0){A_hours-=1;}
         }
        
         if(A_H_M_S==1){
        if(A_minutes>0){A_minutes-=1;}
          }
           if(A_H_M_S==2){
        if(A_seconds>0){A_seconds-=1;}
          }
        
}

        Alarm_debounce=millis();

      }

    }
    ////////////// 
  if( Alarm_selectbuttonstate!= Alarm_selectlastbuttonstate){
    //Serial.print("SELECT");
    
    
    if(Alarm_selectbuttonstate==HIGH){
      
      
     
      
    if((millis()-Alarm_debounce)>=debouncedelay){
        
        display.blink();
        display.clear();
      if(A_H_M_S==0){EEPROM.write(0,A_hours);}
      if(A_H_M_S==1){EEPROM.write(1,A_minutes);}
      if(A_H_M_S==2){EEPROM.write(2,A_seconds);}
       A_H_M_S+=1;
       if(A_H_M_S==3){display.clear();alarm_set=1;A_H_M_S=0;}
        
        
}

        Alarm_debounce=millis();

      }

    }

}
    ////////////// 
 

    Alarm_uplastbuttonstate=Alarm_upbuttonstate;
    Alarm_downlastbuttonstate=Alarm_downbuttonstate; 
    Alarm_selectlastbuttonstate=Alarm_selectbuttonstate;       
////////*
if(alarm_set==0&&A_H_M_S==0){display.clear();display.print(A_hours);}
if(alarm_set==0&&A_H_M_S==1){display.clear();display.print(A_minutes);}
if(alarm_set==0&&A_H_M_S==2){display.clear();display.print(A_seconds);}
if(alarm_set==1){display.printTime(A_hours,A_minutes,true);}
}

