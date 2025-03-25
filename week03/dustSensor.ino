int Vo = A0;
int V_LED = 2;

float Vo_value=0;

void setup() {
  Serial.begin(9600); //아두이노와 컴퓨터 간의 데이터 전송 속도 설정 ,
  pinMode(V_LED, OUTPUT);
  pinMode(Vo, INPUT);
}

void loop() {
  digitalWrite(V_LED, LOW);
  delayMicroseconds(280);
  Vo_value = analogRead(Vo);
  delayMicroseconds(40);
  digitalWrite(V_LED, HIGH);
  delayMicroseconds(9680);

  Serial.println(Vo_value);

  delay(1000);
}
