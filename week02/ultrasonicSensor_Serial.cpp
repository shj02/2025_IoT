# define TRIG 13 //TRIG 핀, 기호상수 정의
# define ECHO 12 //ECHO 핀

int led_r = 7;
int led_g = 9;

void setup()
{
  Serial.begin(9600); //9600 : 속도
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(TRIG, OUTPUT); //TRIG -> OUTPUT
  pinMode(ECHO, INPUT); //ECHO는 읽음 -> INPUT
}

void loop()
{
  long duration, distance; //long = 4바이트
  
  digitalWrite(TRIG, LOW); //LOW : 끄고 시작(초기화)
  delayMicroseconds(2); //= delay(2) = 0.002초
  digitalWrite(TRIG, HIGH); //초음파 발생
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW); //초음파 끄기
  
  duration = pulseIn(ECHO, HIGH); //pulseIn:HIGH-LOW로 변하는 시간/ECHO핀이 HIGH상태로 있는 시간
  
  distance = duration * 17 / 1000; //microseconds단위이므로 1000으로 나눔(결과는 cm)
  Serial.println(duration);
  Serial.print("\nDistance : ");
  Serial.print(distance);
  Serial.println(" cm");
  
  digitalWrite(led_r, HIGH);
  digitalWrite(led_g, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led_r, LOW);
  digitalWrite(led_g, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
