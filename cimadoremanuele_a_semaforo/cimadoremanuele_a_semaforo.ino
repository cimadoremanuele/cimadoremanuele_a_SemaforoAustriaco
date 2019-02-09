int verde2 = 7;
int giallo2 = 8;
int rosso2 = 9;
int verde1 = 11;
int giallo1 = 12;
int rosso1 = 13;
int numLampeggi; //numero lampeggi
int tempoLampeggi; //tempo lampeggi
int tempoGiallo; //tempo giallo
int tempoVerde; //tempo verde

void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); //verde2
  pinMode(8, OUTPUT); //giallo2
  pinMode(9, OUTPUT); //rosso2
  pinMode(11, OUTPUT);//verde1
  pinMode(12, OUTPUT);//giallo1
  pinMode(13, OUTPUT);//rosso1
  
  Serial.begin(9600);
  
  Serial.println("Quanti lampeggi verdi?");
  while (Serial.available() == 0){};
  numLampeggi = Serial.readString().toInt();

  Serial.println("Quanto durano i lampeggi del verde?");
  while (Serial.available() == 0){};
  tempoLampeggi = Serial.readString().toInt();
  
  Serial.println("Quanto tempo rimane acceso il giallo?");
  while (Serial.available() == 0){};
  tempoGiallo = Serial.readString().toInt();

  Serial.println("Quanto tempo rimane acceso il verde?");
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
