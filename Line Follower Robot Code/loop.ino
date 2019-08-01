void loop(){

          sense(0); sense(5);
          if (sv[0]<tv[0] || sv[5]<tv[5]){
            hbreak();
            follow(-100,-100);
            for(;;){
              sense(0);sense(5);
              if(sv[0]<tv[0] || sv[5]<tv[5]){
                Stop(10); 
                break;
                }
              }
            
            sense(0); sense(5);
            if(sv[0]<tv[0] && sv[5]<tv[5]){
              
              follow(rs,ls);
                  for(;;){
                  sense(0);sense(5);
                  if(sv[0]>tv[0] && sv[5]>tv[5]){
                    Stop(100); 
                    break;
                    }
                  }
                  
              }
            else if(sv[0]<tv[0] && sv[5]>tv[5]){
                int ang=scanangle(0);
              if (ang==1){
//              sense(1);
//              if(sv[1]<tv[1]){
                //Stop(100);for(;;){}
                //Stop(100);for(;;){}
                follow(rs,ls);
                  for(;;){
                  sense(0);sense(1);
                  if(sv[0]>tv[0] && sv[1]>tv[1]){
                    Stop(100);
                    break;
                    }
                  }
                 follow(rs,-20);
                 for(;;){
                  sense(0);
                  if(sv[0]<tv[0]){
                    Stop(100);
                    break;
                    }
                  }
                 follow(20,-ls);
                 for(;;){
                  sense(2);
                  if(sv[2]<tv[2]){
                    Stop(100);
                    break;
                    }
                  }
                  
                }
              else{
                //ledF(0);
                follow(rs,-ls);
                for(;;){
                  sense(2);
                  if(sv[2]<tv[2])
                    break;
                  }
                  ledoff();
                }
              }
           else if(sv[0]>tv[0] && sv[5]<tv[5]){
              //ledF(3);
              int ang=scanangle(5);
              if (ang==1){
                //ledF(0);
              //sense(4);
              //if(sv[4]<tv[4]){
                //Stop(100);for(;;){}
                follow(rs,ls);
                  for(;;){
                  sense(4);sense(5);
                  if(sv[4]>tv[4] && sv[5]>tv[5]){
                    Stop(100);
                    break;
                    }
                  }
                 follow(-20,ls);
                
                 for(;;){
                  
                  sense(5);
                  if(sv[5]<tv[5]){
                    Stop(100);
                    break;
                    }
                    
                  }
                  
                 follow(-rs,20);
                 for(;;){
                  sense(3);
                  if(sv[3]<tv[3]){
                    Stop(100);
                    break;
                    }
                  }
                 //ledoff();
                }
              else{
                ledF(0);
                follow(-rs,ls);
                for(;;){
                  sense(3);
                  if(sv[3]<tv[3]){
                    Stop(10);
                    break;
                  }
                  }
                ledoff();
                }
                //ledoff();
              }
            }
          else{
          sense(1);sense(4);
          if (sv[1]<tv[1] || sv[4]<tv[4]){
            
            if(sv[1]>sv[4]){
              //ledf(0);
              follow(-20,ls);
               }
              
            else if(sv[1]<sv[4]){
              //ledf(4);
              follow(rs,-20);                
              }
              
          }
            
            
          else{
              sense(2);sense(3);
              if (sv[2]>sv[3]+10){
                 // ledF(1);
                  follow(rs-60,ls+105);  //delay(500);
                }
                else if (sv[2]+10<sv[3]){
                 // ledF(3);
                  follow(rs+100,ls-50);
                }
                else{
                 // ledF(2);
                  follow(rs,ls);
                }
            }
          }
            
}
      
      
  
void ledF(int ld){
  for(i=0;i<=4;i++){
    if (i==ld) 
      digitalWrite(led[i],1);
    else
      digitalWrite(led[i],0);
    }
  }
void ledoff(){
  for(i=0;i<=4;i++)
    digitalWrite(led[i],0);
  }
