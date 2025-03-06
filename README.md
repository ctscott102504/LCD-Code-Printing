# Arduino LCD Display with Knob Controls

This project shows how to connect an LCD screen to an Arduino Mega 2560 and use potentiometers (knobs) to adjust the screen’s contrast and control an extra function, like brightness.

Explaining the code:
1. Setting Up the LCD
The LiquidCrystal library helps the Arduino talk to the LCD.
"LiquidCrystal lcd(12, 11, 8, 9, 10, 11);"
This tells the LCD which Arduino pins it will use.

2. Displaying Text
In the setup() function, we turn on the LCD and display a message:
void setup() {
  lcd.begin(16, 2);  // Set up the LCD (16 columns, 2 rows)
  lcd.setCursor(0, 0);  // Start at the first position
  lcd.print("Hello, World!");  // Show text on the screen
}
This makes the screen show "Hello, World!" when the Arduino starts.

3. Adjusting LCD Contrast
The potentiometer is connected to the LCD’s VO pin (pin 3).
Turning the knob changes the screen’s contrast (how dark the letters appear).


