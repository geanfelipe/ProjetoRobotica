//codigo de apresentacao do robo

int motor1 = 10;
//int motor2 = 11;
int motor3 = 12;
//int motor4 = 13;

void setup()
{
  pinMode(motor1, OUTPUT);
//  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
//  pinMode(motor4, OUTPUT);
  
}
void loop()
{

  //andar em linha reta
  digitalWrite(motor1, HIGH);
//  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, HIGH);
//  digitalWrite(motor4, HIGH);
 delay(16000);
  
  //para direita
  digitalWrite(motor1,  LOW);
//  digitalWrite(motor2, HIGH);
  digitalWrite(motor3,LOW);
//  digitalWrite(motor4, HIGH);
  delay(3000);
  
}
