#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define LDR 0
#define PIR 9
#define LED 13

int pirState;
int ldrValue;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  digitalWrite(LED, LOW);
}

void loop(){
  
  
  ldrValue = analogRead(LDR);
  Serial.print("Analog Read = ");
  Serial.println(ldrValue);
  lcd.print("Analog Read = ");
  lcd.print(ldrValue);
  delay(500);
  lcd.clear();

  if (ldrValue >= 10) { // light
    digitalWrite(LED, LOW);
    Serial.print("Lighted; ");
    lcd.print("Lighted; ");
    delay(1000);
    lcd.clear();
  } 
  else { // ldrValue < 10 // dark
    Serial.print("Dark; ");
    lcd.print("Dark; ");
    delay(500);
    lcd.clear();
    pirState = digitalRead(PIR);
    if (pirState == HIGH) {
      digitalWrite(LED, HIGH);
      Serial.print("Motion Detected");
      lcd.print("Motion Detected");
      delay(1000);
      lcd.clear();
      delay(3000);
      digitalWrite(LED, LOW);
      Serial.println();
      Serial.print("No Motion");
      lcd.print("No Motion");
      delay(500);
      lcd.clear();
      Serial.println();
      delay(500);
    } 
    else { // pirState == LOW
      digitalWrite(LED, LOW);
    }
  }

  delay(1000);
}