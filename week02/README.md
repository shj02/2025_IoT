- LED
양극 : 짧거나 꺾인 것(빨강)
음극 : 길거나 펴진 것(검정)

- setup() : 딱 한 번 실행 (초기화)
- loop() : 반복

ex) digitalWrite(LED_BUILTIN, HIGH) -> LED_BUILTIN : 핀, HIGH : 상태

- 아두이노 -> 센서 : OUTPUT 모드 (보냄)
- 아두이노 <- 센서 : INPUT 모드 (보냄)

* analogueWrite는 없음(받기만 가능)

pinMode : 특정 핀을 입력(input) 용도로 사용할 지 출력(output) 용도로 사용할 지 지정(setup)
ex) pinMode(13, OUTPUT); //13번 핀을 출력 모드로 설정

digitalWrite : 특정 핀의 전기 신호를 켜거나(HIGH) 끄는(LOW) 데 사용(loop)
ex) digitalWrite(13, HIGH); //13번 핀에 전원을 보내 LED를 켬
    digitalWrite(13, LOW); //13번 핀의 전원을 끊어 LED를 끔
