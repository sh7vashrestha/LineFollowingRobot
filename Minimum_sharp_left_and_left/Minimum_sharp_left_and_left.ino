//IR sensors
int L_S = 4;
int M_S = 5;
int R_S = 6;

//for motor input
int ENA = 3; //left motor
int motorInput1 = 7; //left motor
int motorInput2 = 8; //left motor
int motorInput3 = 9; //right motor
int motorInput4 = 10; //right motor
int ENB = 11; //right motor

void setup()
{
  pinMode(L_S, INPUT);
  pinMode(M_S, INPUT);
  pinMode(R_S, INPUT);
  

  pinMode(motorInput1, OUTPUT);
  pinMode(motorInput2, OUTPUT);
  pinMode(motorInput3, OUTPUT);
  pinMode(motorInput4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void loop(){
  if( digitalRead(L_S) == 0  && digitalRead(M_S) == 1 && digitalRead(R_S) == 0){
      
  digitalWrite(motorInput1, LOW);
  digitalWrite(motorInput2, HIGH);
  digitalWrite(motorInput3, LOW);
  digitalWrite(motorInput4, HIGH);
  analogWrite(ENA,127);
  analogWrite(ENB,127);
    
    }
    if( digitalRead(L_S) == 0 && digitalRead(M_S) == 0 && digitalRead(R_S) == 1){

  digitalWrite(motorInput1, LOW);
  digitalWrite(motorInput2, HIGH);
  digitalWrite(motorInput3, LOW);
  digitalWrite(motorInput4, LOW);
  analogWrite(ENA,127);
  analogWrite(ENB,127);
      
    
    }
    if(digitalRead(L_S) == 1 && digitalRead(M_S) == 0 && digitalRead(R_S) == 0){

     digitalWrite(motorInput1, LOW);
  digitalWrite(motorInput2, LOW);
  digitalWrite(motorInput3, LOW);
  digitalWrite(motorInput4, HIGH);
  analogWrite(ENA,127);
  analogWrite(ENB,127);
      
  
    }
    if(digitalRead(L_S) == 0 && digitalRead(M_S) == 1 && digitalRead(R_S) == 1){

        digitalWrite(motorInput1, LOW);
  digitalWrite(motorInput2, HIGH);
  digitalWrite(motorInput3, HIGH);
  digitalWrite(motorInput4, LOW);
  analogWrite(ENA,127);
  analogWrite(ENB,127);
      
    
    }
    if(digitalRead(L_S) == 1 && digitalRead(M_S) == 1 && digitalRead(R_S) == 0){

     digitalWrite(motorInput1, HIGH);
  digitalWrite(motorInput2, LOW);
  digitalWrite(motorInput3, LOW);
  digitalWrite(motorInput4, HIGH);
  analogWrite(ENA,127);
  analogWrite(ENB,127);
   
    }
   if(digitalRead(L_S) == 1 && digitalRead(M_S) == 1 && digitalRead(R_S) == 1){
  digitalWrite(motorInput1, LOW);
  digitalWrite(motorInput2, LOW);
  digitalWrite(motorInput3, LOW);
  digitalWrite(motorInput4, LOW);
  
      
    
}
}
