void set_timr(){
  minute=analogRead(A1);
  minute=map(minute,0,1032,0,61);
  second=analogRead(A0);
  second=map(second,0,1032,0,60);
  display.printDualCounter(minute,second);
  if(digitalRead(button[2])==HIGH){set=1;display.blink();}
  
  }
