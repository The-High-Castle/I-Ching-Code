void rnds(){
  for (int g=0;g<12;g++){
      digitalWrite(leds[g],LOW);
    }
  rnds_upbuttonstate=digitalRead(button[0]);
  rnds_downbuttonstate=digitalRead(button[1]);
  rnds_selectbuttonstate=digitalRead(button[2]);
  rnds_backbuttonstate=digitalRead(button[3]);
  
 ////////////// 

  if( rnds_upbuttonstate!= rnds_uplastbuttonstate){
    //Serial.print("UP!");
    digitalWrite(buzzer,LOW);
    if(rnds_upbuttonstate==HIGH){
      digitalWrite(buzzer,HIGH);
      
     
      
    if((millis()-rnds_debounce)>=debouncedelay){
        
        
         
        if(rnds_pushbuttoncounter!=9){rnds_pushbuttoncounter+=1;}
}

        rnds_debounce=millis();

      }

    }
    ////////////// 
  if( rnds_downbuttonstate!= rnds_downlastbuttonstate){
   // Serial.print("DOWN!");
    digitalWrite(buzzer,LOW);
    if(rnds_downbuttonstate==HIGH){
      digitalWrite(buzzer,HIGH);
      
     
      
    if((millis()-rnds_debounce)>=debouncedelay){
        
        
        if(rnds_pushbuttoncounter!=1){rnds_pushbuttoncounter-=1;}
        
}

        rnds_debounce=millis();

      }

    }
    ////////////// 
  if( rnds_selectbuttonstate!= rnds_selectlastbuttonstate){
    //Serial.print("SELECT");
    
    digitalWrite(buzzer,LOW);
    if(rnds_selectbuttonstate==HIGH){
      digitalWrite(buzzer,HIGH);
      
     
      
    if((millis()-rnds_debounce)>=debouncedelay){
        
        display.blink();
        randomSeed(seed_val);
        rnds_menuchoice=rnds_pushbuttoncounter;
        
        
}

        rnds_debounce=millis();

      }

    }

 
    ////////////// 
  if( rnds_backbuttonstate!= rnds_backlastbuttonstate){
    //Serial.print("BACK!");
    digitalWrite(buzzer,LOW);
    if(rnds_backbuttonstate==HIGH){
      digitalWrite(buzzer,HIGH);
      
     
      
    if((millis()-rnds_debounce)>=debouncedelay){
        
        rnds_pushbuttoncounter=1;
        rnds_menuchoice=0;
        digitalWrite(noisepwr,LOW);
        
        
}

        rnds_debounce=millis();

      }
 
    }
    rnds_backlastbuttonstate=rnds_backbuttonstate;
    rnds_uplastbuttonstate=rnds_upbuttonstate;
    rnds_downlastbuttonstate=rnds_downbuttonstate; 
    rnds_selectlastbuttonstate=rnds_selectbuttonstate;       
////////*
if(rnds_menuchoice==0){
if(rnds_pushbuttoncounter==1){
  //Serial.print("1");
  display.clear();display.print("nise");}
if(rnds_pushbuttoncounter==2){
  //Serial.print("2");
  display.clear();display.print("Pcel");}
if(rnds_pushbuttoncounter==3){
  //Serial.print("3");
  display.clear();display.print("N-bi");}
if(rnds_pushbuttoncounter==4){
  //Serial.print("4");
  display.clear();display.print("N--p");}
if(rnds_pushbuttoncounter==5)
//Serial.print("5");
{display.clear();display.print("P-bi");}
if(rnds_pushbuttoncounter==6){
 // Serial.print("6");
  display.clear();display.print("NPbb");}
if(rnds_pushbuttoncounter==7){
  //Serial.print("7");
  display.clear();display.print("sens");}
if(rnds_pushbuttoncounter==8){
 // Serial.print("8");
  display.clear();display.print("test");}
if(rnds_pushbuttoncounter==9){
  //Serial.print("9");
  display.clear();display.print("GenR");}

}
///////////////
if(rnds_menuchoice==1){
  //Serial.print("1");
  readtrngpin();
  if(trng_read==false){
    digitalWrite(noisepwr,LOW);
    display.clear();
    display.print("OFF");
    display.blink();
    rnds_menuchoice=0;}
  else{
    display.clear();
    digitalWrite(noisepwr,HIGH);
    if((millis()-get_read)>get_readdelay){
    noise=analogRead(A3);
    seed_val=noise;
    get_read=millis();
    }
    display.print(noise);
    
  }
  
  }
if(rnds_menuchoice==2){
 display.clear();
 digitalWrite(noisepwr,HIGH);
 if((millis()-get_read)>get_readdelay){
    photocell=analogRead(A1);
    
    seed_val=photocell;
    get_read=millis();
 }
    display.print(photocell);
  }
if(rnds_menuchoice==3){
  readtrngpin();
  if(trng_read==false){
    digitalWrite(noisepwr,LOW);
    display.clear();
    display.print("OFF");
    display.blink();
    rnds_menuchoice=0;}
  else{
    display.clear();
    digitalWrite(noisepwr,HIGH);
    if((millis()-get_read)>get_readdelay){
    noise=analogRead(A3);
    L_pot=analogRead(A1);
    seed_val=noise+L_pot;
    get_read=millis();
    }
    display.print(noise+L_pot);
    
  }
}
if(rnds_menuchoice==4){
 readtrngpin();
  if(trng_read==false){
    digitalWrite(noisepwr,LOW);
    display.clear();
    display.print("OFF");
    display.blink();
    rnds_menuchoice=0;}
  else{
    display.clear();
    digitalWrite(noisepwr,HIGH);
    if((millis()-get_read)>get_readdelay){
    noise=analogRead(A3);
    photocell=analogRead(A2);
    seed_val=noise+photocell;
    get_read=millis();
    }
    display.print(noise+photocell);
    
  }
  }
if(rnds_menuchoice==5)
//Serial.print("5");
{
    display.clear();
    if((millis()-get_read)>get_readdelay){
    photocell=analogRead(A2);
    L_pot=analogRead(A0);
    seed_val=photocell+L_pot;
    get_read=millis();
    }
    display.print(photocell+L_pot);
    
  }

if(rnds_menuchoice==6){
 readtrngpin();
  if(trng_read==false){
    digitalWrite(noisepwr,LOW);
    display.clear();
    display.print("OFF");
    display.blink();
    rnds_menuchoice=0;}
  else{
    display.clear();
    digitalWrite(noisepwr,HIGH);
    if((millis()-get_read)>get_readdelay){
    noise=analogRead(A3);
    photocell=analogRead(A2);
    L_pot=analogRead(A1);
    R_pot=analogRead(A0);
    seed_val=abs(L_pot-(noise+photocell)+R_pot);
    get_read=millis();
    }
    display.print(abs(L_pot-(noise+photocell)+R_pot));
    
    
  }
  }
if(rnds_menuchoice==7){
 if(trng_read==false){
    digitalWrite(noisepwr,LOW);
    display.clear();
    display.print("OFF");
    display.blink();
    rnds_menuchoice=0;}
  else{
    display.clear();
    digitalWrite(noisepwr,HIGH);
    if(digitalRead(button[0])==LOW&&digitalRead(button[1])==LOW&&digitalRead(button[2])==LOW){display.print(analogRead(A0));}
    if(digitalRead(button[0])==HIGH){display.print(analogRead(A1));}
    if(digitalRead(button[1])==HIGH){display.print(analogRead(A2));}
    if(digitalRead(button[2])==HIGH){display.print(analogRead(A3));}
    
  }
  }
if(rnds_menuchoice==8){
 // Serial.print("8");
  display.clear();
  display.print("NULL");
  }
if(rnds_menuchoice==9){

  //Serial.print("9");
  
  display.clear();
  display.print("NULL");
  }

  

  }

