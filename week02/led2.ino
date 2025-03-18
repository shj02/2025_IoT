int led_r = 7;
int led_g = 9;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(led_r, HIGH);
  digitalWrite(led_g, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(led_r, LOW);
  digitalWrite(led_g, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
