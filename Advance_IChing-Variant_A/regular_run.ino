void regular_run(){
  
  if(digitalRead(button[2])==HIGH&&done==true){
    
    
    run_counter=0;
    run_counter_set=random(1,76);
    done=false;
  }
if(run_counter==run_counter_set){noTone(2);buzzer_mode=0;}    
if(run_counter<run_counter_set){
      
      display.clear();
      digitalWrite(thinkingled,HIGH);
       
      buzzer_mode=1;
     
      if(trng_read==false){
      prnd_run();
      }
      if(trng_read==true){
        trnd_run();
     
      }
      lines();
      display.printDualCounter(L_read,R_read);
      run_counter++;
      
      }
    
    
  
}
  
 


