// C++ code
//
#define sensor_1 2
#define sensor_2 3

const byte LED1 = 12;
uint8_t motionState1 = LOW;

const byte LED2 = 11;
uint8_t motionState2 = LOW;



void setup()
{
  pinMode(sensor_1, INPUT_PULLUP);
  pinMode(sensor_2, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
  
  attachInterrupt(digitalPinToInterrupt(sensor_1), motionFound1, RISING);
  attachInterrupt(digitalPinToInterrupt(sensor_2), motionFound2, RISING);
}

void loop()
{
  
}

void motionFound1()
{
  
  motionState1 = !motionState1;
  
  digitalWrite(LED1, motionState1); // LED ON
  Serial.println("Motion Detected by sensor 1"); //message on serial monitor

}

void motionFound2()
{
  
  motionState2 = !motionState2;
  
  digitalWrite(LED2, motionState2); // LED ON
  Serial.println("Motion Detected by sensor 2"); //message on serial monitor

}