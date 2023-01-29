//Dual LED
void setup () {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop () {
  for (int i = 1; i <= 10 ; i++){
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    delay(1000);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(1000);   
    
    if (i == 10){
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      exit(0);
    }
  }
}
