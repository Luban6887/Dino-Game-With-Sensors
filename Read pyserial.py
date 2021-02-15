import serial
baudrate = 9600
ser = serial.Serial('COM3', timeout=1)
while True:
   str = ser.readline().decode().rstrip()
   print(str)
