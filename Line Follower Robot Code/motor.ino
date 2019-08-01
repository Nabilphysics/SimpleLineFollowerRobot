void testMotors(){
for(;;){forward(255,255);}
  for(int i=255;i>=-255;i--){
    follow(i,i);
    delay(10);
    }
  for(int i=-255;i<=255;i++){
    follow(i,i);
    delay(10);
    }
  }

void follow(int r, int l){
  if (r>=0){
    rwf(r);
  }
  else{
    r=-r;
    rwb(r); 
  }
  if (l>=0){
    lwf(l);
  }
  else{
    l=-l;
    lwb(l); 
  }
}
void backward(int bw){
  rwb(bw);
  lwb(bw);
  }
void left(int lr, int ll){
  rwf(lr);
  lwb(ll);
  }
void right(int rr, int rl){
  rwb(rr);
  lwf(rl);
  }
  
void Stop(int s){
  //follow(-rs,-ls);
  //delay(10);
  for(i=0;i<=5;i++)
  digitalWrite(motorPin[i],0);
  delay(s);
  }
void hbreak(){
  follow(-rs,-ls);
  delay(70);
  Stop(10);
  }
void lwb(int a){ // right wheel forward
  analogWrite(enL,a);
  digitalWrite(motorPin[2],1);
  digitalWrite(motorPin[3],0);
  }
void lwf(int b){ // right wheel bacward
  analogWrite(enL,b);
  digitalWrite(motorPin[2],0);
  digitalWrite(motorPin[3],1);
  }
void rwf(int c){ // left wheel bacward
  analogWrite(enR,c);
  digitalWrite(motorPin[0],1);
  digitalWrite(motorPin[1],0);
  }

  void rwb(int d){ // left wheel forwrd
  analogWrite(enR,d);
  digitalWrite(motorPin[0],0);
  digitalWrite(motorPin[1],1);
  }
 void forward(int fr, int fl){
  rwf(fr);
  lwf(fl);
  } 
