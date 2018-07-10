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

    Serial.print(timer_set);
    Serial.print(",");
    Serial.print(menu_menuchoice);
    Serial.print(",");
    Serial.print(run_counter_set);
     Serial.print(",");
    Serial.print(buzzer_set);
    Serial.print(",");
    Serial.print(buzzer_mode);
    Serial.print("|||");
    Serial.print(hours);
    Serial.print(",");
    Serial.print(minutes);
    Serial.print(",");
    Serial.print(seconds);
     Serial.print(",");
    Serial.print(H_M_S);
    Serial.print("|||");
  Serial.println("End");

}

