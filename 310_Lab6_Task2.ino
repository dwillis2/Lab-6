
void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

int state1 = LOW;
int state2 = LOW; 

unsigned long millis1 = 0;
unsigned long millis2 = 0;

void loop() {
  unsigned long currentMillis = millis();

  if(currentMillis - millis1 >= 1000) {
    millis1 = currentMillis;

    if(state1 == LOW){
      state1 = HIGH;
    }else{
      state1 = LOW;
    }
    digitalWrite(12, state1);
  }

    if(currentMillis - millis2 >= 2000) {
    millis2 = currentMillis;

    if(state2 == LOW){
      state2 = HIGH;
    }else{
      state2 = LOW;
    }
    digitalWrite(11, state2);
  }          
}


