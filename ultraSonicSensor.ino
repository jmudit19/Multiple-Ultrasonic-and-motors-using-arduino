const int lTrigPin = 3;
const int lEchoPin = 4;
const int lMotor = 2;

const int fTrigPin = 5;
const int fEchoPin = 6;
const int fMotor = 7;

const int rTrigPin = 8;
const int rEchoPin = 9;
const int rMotor = 10;
int L, F, R;

void setup() {
  Serial.begin(9600);
  pinMode(lTrigPin, OUTPUT);
  pinMode(lEchoPin, INPUT);
  pinMode(lMotor, OUTPUT);
  
  pinMode(fTrigPin, OUTPUT);
  pinMode(fEchoPin, INPUT);
  pinMode(fMotor, OUTPUT);

  pinMode(rTrigPin, OUTPUT);
  pinMode(rEchoPin, INPUT);
  pinMode(rMotor, OUTPUT);
  
  
}

void loop()
{



 digitalWrite(lTrigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(lTrigPin, LOW);
int dist = pulseIn(lEchoPin, HIGH)/ 58;



 digitalWrite(fTrigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(fTrigPin, LOW);
  int dist1;
//if(dist>50&&dist<6)
dist1 = pulseIn(fEchoPin, HIGH)/ 58;


 digitalWrite(rTrigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(rTrigPin, LOW);
  int dist2;

dist2 = pulseIn(rEchoPin, HIGH)/ 58;
  
  if(dist<50&&dist>5||dist1<50&&dist1>5||dist2<50&&dist2>5)
  {digitalWrite(lMotor,HIGH);
  delay(100);
 digitalWrite(lMotor,LOW);
 }
 Serial.print(dist);
  Serial.print("cm\n");
   Serial.print(dist1);
  Serial.print("cm\n");
   Serial.print(dist2);
  Serial.print("cm\n");
 
  

}
