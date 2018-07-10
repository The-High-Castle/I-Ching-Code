void readtrngpin(){
  if(digitalRead(trng)==HIGH){trng_read=true;}
  if(digitalRead(trng)==LOW){trng_read=false;}
     }
