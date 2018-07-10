void WriteSD(){
  if(runcmd==1){
  DateTime now = rtc.now();
   File dataFile = SD.open("Readings.txt", FILE_WRITE);
   dataFile.print(now.year());
   dataFile.print("/");
   dataFile.print(now.month());
   dataFile.print("/");
   dataFile.print(now.day());
   dataFile.print("|");
   dataFile.print(now.hour());
  dataFile.print(":");
  dataFile.print(now.minute());
  dataFile.print(":");
  dataFile.println(now.second());
  dataFile.print("The Mode was ");
  if(lastmenuchoice==1){
    dataFile.print("Timer");
    dataFile.print("Which was set for");
    dataFile.print(hours_write);
    dataFile.print(":");
    dataFile.print(minutes_write);
    dataFile.print(":");
    dataFile.println(seconds_write);
    
    }
   if(lastmenuchoice==2){
    dataFile.println("Continuious");
    dataFile.print("Which was set for ");
    dataFile.print(cont_write);
    dataFile.println("readings");
    
    }
    if(lastmenuchoice==3){dataFile.println("Regular");}
     if(lastmenuchoice==4){dataFile.println("Coin");}
     dataFile.print("The result was ");
     dataFile.print("|||");
     dataFile.print(L_read);
     dataFile.print(":");
     dataFile.print(R_read);
     dataFile.println("|||");
   
     dataFile.close();
     //////raw reading////
    
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
  dataFile.print("||||||");
  
     dataFile2.print("The result was ");
     dataFile2.print("|||");
     dataFile2.print(L_read);
     dataFile2.print(":");
     dataFile2.print(R_read);
     dataFile2.println("|||");
   
     dataFile2.close();
  }
  }
  
