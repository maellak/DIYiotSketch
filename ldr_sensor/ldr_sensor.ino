 // pin assignments
 int LDR = 0;
 
 // initialize the serial port
 // and declare inputs and outputs
 void setup() {
   pinMode(LDR, INPUT);
   Serial.begin(115200);
 }
 
 // read from the analog input connected to the LDR
 // and print the value to the serial port.
 // the delay is only to avoid sending so much data
 // as to make it unreadable.
 void loop() {
   float v = analogRead(LDR);
   float tempvar;
   
   // R = 10*(1023-v)/v           //v se 0-1023 --> R se kOhm 
   // lux = -10*R + 10000 + 1/10  //R se kOhm
   tempvar = 10*(1023-v);
   tempvar = tempvar/v;
   tempvar = -10.*tempvar + 10000. + 0.1
   
   Serial.print("@");
   Serial.print(tempvar);
   Serial.print("#");
   delay(1000);
 }
