#include <LiquidCrystal_I2C.h>


float vol = 0;
int input = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);   // set the LCD address to 0x27 for a 16 chars and 2 line display


void setup() {

  lcd.init();                          // initialize the lcd
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1, 0);
  lcd.clear();
  lcd.print("Arduino");
  lcd.setCursor(0, 1);
  lcd.print("Voltmeter");
  delay(1500);
  lcd.clear();
  lcd.print("By - The ");
  lcd.setCursor(0, 1);
  lcd.print("IoT Projects");
  delay(2000);
  lcd.clear();
  pinMode(A0, INPUT);
  Serial.begin(9600);               // starting the Serial Monitor

}
void loop() {
  input = analogRead(A0);          //analogRead function is used to recive analog data
  vol = (input * 5.0) / 1024.0;    //formula using for perform action
  lcd.print("voltage is:");
  lcd.setCursor(0, 1);
  delay(100);
  lcd.print(vol);

  delay(1000);
  lcd.clear();
}
