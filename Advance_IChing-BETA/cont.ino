void cont_func(){
  if(done==false&&cont_run==0){display.clear();}
  if(set==0&&done==false){
    cont_run=analogRead(A0);
    cont_run=map(cont_run,0,1032,1,100);
    display.print(cont_run);
    if(digitalRead(button[2])==HIGH){set=1;}
  }
  if(set==1){
    digitalWrite(thinkingled,HIGH);
     if((millis()-t_timr)>2501){
      
      if(trng_read==false){
      prnd_run();
      }
      if(trng_read==true){
        trnd_run();
     t_timr=millis();
     cont_run-=1;
      }
      lines();
      cont_run-=1;
      t_timr=millis();
      if(cont_run==0){
      digitalWrite(buzzer,HIGH);
      digitalWrite(thinkingled,LOW);
      set=0;done=true;}
     }
     
     display.printDualCounter(L_read,R_read);
  }
  
}

