#include <LiquidCrystal.h>

// Define LCD pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
    lcd.begin(16, 2);      // Initialize 16x2 LCD
    lcd.setCursor(0, 0);   // Set cursor at first row
    lcd.print("road closed!"); // Display message
}

void loop() {
    // No need for repeated execution
}
