import cv2
import os

i=1
for filename in os.listdir('neg'):
    img=cv2.imread(os.path.join('neg',filename),0)
    resized=cv2.resize(img,(100,100))
    cv2.imwrite(str(i)+".jpg", resized)
    i+=1
