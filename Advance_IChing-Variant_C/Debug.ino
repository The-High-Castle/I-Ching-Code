void debug_func(){
  temparture=((analogRead(A0)*25)-2050)/100;
  
   Serial.print("|||");
   for(int d=0;d<6;d++){
  Serial.print(Lline[d]);}
  Serial.print("|||");for(int z=0;z<6;z++){
  Serial.print(Rline[z]);}

  Serial.print("|||");
  for(int v=0;v<6;v++){
    Serial.print(raw[v]);
  }
    Serial.print("|||");
    Serial.print(analogRead(A2));
    Serial.print(",");
    Serial.print(sleep_avg);
    Serial.print(",");
    Serial.print(wake);
    Serial.print(",");
    Serial.print(run_counter_set);
     Serial.print(",");
    Serial.print(buzzer_set);
    Serial.print(",");
    Serial.print(buzzer_mode);
    Serial.print("|||");
  Serial.println("End");

}

