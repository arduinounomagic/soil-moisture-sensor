int sensor_input=7;// Connect sensor at analog pin A2
int BUZZER=8; // connect buzzer at pin 8

void setup()
{
  pinMode(sensor_input, INPUT); //set sensor as input
  pinMode(BUZZER, OUTPUT); //set buzzer as output 
}

void loop() //if sensor value is high only than operate buzzer other wise turn off the buzzer 
{
  if(digitalRead(sensor_input)==HIGH)

  {
    digitalWrite(BUZZER, HIGH);
  }

  else
  {
    digitalWrite(BUZZER, LOW);
  }

  delay(1000); //delay
  
}
