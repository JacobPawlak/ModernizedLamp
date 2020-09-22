//Authors: Jacob Pawlak and Griffin Weber
//Date: September 21st, 2020
//File: oil_lamp_flickering_light.ino
//gooooo blue team!


const int led_1 = 6;
const int led_2 = 7;
const int led_3 = 10;
const int led_4 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  flicker();

}

void flicker(){
  analogWrite(led_1, random(120)+135);
  analogWrite(led_2, random(120)+135);
  analogWrite(led_3, random(120)+135);
  analogWrite(led_4, random(120)+135);
  delay(random(100));
}
