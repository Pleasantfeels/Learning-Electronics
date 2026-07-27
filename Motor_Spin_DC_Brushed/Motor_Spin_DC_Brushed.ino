#define INA1 25
#define INA2 26
#define PWMA 27
#define PWM_CH 0

void setup() {
  pinMode(INA1, OUTPUT);
  pinMode(INA2, OUTPUT);
  ledcSetup(PWM_CH, 20000, 8);
  ledcAttachPin(PWMA, PWM_CH);
}

void drive(int speed) {
  digitalWrite(INA1, speed >= 0);
  digitalWrite(INA2, speed < 0);
  ledcWrite(PWM_CH, abs(speed));
}

void loop() {
  drive(200);   // forward at ~78% duty
}