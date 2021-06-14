
//piny a proměnné pro čtení vstupů
int tlacitko_1 = 15;
int tlacitko_2 = 16;
int tlacitko_3 = 17;
int tlacitko_4 = 5;
int tlacitko_5 = 6;
int tlacitko_6 = 7;

//piny pro signalizaci 
int prvni_hradlo = 30;
int druhy_hradlo = 29;
int treti_hradlo = 28;
int ctvrty_hradlo = 27;
int paty_hradlo = 26;
int sesty_hradlo = 25;

//piny pro testování
int test_1 = 0;
int test_2 = 1;
int test_3 = 2;
int test_4 = 3;
int test_5 = 4;
int test_6 = 8;
int test_7 = 9;
int test_8 = 10;
int test_9 = 11;
int test_10 = 12;
int test_11= 13;
int test_12 = 14;


void setup() {
  // put your setup code here, to run once:

//tlacitko
pinMode(tlacitko_1, INPUT);
pinMode(tlacitko_2, INPUT);
pinMode(tlacitko_3, INPUT);
pinMode(tlacitko_4, INPUT);
pinMode(tlacitko_5, INPUT);
pinMode(tlacitko_6, INPUT);

//zobrazovani stavů
pinMode(prvni_hradlo, OUTPUT);
pinMode(druhy_hradlo, OUTPUT);
pinMode(treti_hradlo, OUTPUT);
pinMode(ctvrty_hradlo, OUTPUT);
pinMode(paty_hradlo, OUTPUT);
pinMode(sesty_hradlo, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

int tlacitko_1_state = digitalRead(tlacitko_1);
int tlacitko_2_state = digitalRead(tlacitko_2);
int tlacitko_3_state = digitalRead(tlacitko_3);
int tlacitko_4_state = digitalRead(tlacitko_4);
int tlacitko_5_state = digitalRead(tlacitko_5);
int tlacitko_6_state = digitalRead(tlacitko_6);

//OR (7432)
if(tlacitko_1_state == HIGH && tlacitko_2_state == LOW && tlacitko_3_state == LOW && tlacitko_4_state == LOW && tlacitko_5_state == LOW && tlacitko_6_state == LOW){
  OR();
}
//AND (----)
else if(tlacitko_1_state == LOW && tlacitko_2_state == HIGH && tlacitko_3_state == LOW && tlacitko_4_state == LOW && tlacitko_5_state == LOW && tlacitko_6_state == LOW){
  AND(); 
}
//NOR (4001)
else if(tlacitko_1_state == LOW && tlacitko_2_state == LOW && tlacitko_3_state == HIGH && tlacitko_4_state == LOW && tlacitko_5_state == LOW && tlacitko_6_state == LOW){
  NOR(); 
}
//NAND (7400)
else if(tlacitko_1_state == LOW && tlacitko_2_state == LOW && tlacitko_3_state == LOW && tlacitko_4_state == HIGH && tlacitko_5_state == LOW && tlacitko_6_state == LOW){
  NAND();
}
//4NAND (7420)
else if(tlacitko_1_state == LOW && tlacitko_2_state == LOW && tlacitko_3_state == LOW && tlacitko_4_state == LOW && tlacitko_5_state == HIGH && tlacitko_6_state == LOW){
  NAND4();
}
//INV (7404/7414)
else if(tlacitko_1_state == LOW && tlacitko_2_state == LOW && tlacitko_3_state == LOW && tlacitko_4_state == LOW && tlacitko_5_state == LOW && tlacitko_6_state == HIGH){
  INV();
}

}

void OR(){                                            //Inputy jsou Dig. piny 2, 8, 9, 12

  digitalWrite(paty_hradlo, LOW);
  digitalWrite(sesty_hradlo, LOW);
  
  //definice pinů pro testy
  pinMode(test_1, OUTPUT);
  pinMode(test_2, OUTPUT);
  pinMode(test_3, INPUT);
  int test_3_state = digitalRead(test_3);

  pinMode(test_4, OUTPUT);
  pinMode(test_5, OUTPUT);
  pinMode(test_6, INPUT);
  int test_6_state = digitalRead(test_6);
  
  pinMode(test_9, OUTPUT);
  pinMode(test_8, OUTPUT);
  pinMode(test_7, INPUT);
  int test_7_state = digitalRead(test_7);

  pinMode(test_12, OUTPUT);
  pinMode(test_11, OUTPUT);
  pinMode(test_10, INPUT);
  int test_10_state = digitalRead(test_10);

  digitalWrite(test_1, HIGH);
  digitalWrite(test_2, HIGH);
  digitalWrite(test_4, HIGH);
  digitalWrite(test_5, HIGH);
  digitalWrite(test_9, HIGH);
  digitalWrite(test_8, HIGH);
  digitalWrite(test_12, HIGH);
  digitalWrite(test_11, HIGH);

  if(test_3_state == HIGH){
    digitalWrite(prvni_hradlo, HIGH);
  }
  else{
    digitalWrite(prvni_hradlo, LOW);
  }

  if(test_6_state == HIGH){
    digitalWrite(druhy_hradlo, HIGH);
  }
  else{
    digitalWrite(druhy_hradlo, LOW);
  }

  if(test_7_state == HIGH){
    digitalWrite(treti_hradlo, HIGH);
  }
  else{
    digitalWrite(treti_hradlo, LOW);
  }

  if(test_10_state == HIGH){
    digitalWrite(ctvrty_hradlo, HIGH);
  }
  else{
    digitalWrite(ctvrty_hradlo, LOW);
  }
 
}

void AND(){                                                //Inputy jsou Dig. piny 2, 8, 9, 12

  digitalWrite(paty_hradlo, LOW);
  digitalWrite(sesty_hradlo, LOW);
  
  //definice pinů pro testy
  pinMode(test_1, OUTPUT);
  pinMode(test_2, OUTPUT);
  pinMode(test_3, INPUT);
  int test_3_state = digitalRead(test_3);

  pinMode(test_4, OUTPUT);
  pinMode(test_5, OUTPUT);
  pinMode(test_6, INPUT);
  int test_6_state = digitalRead(test_6);
  
  pinMode(test_9, OUTPUT);
  pinMode(test_8, OUTPUT);
  pinMode(test_7, INPUT);
  int test_7_state = digitalRead(test_7);

  pinMode(test_12, OUTPUT);
  pinMode(test_11, OUTPUT);
  pinMode(test_10, INPUT);
  int test_10_state = digitalRead(test_10);

  digitalWrite(test_1, HIGH);
  digitalWrite(test_2, HIGH);
  digitalWrite(test_4, HIGH);
  digitalWrite(test_5, HIGH);
  digitalWrite(test_9, HIGH);
  digitalWrite(test_8, HIGH);
  digitalWrite(test_12, HIGH);
  digitalWrite(test_11, HIGH);

  if(test_3_state == HIGH){
    digitalWrite(prvni_hradlo, HIGH);
  }
  else{
    digitalWrite(prvni_hradlo, LOW);
  }

  if(test_6_state == HIGH){
    digitalWrite(druhy_hradlo, HIGH);
  }
  else{
    digitalWrite(druhy_hradlo, LOW);
  }

  if(test_7_state == HIGH){
    digitalWrite(treti_hradlo, HIGH);
  }
  else{
    digitalWrite(treti_hradlo, LOW);
  }

  if(test_10_state == HIGH){
    digitalWrite(ctvrty_hradlo, HIGH);
  }
  else{
    digitalWrite(ctvrty_hradlo, LOW);
  }
}

void NOR(){

  digitalWrite(paty_hradlo, LOW);
  digitalWrite(sesty_hradlo, LOW);
  
  //definice pinů pro testy
  pinMode(test_1, OUTPUT);
  pinMode(test_2, OUTPUT);
  pinMode(test_3, INPUT);
  int test_3_state = digitalRead(test_3);

  pinMode(test_6, OUTPUT);
  pinMode(test_5, OUTPUT);
  pinMode(test_4, INPUT);
  int test_4_state = digitalRead(test_4);
  
  pinMode(test_7, OUTPUT);
  pinMode(test_8, OUTPUT);
  pinMode(test_9, INPUT);
  int test_9_state = digitalRead(test_9);

  pinMode(test_12, OUTPUT);
  pinMode(test_11, OUTPUT);
  pinMode(test_10, INPUT);
  int test_10_state = digitalRead(test_10);

  digitalWrite(test_1, LOW);
  digitalWrite(test_2, LOW);
  digitalWrite(test_6, LOW);
  digitalWrite(test_5, LOW);
  digitalWrite(test_7, LOW);
  digitalWrite(test_8, LOW);
  digitalWrite(test_12, LOW);
  digitalWrite(test_11, LOW);

  if(test_3_state == HIGH){
    digitalWrite(prvni_hradlo, HIGH);
  }
  else{
    digitalWrite(prvni_hradlo, LOW);
  }

  if(test_4_state == HIGH){
    digitalWrite(druhy_hradlo, HIGH);
  }
  else{
    digitalWrite(druhy_hradlo, LOW);
  }

  if(test_9_state == HIGH){
    digitalWrite(treti_hradlo, HIGH);
  }
  else{
    digitalWrite(treti_hradlo, LOW);
  }

  if(test_10_state == HIGH){
    digitalWrite(ctvrty_hradlo, HIGH);
  }
  else{
    digitalWrite(ctvrty_hradlo, LOW);
  }
}
  
void NAND(){

  digitalWrite(paty_hradlo, LOW);
  digitalWrite(sesty_hradlo, LOW);
  
  //definice pinů pro testy
  pinMode(test_1, OUTPUT);
  pinMode(test_2, OUTPUT);
  pinMode(test_3, INPUT);
  int test_3_state = digitalRead(test_3);

  pinMode(test_4, OUTPUT);
  pinMode(test_5, OUTPUT);
  pinMode(test_6, INPUT);
  int test_6_state = digitalRead(test_6);
  
  pinMode(test_9, OUTPUT);
  pinMode(test_8, OUTPUT);
  pinMode(test_7, INPUT);
  int test_7_state = digitalRead(test_7);

  pinMode(test_12, OUTPUT);
  pinMode(test_11, OUTPUT);
  pinMode(test_10, INPUT);
  int test_10_state = digitalRead(test_10);

  digitalWrite(test_1, LOW);
  digitalWrite(test_2, LOW);
  digitalWrite(test_4, LOW);
  digitalWrite(test_5, LOW);
  digitalWrite(test_9, LOW);
  digitalWrite(test_8, LOW);
  digitalWrite(test_12, LOW);
  digitalWrite(test_11, HIGH);

  if(test_3_state == HIGH){
    digitalWrite(prvni_hradlo, HIGH);
  }
  else{
    digitalWrite(prvni_hradlo, LOW);
  }

  if(test_6_state == HIGH){
    digitalWrite(druhy_hradlo, HIGH);
  }
  else{
    digitalWrite(druhy_hradlo, LOW);
  }

  if(test_7_state == HIGH){
    digitalWrite(treti_hradlo, HIGH);
  }
  else{
    digitalWrite(treti_hradlo, LOW);
  }

  if(test_10_state == HIGH){
    digitalWrite(ctvrty_hradlo, HIGH);
  }
  else{
    digitalWrite(ctvrty_hradlo, LOW);
  }
}

void NAND4(){

  digitalWrite(treti_hradlo, LOW);
  digitalWrite(ctvrty_hradlo, LOW);
  digitalWrite(paty_hradlo, LOW);
  digitalWrite(sesty_hradlo, LOW);
  
  pinMode(test_1, OUTPUT);
  pinMode(test_2, OUTPUT);
  pinMode(test_4, OUTPUT);
  pinMode(test_5, OUTPUT);
  pinMode(test_6, INPUT);
  int test_6_state = digitalRead(test_6);

  pinMode(test_7, INPUT);
  pinMode(test_8, OUTPUT);
  pinMode(test_9, OUTPUT);
  pinMode(test_11, OUTPUT);
  pinMode(test_12, OUTPUT);
  int test_7_state = digitalRead(test_7);

  digitalWrite(test_1, LOW);
  digitalWrite(test_2, LOW);
  digitalWrite(test_4, LOW);
  digitalWrite(test_5, LOW);
  digitalWrite(test_9, LOW);
  digitalWrite(test_8, LOW);
  digitalWrite(test_12, LOW);
  digitalWrite(test_11, LOW);

  if(test_6_state == HIGH){
    digitalWrite(prvni_hradlo, HIGH);
  }
  else{
    digitalWrite(prvni_hradlo, LOW);
  }

  if(test_7_state == HIGH){
    digitalWrite(druhy_hradlo, HIGH);
  }
  else{
    digitalWrite(druhy_hradlo, LOW);
  }
  
}

void INV(){
  pinMode(test_1, OUTPUT);
  pinMode(test_2, INPUT);
  int test_2_state = digitalRead(test_2);

  pinMode(test_3, OUTPUT);
  pinMode(test_4, INPUT);
  int test_4_state = digitalRead(test_4);

  pinMode(test_5, OUTPUT);
  pinMode(test_6, INPUT);
  int test_6_state = digitalRead(test_6);

  pinMode(test_7, INPUT);
  pinMode(test_8, OUTPUT);
  int test_7_state = digitalRead(test_7);

  pinMode(test_9, INPUT);
  pinMode(test_10, OUTPUT);
  int test_9_state = digitalRead(test_9);

  pinMode(test_11, INPUT);
  pinMode(test_12, OUTPUT);
  int test_11_state = digitalRead(test_11);

  digitalWrite(test_1, LOW);
  digitalWrite(test_3, LOW);
  digitalWrite(test_5, LOW);
  digitalWrite(test_7, LOW);
  digitalWrite(test_9, LOW);
  digitalWrite(test_11, LOW);

  if(test_2_state == HIGH){
    digitalWrite(prvni_hradlo, HIGH);
  }
  else{
    digitalWrite(prvni_hradlo, LOW);
  }

  if(test_4_state == HIGH){
    digitalWrite(druhy_hradlo, HIGH);
  }
  else{
    digitalWrite(druhy_hradlo, LOW);
  }

  if(test_6_state == HIGH){
    digitalWrite(treti_hradlo, HIGH);
  }
  else{
    digitalWrite(treti_hradlo, LOW);
  }

  if(test_7_state == HIGH){
    digitalWrite(ctvrty_hradlo, HIGH);
  }
  else{
    digitalWrite(ctvrty_hradlo, LOW);
  }

  if(test_9_state == HIGH){
    digitalWrite(paty_hradlo, HIGH);
  }
  else{
    digitalWrite(paty_hradlo, LOW);
  }

  if(test_11_state == HIGH){
    digitalWrite(sesty_hradlo, HIGH);
  }
  else{
    digitalWrite(sesty_hradlo, LOW);
  }
  
}
