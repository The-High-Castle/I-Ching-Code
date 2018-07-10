void get_menuchoice(){

  /////
  
  menu_upbuttonstate=digitalRead(button[0]);
  menu_downbuttonstate=digitalRead(button[1]);
  menu_selectbuttonstate=digitalRead(button[2]);
  menu_backbuttonstate=digitalRead(button[3]);
  if(digitalRead(button[4])==HIGH){display.clear();display.print("Exit");display.blink();reset();}
  
 ////////////// 

  if( menu_upbuttonstate!= menu_uplastbuttonstate){
    //Serial.print("UP!");
    
    if(menu_upbuttonstate==HIGH){
      
     
     
      
    if((millis()-menu_debounce)>=debouncedelay){
        
        
          if(menu_pushbuttoncounter<5){menu_pushbuttoncounter+=1;}
        
}

        menu_debounce=millis();

      }

    }
    ////////////// 
  if( menu_downbuttonstate!= menu_downlastbuttonstate){
   // Serial.print("DOWN!");
    
    if(menu_downbuttonstate==HIGH){
      
      
     
      
    if((millis()-menu_debounce)>=debouncedelay){
        
        
        if(menu_pushbuttoncounter>0){menu_pushbuttoncounter-=1;}
        
}

        menu_debounce=millis();

      }

    }
    ////////////// 
  if(menu_menuchoice==0){
  if( menu_selectbuttonstate!= menu_selectlastbuttonstate){
    //Serial.print("SELECT");
    
    
    if(menu_selectbuttonstate==HIGH){
      
      
     
      
    if((millis()-menu_debounce)>=debouncedelay){
        
        display.blink();
        display.clear();
        menu_menuchoice=menu_pushbuttoncounter;
        
        
}

        menu_debounce=millis();

      }

    }
  }
 
    ////////////// 
  if( menu_backbuttonstate!= menu_backlastbuttonstate){
    //Serial.print("BACK!");
    
    if(menu_backbuttonstate==HIGH){
      
      
     
      
    if((millis()-menu_debounce)>=debouncedelay){
        
        menu_pushbuttoncounter=1;
        menu_menuchoice=0;
       
        
        
}

        menu_debounce=millis();

      }
 
    }
    menu_backlastbuttonstate=menu_backbuttonstate;
    menu_uplastbuttonstate=menu_upbuttonstate;
    menu_downlastbuttonstate=menu_downbuttonstate; 
    menu_selectlastbuttonstate=menu_selectbuttonstate;
    ///////
    if(menu_menuchoice==0){
if(menu_pushbuttoncounter==1){
  //Serial.print("1");
  display.clear();display.print("timr");}
if(menu_pushbuttoncounter==2){
  //Serial.print("2");
  display.clear();display.print("Cont");}
if(menu_pushbuttoncounter==3){
  //Serial.print("3");
  display.clear();display.print("Reg");}
if(menu_pushbuttoncounter==4){
  //Serial.print("4");
  display.clear();display.print("Coin");}
  if(menu_pushbuttoncounter==5){
  //Serial.print("5");
  display.clear();display.print("rnds");}
    }
    /////// 
    if(menu_menuchoice==1){
     Serial.print("trigger Timer!");
      if(timer_set==0){set_timr();}
      if(timer_set==1){timr();}
      if(done==true){menu_menuchoice=0;done=false;timer_set=0;}
    }
  //Serial.print("1");
  
    
  
if(menu_menuchoice==2){
 
  }
if(menu_menuchoice==3){
  
  }

if(menu_menuchoice==4){
 
  }
if(menu_menuchoice==5)
//Serial.print("5");
{
  
}

}

