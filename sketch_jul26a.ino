const int motorA1 = 5;
const int motorA2 = 6;
const int motorB1 = 9;
const int motorB2 = 10;
int durum;
int Hiz=255;




void setup() {
 pinMode(motorA1, OUTPUT);
 pinMode(motorA2, OUTPUT);
 pinMode(motorB1, OUTPUT);
 pinMode(motorB2, OUTPUT);
 Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0){
    durum = Serial.read();
  }
  if(durum=='1'){
    Hiz=50;}
    else if (durum =='2'){
      Hiz=150;}
    else if (durum =='3'){
      Hiz=255;}

/*ileri*/
if(durum=='y'){
  analogWrite(motorA1,Hiz);analogWrite(motorA2,0);
  analogWrite(motorB1,Hiz);analogWrite(motorB2,0);
}

/*ilerisag*/
if(durum=='k'){
  analogWrite(motorA1,Hiz);analogWrite(motorA2,0);
  analogWrite(motorB1,100);analogWrite(motorB2,0);
}
/*ilerisol*/
if(durum=='m'){
  analogWrite(motorA1,100);analogWrite(motorA2,0);
  analogWrite(motorB1,Hiz);analogWrite(motorB2,0);
}
/*geri*/
if(durum=='a'){
  analogWrite(motorA1,0);analogWrite(motorA2,Hiz);
  analogWrite(motorB1,0);analogWrite(motorB2,Hiz);
}
/*gerisag*/
if(durum=='f'){
  analogWrite(motorA1,0);analogWrite(motorA2,100);
  analogWrite(motorB1,0);analogWrite(motorB2,Hiz);
}
/*gerisol*/

if(durum=='z'){
  analogWrite(motorA1,0);analogWrite(motorA2,Hiz);
  analogWrite(motorB1,0);analogWrite(motorB2,100);
}
/*sag*/
if(durum=='s'){
  analogWrite(motorA1,0);analogWrite(motorA2,0);
  analogWrite(motorB1,Hiz);analogWrite(motorB2,0);
}
/*sol*/
if(durum=='l'){
  analogWrite(motorA1,0);analogWrite(motorA2,0);
  analogWrite(motorB1,Hiz);analogWrite(motorB2,0);
}
/*dur*/
if(durum=='d'){
  analogWrite(motorA1,0);analogWrite(motorA2,0);
  analogWrite(motorB1,0  );analogWrite(motorB2,0);
}
}
