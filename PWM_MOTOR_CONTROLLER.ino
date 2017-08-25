#define LED_PIN 13
#define PWM_PIN 3
#define POT_PIN A0

int pwm_power = 0;

void setup()
{
  //Pin13 LED initialize
  pinMode(LED_PIN, OUTPUT);
  //PWM Pin initialize
  pinMode(PWM_PIN, OUTPUT);
  //Ensure PWM is at zero;
  analogWrite(PWM_PIN, 0);
  //Flash light a few times so you know SOMETHINGS GONNA STAT
  for(int i=0; i < 5; i++){
    digitalWrite(LED_PIN, HIGH);
    delay(300);
    digitalWrite(LED_PIN, LOW);
    delay(300);
  }
}

void loop()
{
  analogWrite(PWM_PIN, analogRead(POT_PIN)/4);
}
