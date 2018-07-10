void rnds(){
  for (int g=0;g<12;g++){
      digitalWrite(leds[g],LOW);
    }
  rnds_upbuttonstate=digitalRead(button[0]);
  rnds_downbuttonstate=digitalRead(button[1]);
  rnds_selectbuttonstate=digitalRead(button[2]);
  rnds_backbuttonstate=digitalRead(button[3]);
  
 ////////////// 

  if( rnds_upbuttonstate!= rnds_uplastbuttonstate){
    //Serial.print("UP!");
    
    if(rnds_upbuttonstate==HIGH){
      
      
     
      
    if((millis()-rnds_debounce)>=debouncedelay){
        
        
         
        if(rnds_pushbuttoncounter!=9){rnds_pushbuttoncounter+=1;}
}

        rnds_debounce=millis();

      }

    }
    ////////////// 
  if( rnds_downbuttonstate!= rnds_downlastbuttonstate){
   // Serial.print("DOWN!");
    
    if(rnds_downbuttonstate==HIGH){
      
      
     
      
    if((millis()-rnds_debounce)>=debouncedelay){
        
        
        if(rnds_pushbuttoncounter!=1){rnds_pushbuttoncounter-=1;}
        
}

        rnds_debounce=millis();

      }

    }
    ////////////// 
  if( rnds_selectbuttonstate!= rnds_selectlastbuttonstate){
    //Serial.print("SELECT");
    
    
    if(rnds_selectbuttonstate==HIGH){
      
      
     
      
    if((millis()-rnds_debounce)>=debouncedelay){
        
        display.blink();
        randomSeed(seed_val);
        rnds_menuchoice=rnds_pushbuttoncounter;
        
        
}

        rnds_debounce=millis();

      }

    }

 
    ////////////// 
  if( rnds_backbuttonstate!= rnds_backlastbuttonstate){
    //Serial.print("BACK!");
    
    if(rnds_backbuttonstate==HIGH){
      
      
     
      
    if((millis()-rnds_debounce)>=debouncedelay){
        
        rnds_pushbuttoncounter=1;
        rnds_menuchoice=0;
        digitalWrite(noisepwr,HIGH);
        
        
}

        rnds_debounce=millis();

      }
 
    }
    rnds_backlastbuttonstate=rnds_backbuttonstate;
    rnds_uplastbuttonstate=rnds_upbuttonstate;
    rnds_downlastbuttonstate=rnds_downbuttonstate; 
    rnds_selectlastbuttonstate=rnds_selectbuttonstate;       
////////*

