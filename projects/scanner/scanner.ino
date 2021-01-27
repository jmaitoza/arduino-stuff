const int echo = 8;
const int trig = 9;


void setup() 
{
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}

void loop() 
{
  long dur;
  long tocm;

  digitalWrite(trig, LOW);
  delayMicroseconds(10);
  digitalWrite(trig, HIGH);

  dur = pulseIn(echo, HIGH);
  tocm = dur/29/2;

  Serial.println(tocm);
  delayMicroseconds(100);
}
