//define pins
//setup pins
//open serial
//reset triger
//send ping
//read echo time
//print echo time


int trigPin = A5;
int echoPin = A4;
float echoTime;

void setup(){

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);

}

void loop(){
  
  
  digitalWrite(trigPin,HIGH);
  // delay(10);
  digitalWrite(trigPin,LOW);
  echoTime = pulseIn(echoPin,HIGH); // microseconds
  // distance = ??
  Serial.println( echoTime );
  delay(500);
  
}
