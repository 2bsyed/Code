// Define the analog pin where the MQ-135 sensor is connected
//const int mq135Pin = A0;

// Define the load resistor value (in ohms)
const float loadResistance = 10000.0;  // 10kΩ

// Define the clean air resistance of the MQ-135 sensor
const float R0 = 76.63;  // You need to calibrate this value for your specific sensor

/* void setup() {
  Serial.begin(9600);
}
*/
void loop() {
  // Read the analog value from the MQ-135 sensor
  int sensorValue = analogRead(mq135Pin);

  // Calculate the resistance of the sensor
  float sensorResistance = (1023.0 / sensorValue - 1.0) * loadResistance;

  // Calculate the CO2 percentage based on the sensor resistance and R0 value
  float ppm = pow(sensorResistance / R0, -2.06);

  // Print the CO2 concentration in percentage
  Serial.print("CO2 Concentration (%): ");
  Serial.println(ppm);

  delay(1000);  // Adjust the delay as needed for your application
}
