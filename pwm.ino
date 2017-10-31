const int MAX_8_INT = 255;
int brightness;
int fade_Amount;
int A0_Value;

void setup() {
  // put your setup code here, to run once:
brightness = 0;
fade_Amount= 1;
pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
A0_Value = analogRead(A0)>>2;
analogWrite(LED_BUILTIN, A0_Value);

/*
brightness = brightness + fade_Amount;
if (brightness == 0 or brightness == MAX_8_INT){
  fade_Amount = 0-fade_Amount; 
}

delay(100);
*/

}
