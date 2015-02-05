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
   
   // R = 10*(1023-v)/v           R --> kOhm  (v 0-1023)
   // lux = 464,1588833613*(1/R)^1,3333333333  //R se kOhm
   //http://kennarar.vma.is/thor/v2011/vgr402/ldr.pdf
   tempvar = 10*(1023-v);
   tempvar = tempvar/v; //R se kOhm
   tempvar = 464.1588833613*pow(1./tempvar,1.3333333333);
   
   Serial.print("@");
   Serial.print(tempvar);
   Serial.print("#");
   delay(1000);
 }
