#include<stdio.h>
#include<math.h>


int sensorValue;
float oxygenPercentage;
float RS_R0 = 2.89;



int sValue=780;

float calculateOxygenPercentage(int sValue) {
    float sensorValue=(float)sValue;
  float voltage = (sensorValue / 1023.0) * 5.0; 
 float ppm = pow(2, ((log10((5.0 * sensorValue / 1023.0) / RS_R0) - 0.399) / -0.236));
  float oxygenPercentage = (ppm/10000)*100; 

  return oxygenPercentage;
}
int main(){
    printf("%f",calculateOxygenPercentage(780));
}