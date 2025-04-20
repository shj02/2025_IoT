통신 프로토콜 : 컴퓨터나 원거리 통신 장비 사이에서 메시지를 주고 받는 양식과 규칙의 체계(신호 체계, 인증, 오류 감지 및 수정 기능)

I2C(Inter_Integrated Circuit) - Inter : 상호 간, 연결된 / Intergrated Circuit(IC) : 집적 회로, 반도체 칩

: 필립스(현 NXP)에서 개발한 칩 간 통신용 직렬 버스 프로토콜


SDA(Serial Data) : 쿨록 신호에 맞추어 데이터를 주고 받기 위한 선
SCL(Serial Clock) : 타이밍(클록)을 동기화 하기 위한 선
풀업 저항 : I2C 신호선을 기본적으로 HIGH(1)로 유지해주는 역할
전송 데이터 첫 번째 바이트에 주소 정보 있음


![Image](https://github.com/user-attachments/assets/0b520197-8603-40a5-83da-18aa922d1fe2)
- Start&Stop 상태 조건 비트
- 슬리브 장치(112개)에 주소와 읽기/쓰기를 결정하는 비트
- Data 비트
- ACK/NACK 성공/실패
