void set_timr(){
 

  timr_upbuttonstate=digitalRead(button[0]);
  timr_downbuttonstate=digitalRead(button[1]);
  timr_selectbuttonstate=digitalRead(button[2]);
 
  
 ////////////// 

  if( timr_upbuttonstate!= timr_uplastbuttonstate){
    //Serial.print("UP!");
    
    if(timr_upbuttonstate==HIGH){
   
   
      
     
      
    if((millis()-timr_debounce)>=debouncedelay){
        if(H_M_S==0){if(hours<24){hours+=1;}}
        if(H_M_S==1){if(minutes<59){minutes+=1;}}
        if(H_M_S==2){if(seconds<59){seconds+=1;}}
        
         
}

        timr_debounce=millis();

      }

    }
    ////////////// 
  if( timr_downbuttonstate!= timr_downlastbuttonstate){
   // Serial.print("DOWN!");
    
    if(timr_downbuttonstate==HIGH){
      
      
     
      
    if((millis()-timr_debounce)>=debouncedelay){
        
        
          if(H_M_S==0){if(hours>0){hours-=1;}}
        if(H_M_S==1){if(minutes>0){minutes-=1;}}
        if(H_M_S==2){if(seconds>0){seconds-=1;}}
        
}

        timr_debounce=millis();

      }

    }
    ////////////// 
   if( timr_selectbuttonstate!= timr_selectlastbuttonstate){
    //Serial.print("SELECT");
    
    
    if(timr_selectbuttonstate==HIGH){
      
      
     
      
    if((millis()-timr_debounce)>=debouncedelay){
        
        display.blink();
        
        display.clear();
       H_M_S+=1;
        
        
}

        timr_debounce=millis();

      }

    }

 
    ////////////// 

   
    timr_uplastbuttonstate=timr_upbuttonstate;
    timr_downlastbuttonstate=timr_downbuttonstate; 
    timr_selectlastbuttonstate=timr_selectbuttonstate;
    
  if(H_M_S==0){display.clear();display.print(hours);}
  if(H_M_S==1){display.clear();display.print(minutes);}
  if(H_M_S==2){display.clear();display.print(seconds);}
        
  
  
  if(H_M_S==3){
    hours_write=hours;
    minutes_write=minutes;
    seconds_write=seconds;
    
    timer_set=1;display.blink();H_M_S=0;}
  
  }
