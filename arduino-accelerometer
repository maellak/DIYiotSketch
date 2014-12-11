/* 
 * Example that reads the signals from analog pins A0, A1, and A2
 * in Arduino Uno and prints them to the serial console.
 * 
 * Compile & load this sketch to the Arduino and then run:
 *   sudo screen /dev/ttyACM0
 * 
 */

// Set up serial port communication (USB-serial), speed=9600.
void setup() {
  Serial.begin(115200); 
}

void loop() {
  // Read analog values from pings A0, A1, and A2.
  int sensorValue0 = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  // Scale them by multiplying with (max-volts/max-steps).  
  float voltage0 = sensorValue0 * (3.3 / 1023.0);
  float voltage1 = sensorValue1 * (3.3 / 1023.0);
  float voltage2 = sensorValue2 * (3.3 / 1023.0);
  // Print values to the serial console (delimited by commas).
  Serial.print(voltage0); Serial.print(',');
  Serial.print(voltage1); Serial.print(',');
  Serial.println(voltage2); 
}
