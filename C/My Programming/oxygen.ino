#include <Arduino.h>
#include <math.h>

const int mq135Pin = A0; // Analog pin where the MQ-135 sensor is connected
float RS_R0 = 2.89; // Adjust this value based on your calibration
float co2Percentage;
float methanePercentage;
float ammoniaPercentage;
float oxygenPercentage;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(mq135Pin);
  co2Percentage = calculateGasPercentage(sensorValue, 0.4, 4.0); // CO2
  methanePercentage = calculateGasPercentage(sensorValue, 0.2, 3.0); // Methane (CH4)
  ammoniaPercentage = calculateGasPercentage(sensorValue, 0.1, 2.0); // Ammonia (NH3)
  oxygenPercentage = calculateOxygenPercentage(co2Percentage, methanePercentage, ammoniaPercentage);

  Serial.print("CO2 Percentage: ");
  Serial.print(co2Percentage, 2); // Print with two decimal places
  Serial.print("%, Methane Percentage: ");
  Serial.print(methanePercentage, 2); // Print with two decimal places
  Serial.print("%, Ammonia Percentage: ");
  Serial.print(ammoniaPercentage, 2); // Print with two decimal places
  Serial.print("%, Oxygen Percentage: ");
  Serial.print(oxygenPercentage, 2); // Print with two decimal places
  Serial.println("%");

  delay(1000); // Adjust the delay as needed
}

float calculateGasPercentage(int sensorValue, float minValue, float maxValue)
{
  float voltage = (sensorValue / 1024.0) * 5.0;
  float gasPercentage = nonlinearMap(voltage, minValue, maxValue, 0, 100);

  if (gasPercentage < 0) {
    gasPercentage = 0;
  } else if (gasPercentage > 100) {
    gasPercentage = 100;
  }

  return gasPercentage;
}

float calculateOxygenPercentage(float co2Percentage, float methanePercentage, float ammoniaPercentage)
{
  // Assuming non-linear relationships between CO2, CH4, NH3, and O2
  float oxygenPercentage = 21.0 - (co2Percentage * 0.09) + (methanePercentage * 0.05) - (ammoniaPercentage * 0.02);

  if (oxygenPercentage < 0) {
    oxygenPercentage = 0;
  } else if (oxygenPercentage > 21) {
    oxygenPercentage = 21;
  }

  return oxygenPercentage;
}

float nonlinearMap(float x, float in_min, float in_max, float out_min, float out_max)
{
  // Non-linear mapping function
  return (out_max - out_min) * pow((x - in_min) / (in_max - in_min), 2) + out_min;
}