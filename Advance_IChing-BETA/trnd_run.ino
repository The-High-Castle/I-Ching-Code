void trnd_run(){
  
    for(int k=0;k<6;k++){
    Lline[k]=random(6,10);
    raw[k]=Lline[k];
   
    if(Lline[k]==6){Lline[k]=7;Rline[k]=8;}
    if(Lline[k]==9){Lline[k]=8;Rline[k]=7;}
    
    if(k==5){done=true; }
    
   
     }
  }
