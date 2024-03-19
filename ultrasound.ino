int Trig = A5;
int Echo = A4;
float pingT;
float distance;

void setup() {

pinMode(Trig,OUTPUT);
pinMode(Echo,INPUT);
Serial.begin(9600);

}

void loop() {

pingT = pingTime();
Serial.println(pingT);
delay(1000);

}

float pingTime(){
  float pingTravelTime;
  digitalWrite(Trig,LOW); /* make sure ping is low*/
  delayMicroseconds(2);
  digitalWrite(Trig,HIGH);
  delayMicroseconds(20);
  digitalWrite(Trig,LOW); /* transition from high to low releases the ping */
  pingTravelTime = pulseIn(Echo,HIGH); /* stays high until ping comes back, in microsecods */
  distance = (0.5)*(34000)*pingTravelTime/(1000000); 
  return distance;
  
}
