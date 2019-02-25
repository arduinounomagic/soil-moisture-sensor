/*
*How to operate soil moisture in analog mode sensor using Arduino Uno   create on: 25/2/2019
*
*for more detail please visit-
*
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*/
const int sensor_input=A2;// Connect sensor at analog pin A2

int sensor_value; // variable to store sensor value

void setup()
{
  Serial.begin(9600);// Initalize serial communication
}

void loop()
{
  sensor_value=analogRead(sensor_input);//Read sensor data
  Serial.print("sensor moisture value="); // Print information on serial monitor
  Serial.println(sensor_value); // Display sensor value

  delay(1000); //delay
  
}
