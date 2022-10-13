import pyautogui
import time 
time.sleep(4)
count=1
while count<=1000:
    pyautogui.typewrite("any msg "+str(count))
    pyautogui.press("enter")
    count=count+1