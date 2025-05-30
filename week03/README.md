InfluxDB : 시계열 데이터 베이스, 시간에 따라 변화하는 데이터를 효과적으로 저장하고 관리하는 데 최적화된 데이터베이스

주요 특징
1) 시계열 데이터 저장 : 시간과 함께 변화하는 데이터를 저장하는 데 특화
2) 고속 데이터 삽입 및 검색 : INSERT 속도 빠름, SELECT 시 시간 범위를 지정하여 빠르게 데이터 검색 가능
3) SQL과 비슷한 질의(Query) 언어 지원 : InfluxQL, Flux 같은 언어를 제공하여 SQL과 유사한 방식으로 데이터 조회 가능
4) 태그 기반 데이터 저장 : 검색 속도 향상

주요 개념
1) Measurement : 테이블과 유사
2) Tag : 빠른 검색을 위한 메타데이터
3) Field : 저장할 데이터 값
4) Timestamp : 데이터가 기록된 시간

InfluxDB vs 다른 데이터 베이스 비교
|특징|InfluxDB|MySQL|MongoDB|
|:---:|:---:|:---:|:---:|
|주요 목적|시계열 데이터|일반 데이터|문서 기반 데이터|
|속도|빠름(최적화됨)|보통|보통|
|저장 구조|시간 기반(Timestamp 필수)|테이블 기반|JSON 문서 기반|
|적합한 용도|센서 데이터, 로그 분석|일반 데이터 저장|NoSQL 문서 저장|
