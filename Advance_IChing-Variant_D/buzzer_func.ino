void buzzer_func(){
  if(buzzer_mode==0){

  if(digitalRead(button[0])==HIGH){tone(buzzer,NOTE_C5,100);}
  if(digitalRead(button[1])==HIGH){tone(buzzer,NOTE_CS5,100);}
  if(digitalRead(button[2])==HIGH){tone(buzzer,NOTE_D5,100);}
  if(digitalRead(button[3])==HIGH){tone(buzzer,NOTE_DS5,100);}
  if(digitalRead(button[4])==HIGH){tone(buzzer,NOTE_E5,100);}
  ////
 
  }

  
  
  if(buzzer_mode==1){
  buzzer_set=random(0,16);
  tone(buzzer,notes[buzzer_set],62);
  
  }
  if(buzzer_mode==2){
    if((millis()-buzzer_t>buzzer_delay)){
      tone(buzzer,notes[buzzer_set],62);
      
      if(buzzer_set==1){buzzer_inc=-1;}
      if(buzzer_set==0){buzzer_inc=1;}
      buzzer_set+=buzzer_inc;
      
   
      buzzer_t=millis();
    }
  }

  if(buzzer_mode==3){
    File dataFile3 = SD.open("Music.txt", FILE_WRITE);
    for(int r=0;r<12;r++){
      random_number=random(0,6);
      
    if(r==1){dataFile3.println("/////////////");
    dataFile3.print("The Notes were");
    dataFile3.println("/////////////");
    }
       dataFile3.println(random_number);

       tone(buzzer,notes[random_number],500);
       
       delay(125);
     
     }
     dataFile3.close();
         
    }
    if(buzzer_mode==4){
      if((millis()-buzzer_t>buzzer_delay)){
      tone(buzzer,notes[buzzer_set],62);
      
      buzzer_set=random(0,12);
      
   
      buzzer_t=millis();
    }
   
         
    }
    
   
   
  
  
  
  }

