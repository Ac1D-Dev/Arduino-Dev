const int LED = 3;
const int Sensor = A0;

const float Humidity = 65.0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float HumidityValue = 45.0;
  analogRead(Sensor);

  Serial.print("Humidité mesurée : ");
  Serial.print(HumidityValue);
  Serial.println("%");

  if (HumidityValue < Humidity)
  {
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(500);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
  }
  else
  {
    digitalWrite(3, HIGH);
    delay(1500);
    digitalWrite(3, LOW);
    delay(1500);
    digitalWrite(3, HIGH);
    delay(1500);
    digitalWrite(3, LOW);
  }
  delay(500);
}
