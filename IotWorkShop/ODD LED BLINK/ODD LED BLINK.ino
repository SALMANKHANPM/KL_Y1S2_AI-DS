int i = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
}

void loop() { 
  // put your main code here, to run repeatedly:
  while (1) {
    if ( i % 2 == 0) {
      digitalWrite(6, HIGH);
      i++;
    }
    else { 
      digitalWrite(6, LOW);
      i++;
    }
  }
}
