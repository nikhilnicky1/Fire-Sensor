//int buzzer = 8;try when you use with buzzer
int LED = 13;
int flame_sensor = 4;
int flame_detected;

void setup()
{
  Serial.begin(9600);
//  pinMode(buzzer, OUTPUT); try when you use with buzzer
  pinMode(LED, OUTPUT);
  pinMode(flame_sensor, INPUT);
}

void loop()
{
  flame_detected = digitalRead(flame_sensor);
  Serial.print(flame_detected);
  if (flame_detected == 1)
  {
  Serial.println("Flame detected...! take action immediately."); //Check in Serial Monitor
  //  digitalWrite(buzzer, HIGH);try when you use with buzzer
    digitalWrite(LED, HIGH);
    delay(200);
  }
  else
  {
   // Serial.println("No flame detected. stay cool");
    //digitalWrite(buzzer, LOW);try when you use with buzzer
    digitalWrite(LED, LOW);
  }
  delay(1000);
}
