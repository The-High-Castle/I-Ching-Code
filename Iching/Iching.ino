//I-Ching reading Generator
//Coded by AWA
const int buttonPin=A5;
byte  leds[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
int buzzer=13;
int counter=0;
int runrandom=0;
////

int buttonState;
int lastbuttonstate;
/////the lines/////
byte line[6]={};
/////////////////////////////////////////
void setup(){
 // Serial.begin(9600);
  //randomSeed(analogRead(0));
  
  for(int x=0;x<12;x++){
              pinMode(leds[x],OUTPUT);
             
              
  }
  pinMode(buttonPin,INPUT);
  pinMode(buzzer,OUTPUT);
}
/////////////////////////////////////////
////////////////////////////////////////
void loop(){
  
  
  
  getrandom();
  
  
  
  buttonState=analogRead(buttonPin);
  lastbuttonstate=map(buttonState,0,1023,0,255);
  
 
  if(lastbuttonstate < 127){
  counter=0;
  digitalWrite(buzzer,LOW);
  
}
  if(lastbuttonstate >=127){
  //Serial.println("****begin******");
  /*for(int x=0;x<5;x++){
  Serial.println(line[x]);
  }*/
 // Serial.println(counter);
 // Serial.println("****end******");
  
  
  
    if(counter!=1850){
        digitalWrite(buzzer,HIGH);
       if(counter>=0){ Writeline1();}
       if(counter>300){ Writeline2();}
       if(counter>900){ Writeline3();}
       if(counter>1200){ Writeline4();}
       if(counter>1500){ Writeline5();}
       if(counter>1800){ Writeline6();}
  
        counter+=1;
        }
     if(counter==1850){
     digitalWrite(buzzer,LOW);
     }
  }
 }

  
/////////////////////////////////////////  
void getrandom(){
   for(int x=0;x<6;x++){
     
   line[x]=random(0,4);
 }
   
 }
/////////////////////////////////////////

void Writeline1(){
  if(line[0]==0){
  digitalWrite(leds[0],HIGH);
  digitalWrite(leds[6],LOW);
  }
  if(line[0]==1){
  digitalWrite(leds[0],LOW);
  digitalWrite(leds[6],LOW);
  }
  if(line[0]==2){
  digitalWrite(leds[0],LOW);
  digitalWrite(leds[6],HIGH);
  }
  if(line[0]==3){
  digitalWrite(leds[0],HIGH);
  digitalWrite(leds[6],HIGH);
  
  }

}
/////////////////////////////////////////
void Writeline2(){
   if(line[1]==0){
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[7],LOW);
   }
  if(line[1]==1){
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[7],LOW);
  }
  if(line[1]==2){
    digitalWrite(leds[1],LOW);
    digitalWrite(leds[7],HIGH);
  }
  if(line[1]==3){
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[7],HIGH);
  }

}
/////////////////////////////////////////
void Writeline3(){
  if(line[2]==0){
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[8],LOW);
   }
  if(line[2]==1){
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[8],LOW);
  }
  if(line[2]==2){
    digitalWrite(leds[2],LOW);
    digitalWrite(leds[8],HIGH);
  }
  if(line[2]==3){
    digitalWrite(leds[2],HIGH);
    digitalWrite(leds[8],HIGH);
  }

}
/////////////////////////////////////////
void Writeline4(){
   if(line[3]==0){
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[9],LOW);
   }
  if(line[3]==1){
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[9],LOW);
  }
  if(line[3]==2){
    digitalWrite(leds[3],LOW);
    digitalWrite(leds[9],HIGH);
  }
  if(line[3]==3){
    digitalWrite(leds[3],HIGH);
    digitalWrite(leds[9],HIGH);
  }

}
/////////////////////////////////////////
void Writeline5(){
  if(line[4]==0){
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[10],LOW);
   }
  if(line[4]==1){
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[10],LOW);
  }
  if(line[4]==2){
    digitalWrite(leds[4],LOW);
    digitalWrite(leds[10],HIGH);
  }
  if(line[4]==3){
    digitalWrite(leds[4],HIGH);
    digitalWrite(leds[10],HIGH);
  }

}
/////////////////////////////////////////
void Writeline6(){
  if(line[5]==0){
    digitalWrite(leds[5],HIGH);
    digitalWrite(leds[11],LOW);
   }
  if(line[5]==1){
    digitalWrite(leds[5],LOW);
    digitalWrite(leds[11],LOW);
  }
  if(line[5]==2){
    digitalWrite(leds[5],LOW);
    digitalWrite(leds[11],HIGH);
  }
  if(line[5]==3){
    digitalWrite(leds[5],HIGH);
    digitalWrite(leds[11],HIGH);
  }

}
  


  

