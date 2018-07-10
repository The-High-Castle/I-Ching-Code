void regular_run(){
  
  if(digitalRead(button[2])==HIGH&&done==true){
    
    runcmd=1;
    run_counter=0;
    run_counter_set=random(1,76);
    done=false;
  }
if(run_counter==run_counter_set){noTone(buzzer);buzzer_mode=0;
WriteSD();runcmd=0;}    
if(run_counter<run_counter_set){
      
      display.clear();
      digitalWrite(thinkingled,HIGH);
       
      buzzer_mode=1;
     
    
        trnd_run();
     
     
      lines();
      display.printDualCounter(L_read,R_read);
      run_counter++;
      
      }
    
    
  
}
  
 


