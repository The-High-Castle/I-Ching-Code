/////////////////////////
///////LINES///////////
/////////////////////////
/////////////////////////
void lines(){
  ////1/////CH'IEN (The Creative)
  if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=1;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=1;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////2/////K'un (The Receptive)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=2;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=2;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////3/////CHUN (Difficult Beginnings)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=3;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=3;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////4/////Inexperience (Youthful Folly)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=4;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=4;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////5/////HSU (Calculated Waiting)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=5;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=5;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////6/////SUNG (Conflict)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=6;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=6;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////7/////SHIH (The Army)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=7;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=7;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////8/////PI (Unity)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=8;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=8;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////9/////HSIAo CH'U ( The Taming Power of the Small)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=9;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=9;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////10/////LU (conduct)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=10;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=10;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////11/////T'AI (peace)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=11;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=11;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////12/////P'I (Stagnation)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=12;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=12;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////13/////TUNG JEN (Fellowship with Men)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=13;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=13;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////14/////TA YU (Possession in Great Measure)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=14;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=14;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////15/////CH'IEN(Modesty)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=15;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=15;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////16/////YU (Enthusiasm)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=16;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
  }
  
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=16;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////17/////SUI (Following)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=17;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=17;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////18/////KU (Decay)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=18;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=18;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////19/////LIN (Protomotion)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=18;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=19;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////20/////KUAN (Contemplating)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=19;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=21;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////21/////SHIH HO (Biting Through)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=21;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=22;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////22/////PI Grace
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=22;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==8&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=22;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////23/////PO (Splitting Apart)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=23;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=23;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////24/////FU (Returning)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=24;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=24;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////25/////WU WANG (Innocence)
  
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=25;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=25;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////26/////TA CH'U
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=26;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=26;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////27/////I (Nourishing)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=27;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=27;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////28/////TA KUO (Predonderance of the Great)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=28;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=28;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////29/////K'AN (Danger)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=29;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=29;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////30/////LI ( The Clinging)
 
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=30;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=30;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////31/////HSIEN (Attraction)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=31;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=31;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////32/////HENG (Enduring)

   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=32;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=32;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////33/////TUN (Retreat)
 
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=33;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=33;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////34/////TA CHUANG (Great Power)
  
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=34;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=34;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////35/////CHIN (Progress)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=35;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=35;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////36/////MING I (Darking of the Light)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=36;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=36;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////37/////CHIA JEN (Family)
  
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=37;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=37;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////38/////K'UEI (Contradiction)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=38;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=38;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////39/////CHIEN (Obstacles)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=39;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=39;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////40/////HSIEH (Deliverance)
  
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=40;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=40;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////41/////SUN (DECLINE)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=41;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=41;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////42/////I (Increase)
 
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=42;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=42;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////43/////KUAI (Resolution)

   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=43;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=43;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////44/////KOU (Coming to Meet)

   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=44;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=44;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////45///// TS'UI ( Assembling)

   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=45;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=45;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////46/////SHENG (Pusing Upward)
  
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=46;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=46;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////47/////K'UN (Adversity)
 
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=47;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=47;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////48/////CHING (THE WELL)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=48;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=48;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ///49//////KO (Revolution)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=49;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=49;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////50/////TING (The Cauldron)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=50;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=50;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////51/////CHEIN (Shocking)
  
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=51;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=51;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////52/////KEN (Keeping Still)

   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=52;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=52;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////53/////CHIEN (Developing)

   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=53;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=53;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////54/////KUEI MEI ( The Marrying Maiden)
 
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=54;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=54;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////55/////FENG (Abundance)
 
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=55;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=55;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////56/////LU (Traveling)
 
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=56;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=56;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////57/////SUN ( The Gentle)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=57;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=57;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////58/////TUI ( JOY)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=58;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=58;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////59/////HUAN (Reuniting)

   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=59;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=59;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }
  ////60/////CHIEH (Limitations)
 
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=60;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=60;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////61/////CHUNG FU (Inner Truth)

   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=61;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=61;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],HIGH);
    
  }
  ////62/////HSIAO KUO (Preponderance of the Small)

   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=62;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=62;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],LOW);
    
  }
  ////63/////CHI CHI (After the End)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=63;
    digitalWrite(leds[0],LOW);
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[5],HIGH);
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=63;
    digitalWrite(leds[6],LOW);
    digitalWrite(leds[7],HIGH);
    digitalWrite(leds[8],LOW);
    digitalWrite(leds[9],HIGH);
    digitalWrite(leds[10],LOW);
    digitalWrite(leds[11],HIGH);
    
  }
  ////64/////WEI CHI (Before the End)

   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=64;
    digitalWrite(leds[0],HIGH);
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[5],LOW);
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=64;
    digitalWrite(leds[6],HIGH);
    digitalWrite(leds[7],LOW);
    digitalWrite(leds[8],HIGH);
    digitalWrite(leds[9],LOW);
    digitalWrite(leds[10],HIGH);
    digitalWrite(leds[11],LOW);
    
  }

}



