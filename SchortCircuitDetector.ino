//This simple script allows you to check for short circuit 

const uint8_t green_led=5;
const uint8_t red_led=6;
const uint8_t input_pin=8; 

void setup() {
  pinMode(green_led,OUTPUT);
  pinMode(red_led,OUTPUT);
  pinMode(input_pin,INPUT);
}

void loop() {
  if(digitalRead(input_pin)== HIGH)
  {
    digitalWrite(red_led,HIGH);
    digitalWrite(green_led,LOW);
  }
  else
  {
    digitalWrite(red_led,LOW);
    digitalWrite(green_led,HIGH);
  }

}
