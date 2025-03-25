#include <Wire.h>				//I2C 통신을 위한 기본 라이브러리

void setup()
{
  Serial.begin(9600); //시리얼 모니터 시작(속도 : 9600 baud)
  Wire.begin(); //I2C 통신 시작
  Serial.println("I2C Scanner Running..."); //시작 메시지 출력
}

void loop()
{
  Serial.println("Scanning..."); //검색 결과 메시지 출력
  
  for (byte address = 1; address < 127; address++) { //I2C 주소 범위 : 0x01~0x7F (1~127)
    Wire.beginTransmission(address); //특정 주소로 통신 시작
    if (Wire.endTransmission() == 0) { //응답이 0이면 I2C 장치가 존재함
      Serial.print("I2C 장치 발견: 0x"); //발견된 장치 주소 출력
      Serial.println(address, HEX); //16진수(HEX) 형식으로 출력
      delay(500);
    }
  }
  
  Serial.println("Scan Complete! Retrying is 5 seconds...\n");
  delay(5000); //5초 후 다시 검색
}
  
