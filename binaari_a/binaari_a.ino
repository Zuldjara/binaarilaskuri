#define led1 10
#define led2 11
#define led3 12
#define led4 13

//#define delay = 1000

void number0(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
 
}

void number1(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}

void number2(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}

void number3(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

}

void number4(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void number5(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void number6(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void number7(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);

}

void number8(){

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);

}

void number9(){

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);


}

void setup() {

Serial.begin(9600);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

}


void loop() {

int x = Serial.read();

  if(x != -1){
   

  } if (x=='0'){
  number0();
 }
 else if (x=='1'){
  number1();
 }
 else if (x=='2'){
  number2();
 }
 else if (x=='3'){
  number3();
 }
 else if (x=='4'){
  number4();
 }
 else if (x=='5'){
  number5();
 }
 else if (x=='6'){
  number6();
 }
 else if (x=='7'){
  number7();
 }
 else if (x=='8'){
  number8();
 }
 else if (x=='9'){
  number9();
 }
 
  }
 


  
