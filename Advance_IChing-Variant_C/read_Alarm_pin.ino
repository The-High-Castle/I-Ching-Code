void read_Alarm_pin(){
  if(digitalRead(Alarm_State)==HIGH){Alarm_read=true;}
  if(digitalRead(trng)==LOW){Alarm_read=false;}
     }
