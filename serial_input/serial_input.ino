void setup() {
  Serial.begin(115200);
  Serial.println("Ready. Type something and press Enter.");
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    Serial.print("You said: ");
    Serial.println(input);

    int value = input.toInt();
    if (value != 0 || input == "0") {
      Serial.print("Number times two: ");
      Serial.println(value * 2);
    }
  }
}