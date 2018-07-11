void letA ()
{
digitalWrite (13, HIGH);
delay (500);
digitalWrite (13, LOW);
delay (500);
digitalWrite (13, HIGH);
delay (1000);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  letA();
}

void loop() {
  // put your main code here, to run repeatedly:

}

