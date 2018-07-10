void taps_func(){
  
  //////
  taps_buttonstate=digitalRead(button[2]);
  
  
  if(taps_buttonstate != taps_lastbuttonstate){
    buzzer_mode=0;
   
    if(buttonstate==HIGH){
     
      digitalWrite(thinkingled,HIGH);
      buzzer_mode=1;
      
    if((millis()-taps_debounce)>=debouncedelay){
        
        taps_n=taps_buttonpushcounter;
        taps_buttonpushcounter++;
        taps_buttonpushcounter=taps_buttonpushcounter%3;
        taps[taps_n]=random(2,4);
        if(toss==6){
          runcmd=1;
          digitalWrite(thinkingled,LOW);
          display.clear();
          toss=0;
          lines();
          display.printDualCounter(L_read,R_read);
          
          WriteSD();
          runcmd=0;}



}
       
        
        
        
        taps_debounce=millis();
      
      
      }
     
        
    
    }
  
  
  
    
  taps_lastbuttonstate=taps_buttonstate;

////////

  
////
if(toss<6){
 
 
  if(taps_n==2){
  
  taps_sum=taps[0]+taps[1]+taps[2];
  Lline[toss]=taps_sum;
  if(Lline[toss]!=6||Lline[toss]!=9){Rline[toss]=Lline[toss];}
  if(Lline[toss]==6){Rline[toss]=7;Lline[toss]=8;}
  if(Lline[toss]==9){Rline[toss]=8;Lline[toss]=7;}
   display.printDualCounter(6-toss,taps_sum);
  toss++;
  taps_n=0;
  }
  
}
////

}
