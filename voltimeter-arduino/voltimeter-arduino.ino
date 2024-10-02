// Voltage analog inputs
const int voltage0 = A0;
const int voltage1 = A1;
const int voltage2 = A2;
const int voltage3 = A3;

void setup() {

  Serial.begin(9600);
  
  //Print headers to serial
  Serial.print("V0, ");
  Serial.print("V1, ");
  Serial.print("V2, ");
  Serial.print("V3, ");
  Serial.println();
}

void loop() {
  // Analog read of voltage in pin A0
  value0 = analogRead(voltage0);
  value0 = constrain(value0,400,1023);
  value0 = map(value0,400,1023,-25,25);
 
  // Analog read of voltage in pin A1
  value1 = analogRead(voltage1);
  value1 = constrain(value1,400,1023);
  value1 = map(value1,400,1023,-25,25);
  
  // Analog read of voltage in pin A2
  value2 = analogRead(voltage2);
  value2 = constrain(value2,400,1023);
  value2 = map(value2,400,1023,-25,25);
  
  // Analog read of voltage in pin A3
  value3 = analogRead(voltage3);
  value3 = constrain(value3,400,1023);
  value3 = map(value,400,1023,-25,25);
  
  Serial.print(value0);
  Serial.print(" ");
  Serial.print(value1);
  Serial.print(" ");
  Serial.print(value2);
  Serial.print(" ");
  Serial.print(value3);
  Serial.print(" ");
  Serial.println();



}
