<https://github.com/sonnonet/2024_inhatc>  
## 라즈베리파이 초기 설정
    sudo apt update  
    sudo apt upgrade

### 한글 깨짐
    sudo apt-get install fonts-unfonts-core -y  
    sudo apt-get install ibus ibus-hangul -y
    sudo reboot

### 파이선 설치
    pip install opencv-contrib-python  
    sudo apt-get install python3-opencv

### 에러 발생(hint: See PEP 668 for the detailed specification.)
    sudo rm /usr/lib/python3.11/EXTERNALLY-MANAGED

### 스왑 메모리 증가(2048)
i : insert
esc -> :wq

    sudo vim /etc/dphys-swapfile
