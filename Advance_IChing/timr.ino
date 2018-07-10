void timr(){
  digitalWrite(thinkingled,HIGH);

  if(timer_set==1){
  if((millis()-t_timr)>1001){
    buzzer_mode=1;
    
   if(second==0){
    if(minute!=0){
    minute-=1;
  }
    second=60;
   }
    if(second%2==0){
      buzzer_mode=0;
      
      lines();
      if(trng_read==false){
      prnd_run();
      }
      if(trng_read==true){
        trnd_run();
     
      }
      }
    
    
    
    
    second-=1;
    t_timr=millis();
  }
    
  }
  display.printDualCounter(minute,second);
  
  if(minute==0&&second==0&&done==true){
  digitalWrite(thinkingled,LOW);
  display.clear();
  buzzer_mode=2;
  
  lines();
  display.printDualCounter(L_read,R_read);
  timer_set=0;
  
  }
  
}
  
