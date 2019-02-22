int sensor_input= A2;// connect sensor at analog pin A2

int sensor_value; // variable to store sensor value

void setup()
{
  Serial.begin(9600);// intialize serial monitor
}

void loop()
{
  sensor_value=analogRead(sensor_input);// stores sensor values in variable sensor_value
  int percentage_value;// variable to store percentage values
  percentage_value= map(sensor_value, 840, 120, 0, 100);// caluclate values in percentage
  Serial.print("moisture % =");// prints on serial monitor
  Serial.print(percentage_value);// prints values stored in percentage_value
  Serial.println("%");
  
  delay(1000);
}
