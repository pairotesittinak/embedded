int SEG_A=2;
int SEG_B=3;
int SEG_C=4;
int SEG_D=5;
int SEG_E=6;
int SEG_F=7;
int SEG_G=8;
int SEG_DP=9;
int Q1 = 10;
int Q2 = 11;
int Q3 = 12;
int Q4 = 13;
int i;
int j;

char seg[] =
 
  {

    0b10110110, // 5 
    0b10111110, // 6 
    0b11111100, // 0 
    0b11110010, // 3 
    0b11111100, // 0 
    0b11110010, // 3            
    0b01100000, // 1                 
    0b01100110, // 4           
   
   } ;
void display7seg(int a)
{
  digitalWrite(SEG_A,seg[a] & 1<<7);
  digitalWrite(SEG_B,seg[a] & 1<<6);
  digitalWrite(SEG_C,seg[a] & 1<<5);
  digitalWrite(SEG_D,seg[a] & 1<<4);
  digitalWrite(SEG_E,seg[a] & 1<<3);
  digitalWrite(SEG_F,seg[a] & 1<<2);
  digitalWrite(SEG_G,seg[a] & 1<<1);
  digitalWrite(SEG_DP,seg[a] & 1<<0);
  } 
void setup() {
  pinMode(SEG_A,OUTPUT);
  pinMode(SEG_B,OUTPUT);
  pinMode(SEG_C,OUTPUT);
  pinMode(SEG_D,OUTPUT);
  pinMode(SEG_E,OUTPUT);
  pinMode(SEG_F,OUTPUT);
  pinMode(SEG_G,OUTPUT);
  pinMode(SEG_DP,OUTPUT);
  pinMode(Q1,OUTPUT);
  pinMode(Q2,OUTPUT);
  pinMode(Q3,OUTPUT);
  pinMode(Q4,OUTPUT);
}

void loop(){
 for (i=0; i<8; i++) {
      digitalWrite(Q1,HIGH);
      display7seg(i);
      delay(200);
      digitalWrite(Q1,LOW);
      digitalWrite(Q2,HIGH);
      display7seg(i);
      delay(200);
      digitalWrite(Q2,LOW);
      digitalWrite(Q3,HIGH);
      display7seg(i);
      delay(200);
      digitalWrite(Q3,LOW);
      digitalWrite(Q4,HIGH);
      display7seg(i);
      delay(200);
      digitalWrite(Q4,LOW);
  }
}
