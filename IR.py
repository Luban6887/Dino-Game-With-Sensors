import serial
import pyautogui

baudrate = 9600
ser = serial.Serial('COM3', timeout=1)
while True:
   msz = ser.readline().decode().rstrip()
   print(msz)
   if 'A' in msz :
      pyautogui.press('space')
   else :
      print(' ')