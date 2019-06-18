#include<Servo.h>

Servo motor; //motor adında bir servo nesnesi oluşturduk.

int  g = 4;
int  f = 5;
int  a = 6;
int  b = 7;

int  e = 8;
int  d = 9;
int  c = 10;


void setup() {

  pinMode(a, OUTPUT); // Pinlerin çıkış pini olduğunu belirtiyoruz.
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  

  motor.attach(3); // Servo motorun data pinini arduino 3 numaralı
  //pine bağladığımızı belirttik.
}

void loop() {
  motor.write(180); // Servo motora açı değeri olarak 90 dereceye döndürdük.
  sifirYaz();
  motor.write(0);
  sayilariYazdir();

}

void sayilariYazdir() {
  //1 sayisi
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  //2 sayisi
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);
  // "3" Sayısını yazar.
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);
  // "4" Sayısını yazar.
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);
  // "0" Sayısını yazar.

}

void sifirYaz() {

  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(300000);
}
