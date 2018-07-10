void debug_func(){
  temparture=((analogRead(A0)*25)-2050)/100;
  
   Serial.print("|||");
   for(int d=0;d<6;d++){
  Serial.print(Lline[d]);}
  Serial.print("|||");
  
  for(int z=0;z<6;z++){
  Serial.print(Rline[z]);}

  Serial.print("|||");
  for(int v=0;v<6;v++){
    Serial.print(raw[v]);
  }
    Serial.print("|||");
    Serial.print(backlight);
    Serial.print(",");
    Serial.print(wake);
    Serial.print(",");
    Serial.print(Alarm_seconds_actual);
    Serial.print(",");
    Serial.print(sub_menuchoice);
    Serial.print(",");
    Serial.print(menuchoice);
     Serial.print(",");
    Serial.print(A_minutes);
    Serial.print(",");
    Serial.print(A_seconds);
    Serial.print("|||");
  Serial.println("End");

}

