//Code: Hasib Al Hasan, COO, Cybernetics Robo Limited
//Supervised by: Syed Razwanul Haque Nabil, CTO, Cybernetics Robo Limited
//www.github.com/Nabilphysics
//www.cyberneticsroboacademy.com
  
  
  //////////////////////
 //// CONNECTIONS  ////
//////////////////////
//    1. Switch: 
//    •  One end >> Batter Positive Terminal
//    • Second end >> 12V input of motor driver.
//    2. Motor Driver:
//    • Gnd >> Battery Ground
//    • 12 V>> Switch
//    • En A >> Arduino 9
//    • En B >> Arduino 10
//    • IN 1 >> Arduino 5
//    • IN 2 >> Arduino 4
//    • IN 3 >> Arduino 3
//    • IN 4 >> Arduino 2
//    • OUT A & B >> Left Motor
//    • OUT C & D >> Right Motor
//    3. Sensor Array :
//    • Positive >> Motor driver 5 V
//    • Negative >> Bttery Ground
//    • Sensor 1 output (Left most motor) >> Ardudino A0
//    • Sensor 2 output >> Ardudino A1
//    • Sensor 3 output >> Ardudino A2
//    • Sensor 4 output >>  Ardudino A3
//    • Sensor 5 output >> Ardudino A4
//    • Sensor 6 output (Right most sensor) >> Ardudino A5
//    4. Arduino:
//    • Vin >> Motor driver 5V output
//    • Gnd >> Battery Ground

int sensor[]={A0,A1,A2,A3,A4,A5};//left to right that means sensor[0] indicates the left one and sensor[5] is the right one 
int sv[]={0,0,0,0,0,0};// sensor value
//int tv[]={490+50,620+50,560+50,490+50,740+50,680+50};//threshold value
int tv[]={850,850,850,850,850,850};
int enL=9, enR=10; //enable of left motor and right motor
int motorPin[]={2,3,4,5,9,10};// last two is enable pin anr 1st four is control pin
int led[]={12,11,8,7,6};
int i;
int rs=150, ls=150; // enable value of right and left motor for going forward
void setup() {
  Serial.begin(9600);
  for(i=2;i<=12;i++){
    //pinMode(motorPin[i],OUTPUT);
    pinMode(i,OUTPUT);
  }
  //for(;;){checksensors();delay(500);}
}
