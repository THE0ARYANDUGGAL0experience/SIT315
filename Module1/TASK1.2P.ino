// C++ code
//
#define sensor 2 //definig the digital pin 2 as a global variable

const byte LED = 12;
uint8_t motionState = LOW;

void setup()
{
  pinMode(sensor, INPUT_PULLUP); // initializing the PIR motion sensor pin as input
  pinMode(LED, OUTPUT); // initializing the LED pin as output
  Serial.begin(9600); // starting serial communication at 9600 baud
  
  attachInterrupt(digitalPinToInterrupt(sensor), motionFound, RISING);
}

void loop()
{
  
}

void motionFound()
{
  
  motionState = !motionState;
  
    digitalWrite(LED, motionState); // LED ON
    Serial.println("Motion Detected"); //message on serial monitor

 
}
