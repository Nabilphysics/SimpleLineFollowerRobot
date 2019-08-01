void checksensors(){
    for(int i=0;i<6;i++){
    sv[i]=analogRead(sensor[i]);
    Serial.print(sv[i]);
    Serial.print("    ");
//    if (i==0)
//      break;
    }
    Serial.println("");
  }

int sense(int x){
  sv[x]=analogRead(sensor[x]);
  }

int scanangle(int x){
  int val=0;
  for(int i=0;i<6;i++){
    if (i==x)
      continue;
    sv[i]=analogRead(sensor[i]);
    if (sv[i]<tv[i]){
      val=1;
      break;
    }
  }
  if (val==0){
    sv[x]=analogRead(sensor[x]);
    if (sv[x]>tv[x]){
      val=1;
      }
    }
  return val;
}
