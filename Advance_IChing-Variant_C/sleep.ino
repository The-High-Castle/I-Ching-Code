void sleep(){
  if(digitalRead(button[0])==HIGH||
     digitalRead(button[1])==HIGH||
     digitalRead(button[2])==HIGH||
     digitalRead(button[3])==HIGH||
     digitalRead(button[4])==HIGH){wake=1;}
 
  for(int u=0;u<5;u++){
    sleep_read[u]=analogRead(A2);
  
  sleep_avg=(sleep_read[0]+sleep_read[1]+sleep_read[2]+sleep_read[3]+sleep_read[4])/5;
  }
  if(sleep_avg>=200||wake==1){sleep_state=false;}
  if(sleep_avg<200&&wake==0){sleep_state=true;}
  if(wake==1){
  if((millis()-wake_timer)>wake_delay){
    wake=0;
    wake_timer=millis();
  }
  }
  }
