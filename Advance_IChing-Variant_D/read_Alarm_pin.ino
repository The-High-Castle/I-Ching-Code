void read_Alarm_pin(){
  if(digitalRead(Alarm_read)==HIGH){Alarm_State=true;
  
  if(alarm_read_once==0){ 
      
      A_hours = EEPROM.read(0);
      A_minutes= EEPROM.read(1);
      A_seconds= EEPROM.read(2);
   if(A_hours>24){A_hours=0;}
   if(A_minutes>59){A_minutes=0;}
   if(A_seconds>24){A_seconds=0;}
   alarm_read_once=1;}
   }
  if(digitalRead(Alarm_read)==LOW){Alarm_State=false;alarm_set=0;}
     }
