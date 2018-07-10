void cont_func(){
  if(done==false&&cont_run==0){display.clear();}
  if(cont_set==0){display.print(cont_run);}
  

  cont_upbuttonstate=digitalRead(button[0]);
  cont_downbuttonstate=digitalRead(button[1]);
  cont_selectbuttonstate=digitalRead(button[2]);
 
  
 ////////////// 

  if( cont_upbuttonstate!= cont_uplastbuttonstate){
    //Serial.print("UP!");
    
    if(cont_upbuttonstate==HIGH){
   
   
      
     
      
    if((millis()-cont_debounce)>=debouncedelay){
     if(cont_run<100){cont_run+=1;}
       
         
}

        cont_debounce=millis();

      }

    }
    ////////////// 
  if( cont_downbuttonstate!= cont_downlastbuttonstate){
   // Serial.print("DOWN!");
    
    if(cont_downbuttonstate==HIGH){
      
      
     
      
    if((millis()-cont_debounce)>=debouncedelay){
        
        
          if(cont_run>5){cont_run-=1;}
      
}

        cont_debounce=millis();

      }

    }
    ////////////// 
   if( cont_selectbuttonstate!= cont_selectlastbuttonstate){
    //Serial.print("SELECT");
    
    
    if(cont_selectbuttonstate==HIGH){
      
      
     
      
    if((millis()-cont_debounce)>=debouncedelay){
        
        display.blink();
        runcmd=1;
        display.clear();
       cont_set=1;
        
        
}

        cont_debounce=millis();

      }
      

    }

 cont_uplastbuttonstate=cont_upbuttonstate;
    cont_downlastbuttonstate=cont_downbuttonstate; 
    cont_selectlastbuttonstate=cont_selectbuttonstate;
    ////////////// 
  /////
  if(cont_set==1){
    digitalWrite(thinkingled,HIGH);
     if((millis()-t_cont)>2501){
      if(cont_run%2==0){buzzer_mode=0;}
      if(cont_run%2==1){buzzer_mode=1;}
      
   
        trnd_run();
   
      
      lines();
      cont_run-=1;
      WriteSD();
      t_cont=millis();
      
      if(cont_run==0){
      buzzer_mode=2;
      runcmd=0;
      digitalWrite(thinkingled,LOW);
      cont_set=0;done=true;
      
       }
     }
     
     display.printDualCounter(L_read,R_read);
  }
  
}

