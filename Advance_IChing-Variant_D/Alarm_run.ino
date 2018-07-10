void Alarm_run(){
   
   DateTime now = rtc.now();
  
  
   if(Alarm_override==0&&menuchoice==0){   buzzer_mode=0;
     buzzer_func();}

    
  
    
   
       
   
    if(Alarm_override==1){
       if(Alarm_override==1&&(digitalRead(button[0])==HIGH||
        digitalRead(button[1])==HIGH||
        digitalRead(button[2])==HIGH||
        digitalRead(button[3])==HIGH||
        digitalRead(button[4])==HIGH))
        {
          display.printDualCounter(L_read,R_read);
          display.blink();
          Serial.println("it shot through!");
     digitalWrite(thinkingled,LOW);
      Serial.println("it wrote to file!");
    File dataFile5 = SD.open("Alarm.txt", FILE_WRITE);
    dataFile5.println("///////////////////");
   dataFile5.print("The Alarm went off at ");
   dataFile5.print(A_hours);
   dataFile5.print(":");
  dataFile5.println(A_minutes);
   dataFile5.print("It took you ");
   dataFile5.print(Alarm_seconds_actual);
   dataFile5.println(" seconds to press any button.");
   dataFile5.print("Your Reading was ");
 dataFile5.print(L_read);
  dataFile5.print(":");
dataFile5.println(R_read);
  dataFile5.println("///////////////////");
    
   File dataFile2 = SD.open("Raw.txt", FILE_WRITE);
   dataFile2.print(now.year());
   dataFile2.print("/");
   dataFile2.print(now.month());
   dataFile2.print("/");
   dataFile2.print(now.day());
   dataFile2.print("|");
   dataFile2.print(now.hour());
  dataFile2.print(":");
  dataFile2.print(now.minute());
  dataFile2.print(":");
  dataFile2.print(now.second());
  dataFile2.print("||||||");
  
     dataFile2.print("The result was ");
     dataFile2.print("|||");
     dataFile2.print(L_read);
     dataFile2.print(":");
     dataFile2.print(R_read);
     dataFile2.println("|||");
   
     dataFile2.close();
  
     Alarm_seconds=0;
     Alarm_override=0;
        }
      
      buzzer_mode=4;
    buzzer_func();
        Serial.println("it got to here!");
        digitalWrite(thinkingled,HIGH);
    display.on();
    display.setBacklight(100);
       Alarm_seconds+=1;
    Alarm_seconds_actual=(Alarm_seconds/100);
   
    trnd_run();
    lines();
    display.printDualCounter(L_read,R_read);
    
     
    }
     
  
    
   }


  
