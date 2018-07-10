void animation(){
  for (int g=0;g<12;g++){
      digitalWrite(leds[g],LOW);
    }
  digitalWrite(leds[LNled],HIGH);
  digitalWrite(leds[RNled],HIGH);
  LNled+=Ldirection;
  RNled+=Rdirection;
  if(LNled==5){Ldirection=-1;}
  if(LNled==0){Ldirection=1;}
  if(RNled==6){Rdirection=1;}
  if(RNled==11){Rdirection=-1;}
  leddelay+=leddelay_inc;
  if(leddelay==10){leddelay_inc=1;}
  if(leddelay==150){leddelay_inc=-1;}
  }
