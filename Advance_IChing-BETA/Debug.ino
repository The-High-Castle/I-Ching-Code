void debug_func(){
   Serial.print("|||");
   for(int d=0;d<5;d++){
  Serial.print(Lline[d]);}
  Serial.print("|||");for(int z=0;z<5;z++){
  Serial.print(Rline[z]);}

  Serial.print("|||");
  for(int v=0;v<5;v++){
    Serial.print(raw[v]);
  }
    Serial.print("|||");
  Serial.println("End");

}

