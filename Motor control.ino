//motor
int m1 = 13;
int m2 = 12;
int m3 = 11;
int m4 = 10;
//button
int b1 = 7;
int b2 = 6;
int b3 = 5;
int b4 = 4;
//state
int s1 = 0;
int s2 = 0;
int s3 = 0;
int s4 = 0;
//count
int c1 = 0;
int c2 = 0;
int c3 = 0;
int c4 = 0;

void setup() {
  
  //motor
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  //button
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
 
 //motor on
  digitalWrite(m1, HIGH);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, HIGH);
}

void loop() {
  
  //read button
  s1 = digitalRead(b1);
  s2 = digitalRead(b2);
  s3 = digitalRead(b3);
  s4 = digitalRead(b4);

  //count if button is pressed
  if(s1 == HIGH){
   digitalWrite(m1, LOW);
   c1 = 1;
  }
  if(s2 == HIGH){
   digitalWrite(m2, LOW);
   c2 = 1;
  }
  if(s3 == HIGH){
   digitalWrite(m3, LOW);
   c3 = 1;
  }
  if(s4 == HIGH){
   digitalWrite(m4, LOW);
   c4 = 1;
  }
  
  //every button is pressed
  if(c1 == 1 && c2 == 1 && c3 == 1 && c4 == 1) 
  {
    //Stop the light Timer code
  }
}
