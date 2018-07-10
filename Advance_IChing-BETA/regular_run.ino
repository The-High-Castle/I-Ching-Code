void regular_run(){
  
  if(digitalRead(button[2])==HIGH&&done==true){
    
   
    run_counter=0;
    done=false;
  }
  
if(run_counter<run_counter_set){
    
      display.clear();
      digitalWrite(thinkingled,HIGH);
      digitalWrite(buzzer,HIGH);
     
      if(trng_read==false){
      prnd_run();
      }
      if(trng_read==true){
        trnd_run();
     
      }
      lines();
      display.printDualCounter(L_read,R_read);
      
      }
    
    run_counter++;
     
}
  
 


