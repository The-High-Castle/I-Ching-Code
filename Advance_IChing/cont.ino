void cont_func(){
  if(done==false&&cont_run==0){display.clear();}
  if(cont_set==0&&done==false){
    if((millis()-get_read)>get_readdelay){
    L_pot=analogRead(A1);
    
    get_read=millis();
    }
    cont_run=map(L_pot,0,1032,1,100);
    display.print(cont_run);
    if(digitalRead(button[2])==HIGH){
      display.print("RUN");
      display.blink();
      display.clear();
      cont_set=1;}
  }
  if(cont_set==1){
    digitalWrite(thinkingled,HIGH);
     if((millis()-t_timr)>2501){
      
      
      if(trng_read==false){
      prnd_run();
      }
      if(trng_read==true){
        trnd_run();
   
      }
      lines();
      cont_run-=1;
      t_timr=millis();
      if(cont_run==0){
      buzzer_mode=2;
      digitalWrite(thinkingled,LOW);
      cont_set=0;done=true;}
     }
     
     display.printDualCounter(L_read,R_read);
  }
  
}

