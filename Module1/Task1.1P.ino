// C++ code
//
#define sensor 2 //definig the digital pin 2 as a global variable

void setup()
{
  pinMode(sensor, INPUT); // initializing the PIR motion sensor pin as input
  pinMode(12, OUTPUT); // initializing the LED pin as output
  Serial.begin(9600); // starting serial communication at 9600 baud
}

void loop()
{
  if(digitalRead(sensor)) //when motion is detected
  {
    digitalWrite(12, HIGH); // LED ON
    Serial.println("Motion Detected"); //message on serial monitor
  }
  else //when motion is detected
  {
    digitalWrite(12, LOW); // LED OFF
    Serial.println("Motion not detected");
  }
  delay(100); //Wait for 100 milliseconds
}
