void trnd_run(){
  
    for(int q=0;q<6;q++){
    Lline[q]=random(6,10);
    raw[q]=Lline[q];
    if(Lline[q]==8||Lline[q]==7){Rline[q]=Lline[q];}
    if(Lline[q]==6){Lline[q]=7;Rline[q]=8;}
    if(Lline[q]==9){Lline[q]=8;Rline[q]=7;}
    
    if(q==5){done=true; }
    
   
     }
  }
