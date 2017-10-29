/*

Licensed under GPLv3
Might be nasty since it still has debugging stuff left in it

*/

unsigned long previousMillis = 0;

void setup() {
  // all channels as output
  for(int i=2;i<10;i++) {
    pinMode(i,OUTPUT);
  }
  //Serial.begin(9600);
  //Serial.print("Set up");
  // channel test
  for(int i=2;i<10;i++) {
    digitalWrite(i,HIGH);
    softDelay(500);
    digitalWrite(i, LOW);
  }
  // blink all for 3x to indicate we are done setting up
  blink_all(3,500);
}

void loop() {
  // customize as you see fit

}

bool softDelay(int interval) {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    return true;
  } else {
    return false;
  }
}

void chase_up_and_down(int count, int flashsoftDelay) {
  for(int c=0;c<=count;c++) {
    for(int i=2;i<5;i++) {
      digitalWrite(i,HIGH);
      softDelay(flashsoftDelay);
      digitalWrite(i, LOW);
    }
  }
}

void blink_all(int count, int flashsoftDelay) {
  for(int c=0;c<=count;c++) {
    for(int i=2;i<5;i++) {
      digitalWrite(i,HIGH);
    }

    softDelay(flashsoftDelay);
    
    for(int i=2;i<5;i++) {
      digitalWrite(i,LOW);
    }
    softDelay(flashsoftDelay);
  }
  
}

void all_on(int duration) {
  for(int i=2;i<5;i++) {
    digitalWrite(i,HIGH);
   }
   
   softDelay(duration);
   
  for(int i=2;i<5;i++) {
    digitalWrite(i,LOW);
  }
}

chase_chasing_wire(int interval) {
  
}
