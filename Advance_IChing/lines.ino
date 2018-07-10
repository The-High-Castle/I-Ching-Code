/////////////////////////
///////LINES///////////
/////////////////////////
/////////////////////////
void lines(){
///////write to LEDS///
for(int f=0;f<6;f++)
{
  if(Lline[f]==8){
    digitalWrite(leds[f],LOW);
  }
   if(Lline[f]==7){
    digitalWrite(leds[f],HIGH);
  }
   if(Rline[f]==8){
    digitalWrite(leds[f+6],LOW);
  }
   if(Rline[f]==7){
    digitalWrite(leds[f+6],HIGH);
  }
  
  
}
/////
  
  ////1/////CH'IEN (The Creative)
  if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=1;
   
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=1;
   
    
  }
  ////2/////K'un (The Receptive)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=2;
  
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=2;
 
    
  }
  ////3/////CHUN (Difficult Beginnings)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=3;
  
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=3;
 
  }
  ////4/////Inexperience (Youthful Folly)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=4;
 
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=4;
  
  }
  ////5/////HSU (Calculated Waiting)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=5;
   
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=5;
   
  }
  ////6/////SUNG (Conflict)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=6;
  
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=6;
    
  }
  ////7/////SHIH (The Army)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=7;
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=7;
   
  }
  ////8/////PI (Unity)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=8;
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=8;
   
  }
  ////9/////HSIAo CH'U ( The Taming Power of the Small)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=9;

  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=9;

    
  }
  ////10/////LU (conduct)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=10;
  
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=10;
  
  }
  ////11/////T'AI (peace)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=11;
  
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=11;
 
  }
  ////12/////P'I (Stagnation)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=12;

  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=12;
  
  }
  ////13/////TUNG JEN (Fellowship with Men)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=13;
 
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=13;
 
  }
  ////14/////TA YU (Possession in Great Measure)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=14;
  
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=14;
 
    
  }
  ////15/////CH'IEN(Modesty)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=15;
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=15;
  
  }
  ////16/////YU (Enthusiasm)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=16;
  
  }
  
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=16;
   
  }
  ////17/////SUI (Following)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=17;
  
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=17;
   
  }
  ////18/////KU (Decay)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=18;
   
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=18;
    
    
  }
  ////19/////LIN (Protomotion)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=18;
 
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=19;

    
  }
  ////20/////KUAN (Contemplating)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=19;
  
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=21;
 
  }
  ////21/////SHIH HO (Biting Through)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=21;
 
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=22;

  }
  ////22/////PI Grace
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=22;
   
  }
  if(Rline[0]==7&&Rline[1]==8&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=22;
 
  }
  ////23/////PO (Splitting Apart)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=23;
 
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=23;
 
  }
  ////24/////FU (Returning)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=24;
 
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=24;
   
  }
  ////25/////WU WANG (Innocence)
  
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=25;
 
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=25;
 
  }
  ////26/////TA CH'U
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=26;
  
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=26;
 
  }
  ////27/////I (Nourishing)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=27;
  
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=27;
 
  }
  ////28/////TA KUO (Predonderance of the Great)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=28;
  
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=28;
  
  }
  ////29/////K'AN (Danger)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=29;
   
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=29;
  
  }
  ////30/////LI ( The Clinging)
 
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=30;
  
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=30;
   
  }
  ////31/////HSIEN (Attraction)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=31;
 
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=31;
   
  }
  ////32/////HENG (Enduring)

   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=32;
 
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=32;
  
  }
  ////33/////TUN (Retreat)
 
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=33;
  
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=33;
   
  }
  ////34/////TA CHUANG (Great Power)
  
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=34;
  
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=34;
  
  }
  ////35/////CHIN (Progress)
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=35;
 
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=35;
   
  }
  ////36/////MING I (Darking of the Light)
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=36;

  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=36;
   
  }
  ////37/////CHIA JEN (Family)
  
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=37;
  
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=37;

  }
  ////38/////K'UEI (Contradiction)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=38;
    
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=38;
   
  }
  ////39/////CHIEN (Obstacles)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=39;
 
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=39;
 
    
  }
  ////40/////HSIEH (Deliverance)
  
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=40;
  
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=40;
   
  }
  ////41/////SUN (DECLINE)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=41;
   
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=41;
 
    
  }
  ////42/////I (Increase)
 
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=42;
  
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=42;

    
  }
  ////43/////KUAI (Resolution)

   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=43;
 
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=43;

    
  }
  ////44/////KOU (Coming to Meet)

   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=44;
 
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=44;
  
  }
  ////45///// TS'UI ( Assembling)

   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=45;
 
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=45;
  
  }
  ////46/////SHENG (Pusing Upward)
  
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=46;
  
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=46;
  
    
  }
  ////47/////K'UN (Adversity)
 
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=47;
 
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=47;
 
  }
  ////48/////CHING (THE WELL)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=48;
 
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=48;
   
    
  }
  ///49//////KO (Revolution)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=49;
  
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=49;
  
  }
  ////50/////TING (The Cauldron)
  
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=50;
 
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=50;
  
  }
  ////51/////CHEIN (Shocking)
  
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=51;
    
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=51;
    
    
  }
  ////52/////KEN (Keeping Still)

   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=52;
  
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=52;
    
    
  }
  ////53/////CHIEN (Developing)

   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=53;
 
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=53;
 
    
  }
  ////54/////KUEI MEI ( The Marrying Maiden)
 
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=54;
  
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=54;
 
    
  }
  ////55/////FENG (Abundance)
 
   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=55;
   
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=55;
  
  }
  ////56/////LU (Traveling)
 
   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=56;
   
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=56;

    
  }
  ////57/////SUN ( The Gentle)
   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=57;
   
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=57;
   
    
  }
  ////58/////TUI ( JOY)
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=58;

    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=58;
   
    
  }
  ////59/////HUAN (Reuniting)

   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=59;
    
    
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=59;
   
    
  }
  ////60/////CHIEH (Limitations)
 
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=60;
  
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=60;
 
  }
  ////61/////CHUNG FU (Inner Truth)

   if(Lline[0]==7&&Lline[1]==7&&Lline[2]==8&&Lline[3]==8&&Lline[4]==7&&Lline[5]==7)
  {
    L_read=61;
 
  }
  if(Rline[0]==7&&Rline[1]==7&&Rline[2]==8&&Rline[3]==8&&Rline[4]==7&&Rline[5]==7)
  {
    R_read=61;
;
    
  }
  ////62/////HSIAO KUO (Preponderance of the Small)

   if(Lline[0]==8&&Lline[1]==8&&Lline[2]==7&&Lline[3]==7&&Lline[4]==8&&Lline[5]==8)
  {
    L_read=62;
    
    
  }
  if(Rline[0]==8&&Rline[1]==8&&Rline[2]==7&&Rline[3]==7&&Rline[4]==8&&Rline[5]==8)
  {
    R_read=62;
   
    
  }
  ////63/////CHI CHI (After the End)
  
   if(Lline[0]==8&&Lline[1]==7&&Lline[2]==8&&Lline[3]==7&&Lline[4]==8&&Lline[5]==7)
  {
    L_read=63;
  
    
  }
  if(Rline[0]==8&&Rline[1]==7&&Rline[2]==8&&Rline[3]==7&&Rline[4]==8&&Rline[5]==7)
  {
    R_read=63;
   
    
  }
  ////64/////WEI CHI (Before the End)

   if(Lline[0]==7&&Lline[1]==8&&Lline[2]==7&&Lline[3]==8&&Lline[4]==7&&Lline[5]==8)
  {
    L_read=64;
   
    
  }
  if(Rline[0]==7&&Rline[1]==8&&Rline[2]==7&&Rline[3]==8&&Rline[4]==7&&Rline[5]==8)
  {
    R_read=64;
   
  }

}



