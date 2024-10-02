
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

