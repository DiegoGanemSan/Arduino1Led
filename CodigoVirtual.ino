//Diego Ganem Sandoval
void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(100); // Esperar 1000 milisegundos
  digitalWrite(10, LOW);
  delay(100); // Esperar 1000 milisegundos
}
