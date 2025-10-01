
 const int P = 2 ;
 const int LED = 3 ;

 int buttonState = 0;

void setup() {

  pinMode(LED, OUTPUT);
  pinMode(P, INPUT);
}


void loop() {
  buttonState = digitalRead(P);

  if(buttonState == HIGH){
   digitalWrite(LED, LOW);

  }else{
    digitalWrite(LED, HIGH);
  }
    
}
