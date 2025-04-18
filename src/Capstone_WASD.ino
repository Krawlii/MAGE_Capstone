#include <MPU6050_tockn.h>
#include <Wire.h>
MPU6050 mpu6050(Wire);
int led = 2;
void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(0,0,0);
}
void(*resetFunc)(void) = 0;
void loop() {
  mpu6050.update();
  Serial.print("angleX : ");
  Serial.print(mpu6050.getAngleX());
  Serial.print("\tangleY : ");
  Serial.print(mpu6050.getAngleY());
  Serial.print("\tangleZ : ");
  Serial.println(mpu6050.getAngleZ());
  delay(100);
 if (mpu6050.getAngleX() >= 1000 or mpu6050.getAngleX() <=-1000)
 {
    digitalWrite(2, HIGH);
    delay(30000);
 
    resetFunc();
  } 
 else if (mpu6050.getAngleY() >=50 or mpu6050.getAngleY() <=-50)
 {
    digitalWrite(2, HIGH);
    delay(30000);
     
    resetFunc();
  }
  else if (mpu6050.getAngleZ() >=50 or mpu6050.getAngleZ() <=-50)
  {
    digitalWrite(2, HIGH);
    delay(30000);
     
    resetFunc();
    
  }
  else {
    digitalWrite(2, LOW);
    }
  }