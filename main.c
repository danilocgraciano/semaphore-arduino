void setup()
{
  //P1
  pinMode(2, OUTPUT);
  
  //P2
  pinMode(12, OUTPUT);
  
  //S1
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  //S2
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  
  //Stage 1
  //S1 = Red
  //S2 = Red
  //P1 = On
  //P2 = On
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 255);
  
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
  
  delay(2000);
  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);
  
  delay(3000);
  
  //Stage 2
  //S1 = Red
  //S2 = Green
  //P1 = 0ff
  //P2 = 0ff
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  delay(2000);
  
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 255);
  
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
  
  delay(3000);
  
  //Stage 3
  //S1 = Red
  //S2 = Yellow
  //P1 = 0ff
  //P2 = 0ff
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 255);
  
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 255);
  
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  
  delay(3000);
  
  //Stage 4
  //S1 = Red
  //S2 = Green
  //P1 = On
  //P2 = On
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 255);
  
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
  
  delay(2000);
  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);
  
  delay(5000);
  
  //Stage 5
  //S1 = Green
  //S2 = Red
  //P1 = 0ff
  //P2 = 0ff
  
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  delay(2000);
  
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 0);
  
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
  
  delay(3000);
  
  //Stage 6
  //S1 = Yellow
  //S2 = Red
  //P1 = 0ff
  //P2 = 0ff
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 255);
  
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
  
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  
  delay(3000);
  
}
