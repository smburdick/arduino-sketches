/*
 * The "Hello World" equivalent of Arduino programs.
 * Arduino uses executes compiled programs, written in a very C-like language.
 * To use this, plug your Arduino into your computer, fire up the IDE,
 * (if you're using an Uno, you should see the L light blink then )
 * put an LED in slots LED_PIN and GND, upload, and watch it blink!
 * @author Sam Burdick
 */
#define LED_PIN 12
#define T       500

// this will run once
void setup() {
  pinMode(LED_PIN, OUTPUT);
}

// this will be called repeatedly
void loop() {
  digitalWrite(LED_PIN, HIGH); // sends about 2.2 V to this pin, perfect for typical LEDS (they tend to be picky though)
  delay(T);                    // holds voltage
  digitalWrite(LED_PIN, LOW);  // no volts for you!
  delay(T);
}
