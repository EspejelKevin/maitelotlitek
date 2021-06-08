int TRIGGER = 5;
int ECHO = 6;

void setup(){
  
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  
  Serial.begin(9600); //activamos la comunicación serial
}

void loop(){
  
  digitalWrite(TRIGGER, HIGH);
  delay(500);
  digitalWrite(TRIGGER, LOW);
  
  int tiempo = pulseIn(ECHO, HIGH);
  int distancia = tiempo/48;
  
  Serial.print(distancia);
  Serial.println(" cm");
  delay(500);
  
}