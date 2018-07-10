void coin_func(){
  
  //////
  coin_buttonstate=digitalRead(button[2]);
  
  
  if(coin_buttonstate != coin_lastbuttonstate){
    
    digitalWrite(buzzer,LOW);
    if(buttonstate==HIGH){
      digitalWrite(buzzer,HIGH);
      digitalWrite(thinkingled,HIGH);
     
      
    if((millis()-coin_debounce)>=debouncedelay){
        
        coin_n=coin_buttonpushcounter;
        coin_buttonpushcounter++;
        coin_buttonpushcounter=coin_buttonpushcounter%3;
        coin[coin_n]=random(2,4);
        if(toss==6){
          digitalWrite(buzzer,HIGH);
          digitalWrite(thinkingled,LOW);
          display.clear();
          toss=0;
          lines();
          display.printDualCounter(L_read,R_read);}



}
       
        
        
        
        coin_debounce=millis();
      
      
      }
     
        
    
    }
  
  
  
    
  coin_lastbuttonstate=coin_buttonstate;

////////

  
////
if(toss<6){
 
 
  if(coin_n==2){
  
  coin_sum=coin[0]+coin[1]+coin[2];
  Lline[toss]=coin_sum;
  if(Lline[toss]!=6||Lline[toss]!=9){Rline[toss]=Lline[toss];}
  if(Lline[toss]==6){Rline[toss]=7;Lline[toss]=8;}
  if(Lline[toss]==9){Rline[toss]=8;Lline[toss]=7;}
   display.printDualCounter(6-toss,coin_sum);
  toss++;
  coin_n=0;
  }
  
}
////

}
