#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sensorValue=780;
float co(int ssValue){
    const float R0 = 76.63;
    double sValue=(double)ssValue;
    float loadResistance=10000.00;
    float sensorResistance = (1023.0 / sensorValue - 1.0) * loadResistance;

  // Calculate the CO2 percentage based on the sensor resistance and R0 value
  float ppm = pow(sensorResistance / R0, -2.06);
  float o2=100-79.01-ppm;
return o2;

}
int main(){
    printf("%f",co(780));
}