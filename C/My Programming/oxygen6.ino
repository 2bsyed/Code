// Define the analog pin where the MQ-135 sensor is connected
const int mq135Pin = A0;

// Define the RL (load resistance) value in ohms. 
// This value depends on your specific sensor module.
const float RL = 10.0; // Example value, adjust as needed

void setup() {
  // Initialize Serial communication
  Serial.begin(9600);
}

void loop() {
  // Read analog value from the sensor
  int sensorValue = analogRead(mq135Pin);

  // Calculate the resistance of the sensor using the voltage divider formula
  float voltage = (sensorValue / 1024.0) * 5.0;
  float RS = (5.0 - voltage) / voltage * RL;

  // Define the response curve of the MQ-135 sensor for various gases
  // These values are approximate and should be calibrated for your specific sensor
  float CO2_ppm = 400.0 * pow((RS / 10.0), -2.261);
  float CO_ppm = 70.0 * pow((RS / 10.0), -1.178);
  float NH3_ppm = 100.0 * pow((RS / 10.0), -2.193);
  float CH4_ppm = 1000.0 * pow((RS / 10.0), -2.331);

  // Print gas concentrations to the Serial Monitor
  Serial.print("CO2 Concentration: ");
  Serial.print(CO2_ppm);
  Serial.print(" ppm\t");

  Serial.print("CO Concentration: ");
  Serial.print(CO_ppm);
  Serial.print(" ppm\t");

  Serial.print("NH3 Concentration: ");
  Serial.print(NH3_ppm);
  Serial.print(" ppm\t");

  Serial.print("CH4 Concentration: ");
  Serial.print(CH4_ppm);
  Serial.println(" ppm");

  // Delay before taking another reading
  delay(1000);
}
