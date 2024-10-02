
#Libraries needed to connect through serial, read data and save in csv file
from serial.tools import list_ports
import serial
import time
import csv


#List computer ports to see where is the arduino connected
ports = list_ports.comports()
for port in ports:
     print(port)

#Open csv file
file = open("voltages_data.csv", "w", newline=' ')
file.truncate

#Connect to serial port
serialCom = serial.Serial('COM3',9600)

#Reset arduino
serialCom.setDIR(False)
time.sleep(1)
serialCom.flushInput()
serialCom.setDIR(True)

data_points_max = 100

for line in range(data_points_max):
     try:
          read_bytes = serialCom.readline()
          decoded_data = read_bytes.decode('utf-8').strip('\r\n')
          print(decoded_data)

     except:
          print("Error: data not saved.")

#Closing csv file
file.close()
