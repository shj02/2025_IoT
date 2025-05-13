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
vim 파일명
i : insert
esc -> :wq

    sudo vim /etc/dphys-swapfile

코드

    import cv2
    impoert sys
    import time

    cap = cv2.VideoCapture(0)
    cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
    cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
    if not cap.isOpened():
        print("camera open error")
        exit()
    while True:
        ret, image=cap.read()
        if not ret:
            print("frame read error")
            break
        cv2.imshow('CAMERA', image)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    #   if cv2.waitKey(30)>0:
    #   break
        time.sleep(10)
        cv2.imwrite("image.jpg", image)

    cap.release()
    cv2.destroyAllWindows()
