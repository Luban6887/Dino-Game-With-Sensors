import serial
import pyautogui
l = ['50', '51', '52', '53', '54', '55', '56', '57', '58', '59', '60']
baudrate = 9600
ser = serial.Serial('COM3', timeout=1)
while True:
   msz = ser.readline().decode().rstrip()
   if msz > '500' :
      pyautogui.press('space')
      print('Jumping')
   else :
      print(' ')
