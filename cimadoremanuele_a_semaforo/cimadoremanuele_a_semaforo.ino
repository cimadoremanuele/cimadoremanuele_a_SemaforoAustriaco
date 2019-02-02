int verde2 = 7;
int giallo2 = 8;
int rosso2 = 9;
int rosso1 = 11;
int giallo1 = 12;
int verde1 = 13;
int numLampeggi;
int tempoLampeggi;
int tempoGiallo;
int tempoVerde;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  Serial.begin(9600);
  
  Serial.println("quanti lampeggi verdi?");
  while (Serial.available() == 0){};
  numLampeggi = Serial.readString().toInt();

  Serial.println("quanti durano i lampeggi del verde?");
  while (Serial.available() == 0){};
  tempoLampeggi = Serial.readString().toInt();
  
  Serial.println("quanti tempo rimane acceso il giallo?");
  while (Serial.available() == 0){};
  tempoGiallo = Serial.readString().toInt();

  Serial.println("quanti tempo rimane acceso il verde?");
  while (Serial.available() == 0){};
  tempoVerde = Serial.readString().toInt();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rosso1, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(rosso2, LOW);
  delay(tempoVerde);
  Lampeggia2();
  Giallo();
  digitalWrite(rosso1, LOW);
  digitalWrite(giallo2, LOW);
  digitalWrite(rosso2, HIGH);
  digitalWrite(verde1, HIGH);
  delay(tempoGiallo);
  Lampeggia1();
  Giallo();
}
void Giallo()
{
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(giallo1, HIGH);
  digitalWrite(giallo2, HIGH);
  delay(tempoGiallo);
  digitalWrite(giallo1, LOW);
  digitalWrite(giallo2, LOW);
}
void Lampeggia1()
{
  for (int a = 0; a < numLampeggi; a++)
  {
    digitalWrite(verde1, LOW);
    delay(tempoLampeggi);
    digitalWrite(verde1, HIGH);
    delay(tempoLampeggi);
  }
}
void Lampeggia2()
{
  for (int a = 0; a < numLampeggi; a++)
  {
    digitalWrite(verde2, LOW);
    delay(tempoLampeggi);
    digitalWrite(verde2, HIGH);
    delay(tempoLampeggi);
  }
}
