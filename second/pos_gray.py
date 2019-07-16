import cv2
import os

i=1
for filename in os.listdir('pos'):
    img=cv2.imread(os.path.join('pos',filename), 0)
    cv2.imwrite(str(i)+".jpg", img)
    i+=1
