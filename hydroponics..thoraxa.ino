int value;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(A0);
  if(value <= 250)
  {
    digitalWrite(13, 1); //green light
    digitalWrite(12, 0); //yellow light
    digitalWrite(11, 0); //red light
  }
  else if(value <= 400)
  {
    digitalWrite(13, 0); //green light
    digitalWrite(12, 1); //yellow light
    digitalWrite(11, 0); //red light
  }
  else
  {
    digitalWrite(13, 0); //green light
    digitalWrite(12, 0); //yellow light
    digitalWrite(11, 1); //red light
  }

}
