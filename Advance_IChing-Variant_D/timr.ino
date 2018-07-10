void timr(){
DateTime now = rtc.now();
 
  
  digitalWrite(thinkingled,HIGH);

  if(timer_set==1){
    runcmd=1;
  if((millis()-t_timr)>1000){
    for (int g=0;g<12;g++){
      digitalWrite(leds[g],LOW);
    }
   if(hours>0&&minutes==0){hours-=1;minutes=60;}
   
   if(seconds==0){
   
    if(minutes!=0){
    minutes-=1;
    
    
  }
    seconds=60;
   }
 

    if(seconds%2==0){
      
      trnd_run();
      lines();
    
       
     
    
      }
    
    
    
    
    seconds-=1;
    t_timr=millis();
  }
    
  }
  if(hours>0){
  display.printTime(hours,minutes,true);}
  if(hours==0){
    display.printTime(minutes,seconds,true);
  }
  DateTime future;
  if(hours==hours_write||minutes==minutes_write||minutes==hours_write){DateTime future(now+ TimeSpan(0,hours,minutes,seconds));}
  if(now.hour()==future.hour()&&now.minute()==future.minute()&&now.second()==future.second()){timer_ran=1;}
  
  if(timer_ran==1){
  digitalWrite(thinkingled,LOW);
  display.clear();
  buzzer_mode=2;
  lines();
  display.printDualCounter(L_read,R_read);
  WriteSD();
  runcmd=0;
  timer_set=0;
  timer_ran=0;
  }
  
  
  
  
}
  
