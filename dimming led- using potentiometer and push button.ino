int buttonBright=7;
int buttonDim=4;
int led=9;
int ledBright=0;
int buttonvalBright;
int buttonvalDim;
int del=200;
//int potPin=A1;
//float analogVal;
//int potVal;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(buttonBright,INPUT);
pinMode(buttonDim,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonvalBright=digitalRead(buttonBright);
buttonvalDim=digitalRead(buttonDim);
//potVal=analogRead(potPin);
//analogVal=(255./1023.)*potVal;

/*if (buttonvalBright==1 )
{
  analogWrite(led,analogVal);
  
}*/

if (buttonvalBright==0)

{
  ledBright=ledBright+5;
}

if (buttonvalDim==0)
{ 
  ledBright=ledBright-5;
}

analogWrite(led,ledBright);
delay(del);

}
