int verde2 = 7;
int giallo2 = 8;
int rosso2 = 9;
int rosso = 11;
int giallo = 12;
int verde = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rosso, HIGH);
  digitalWrite(rosso2, LOW);
  digitalWrite(verde2, HIGH);
  delay(1000);
  for (int a = 0; a < 5; a++)
  {
    digitalWrite(verde2, HIGH);
    delay(500);
    digitalWrite(verde2, LOW);
    delay(500);
  }
  digitalWrite(giallo, HIGH);
  digitalWrite(giallo2, HIGH);
  delay(1000);
  digitalWrite(rosso, LOW);
  digitalWrite(giallo, LOW);
  digitalWrite(giallo2, LOW);
  digitalWrite(rosso2, HIGH);
  digitalWrite(verde, HIGH);
  delay(1000);
  for (int a = 0; a < 5; a++)
  {
    digitalWrite(verde, HIGH);
    delay(500);
    digitalWrite(verde, LOW);
    delay(500);
  }
  digitalWrite(giallo, HIGH);
  digitalWrite(giallo2, HIGH);
  delay(1000);
  digitalWrite(giallo, LOW);
  digitalWrite(giallo2, LOW);
  

}
