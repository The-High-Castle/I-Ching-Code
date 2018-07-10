void debug_func(){
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
    Serial.print(menuchoice);
    Serial.print(",");
    Serial.print(done);
    Serial.print(",");
    Serial.print(run_counter);
    Serial.print(",");
    Serial.print(run_counter_set);
     Serial.print(",");
    Serial.print(buzzer_set);
    Serial.print(",");
    Serial.print(buzzer_mode);
    Serial.print("|||");
  Serial.println("End");

}

