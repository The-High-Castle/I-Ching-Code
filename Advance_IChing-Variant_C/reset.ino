void reset(){
  if(digitalRead(noisepwr)==HIGH){digitalWrite(noisepwr,LOW);}
  Serial.print("triggered!");
  for(int x=0;x<12;x++){
  
    digitalWrite(leds[x],LOW);
  }
     run_counter=0;
    display.clear();
    display.print("Exit");
    display.blink();
    
    digitalWrite(thinkingled,LOW);
      for(int j=0;j<6;j++)
      {
        if(j<6){
       Lline[j]=0;
        Rline[j]=0;
        }
       
                    
    
                    
                    }
                    runcmd=0;
                    buzzer_set=0;
                    hours=0;
                    minutes=0;
                    seconds=0;
                    menuchoice=0;
                    sub_menuchoice=0;
                    R_read=0;
                    L_read=0;
                    done=false;
                    buzzer_mode=0;
                    buzzer_func();
                    display.clear();
                   
  
  
 run_counter=0;
 run_counter_set=75;
 H_M_S=0;
 timr_uplastbuttonstate=0;
 timr_downlastbuttonstate=0;
 timr_selectlastbuttonstate=0;

 timr_upbuttonstate=0;
 timr_downbuttonstate=0;
 timr_selectbuttonstate=0;

buzzer_mode=0;

done=false;


 timer_set=0;//when to run timer.
  hours=0;
  minutes=0;
  seconds=0;
 cont_uplastbuttonstate=0;
 cont_downlastbuttonstate=0;
 cont_selectlastbuttonstate=0;

 cont_upbuttonstate=0;
 cont_downbuttonstate=0;
 cont_selectbuttonstate=0;

 cont_run;
 cont_set;
// coin variable
 coin_n=0;
 coin_sum=0;
 
 toss=0;
 coin_lastbuttonstate=0;
 coin_buttonstate=0;
 coin_buttonpushcounter=0;
 
 rnds_uplastbuttonstate=0;
 rnds_downlastbuttonstate=0;
 rnds_selectlastbuttonstate=0;
 rnds_backlastbuttonstate=0;
 rnds_upbuttonstate=0;
 rnds_downbuttonstate=0;
 rnds_selectbuttonstate=0;
 rnds_backbuttonstate=0;
 rnds_pushbuttoncounter=5;
 rnds_menuchoice=0;
}

