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
