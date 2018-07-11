
/*This program converts typed messages into morse code. 
 * Each letter is a function in the format of let"insert capital letter here"
 * Each number is a function in the format of num"insert number here"
 * A dit is a flash lasting half a second.
 * A dash is a flash lasting a second.
 * There is half a second between dits and dashes of the same character.
 * There is a one second delay between characters of the same word.
 */

 
void setup() { 
  pinMode(13, OUTPUT); // Set built in LED to output
// Type character functions here.
  letH();
  letI();
  delay (3000);
  letM();
  letO();
  letM();
}

void loop() {
}

//The following sectins define the character functions.

// This section defines the functions dit and dash.
void dit()
{
digitalWrite (13, HIGH);
delay (500);
digitalWrite (13, LOW);
delay (500); 
}

void dash()
{
digitalWrite (13, HIGH);
delay (1000);
digitalWrite (13, LOW);
delay(500);
}


// This section defines the letter functions using dit and dash
void letA()
{
dit();
dash();
delay (1000);
}

void letB()
{
dash();
dit();
dit();
dit();
delay (1000);
}

void letC()
{
dash();
dit();
dash();
dit();
delay (1000);
}

void letD()
{
dash();
dit();
dit();
delay (1000);
}
void letE()
{
dit();
delay (1000);
}

void letF()
{
dit();
dit();
dash();
dit();
delay (1000);
}

void letG()
{
dash();
dash();
dit();
delay (1000);
}

void letH()
{
dit();
dit();
dit();
dit();
delay (1000);
}

void letI()
{
dit();
dit();
delay (1000);
}

void letJ()
{
dit();
dash();
dash();
dash();
delay (1000);
}

void letK()
{
dash();
dit();
dash();
delay (1000);
}

void letM()
{
dash();
dash();
delay (1000);
}

void letN()
{
dash();
dit();
delay (1000);
}

void letO()
{
dash();
dash();
dash();
delay (1000);
}

void letP()
{
dit();
dash();
dash();
dit();
delay (1000);
}

void letQ()
{
dash();
dash();
dit();
dash();
delay (1000);
}

void letR()
{
dit();
dash();
dit();
delay (1000);
}

void letS()
{
dit();
dit();
dit();
delay (1000);
}

void letT()
{
dash();
delay (1000);
}

void letU()
{
dit();
dit();
dash();
delay (1000);
}

void letV()
{
dit();
dit();
dit();
dash();
delay (1000);
}

void letW()
{
dit();
dash();
dash();
delay (1000);
}

void letX()
{
dash();
dit();
dit();
dash();
delay (1000);
}

void letY()
{
dash();
dit();
dash();
dash();
delay (1000);
}

void letZ()
{
dash();
dash();
dit();
dit();
delay (1000);
}

//This section defines the numbers 0-9 using dit and dash
void num0()
{
dash();
dash();
dash();
dash();
dash();
delay (1000);
}

void num1()
{
dit();
dash();
dash();
dash();
dash();
delay (1000);
}

void num2()
{
dit();
dit();
dash();
dash();
dash();
delay (1000);
}

void num3()
{
dit();
dit();
dit();
dash();
dash();
delay (1000);
}

void num4()
{
dit();
dit();
dit();
dit();
dash();
delay (1000);
}

void num5()
{
dit();
dit();
dit();
dit();
dit();
delay (1000);
}

void num6()
{
dash();
dit();
dit();
dit();
dit();
delay (1000);
}

void num7()
{
dash();
dash();
dit();
dit();
dit();
delay (1000);
}

void num8()
{
dash();
dash();
dash();
dit();
dit();
delay (1000);
}

void num9()
{
dash();
dash();
dash();
dash();
dit();
delay (1000);
}

