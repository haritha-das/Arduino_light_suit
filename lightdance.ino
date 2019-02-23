/*allon - full light
  alloff -full off
  h-head
  la-left arm
  ra -right arm
  lh- lefthip
  ra-right arm
  lh - left hip
  rh - right hip
  ha- both hand
  ll - left leg
  rl - right leg
  lf - left foot
  rf - right foot
  hi - both hip
  f - both foot
  rlc - right hand&left leg
  lrc - left hand & right leg
  cc - both leg and hand
  hfc - head & hand
  al - all left
  ar - all right
  bl - both leg
*/
 int a[12]={5,6,7,8,9,10,11,12,13,14,15};

  void allon(){
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);


  }
  void alloff(){
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

  void allrun(){
  for (int i=0; i < sizeof(a)/sizeof(a[0]);i++)
 {
  digitalWrite(a[i],1);
  delay(100);
  digitalWrite(a[i],0);
}
}

void h(){
  int h;
  h=1;
  {
    digitalWrite(7,1);
    delay(100);
    digitalWrite(7,0);
    delay(100);
  }
}
void ha(){
  int ha=1;
  {
    digitalWrite(5,1);
    digitalWrite(6,1);
    delay(1000);
    digitalWrite(5,0);
    digitalWrite(6,0);
    delay(1000);   
  }
}

void la()
  {
  digitalWrite(5,1);
  delay(1000);
  digitalWrite(5,0);
  delay(1000);  
}
void ra()
{
  digitalWrite(6,1);
  delay(1000);
    digitalWrite(6,0);
    delay(1000);
}
void hi()
{
    digitalWrite(8,1);
      digitalWrite(9,1);
    delay(1000);
      digitalWrite(8,0);
        digitalWrite(9,0);
      delay(1000);  
}

void lh()
{
  digitalWrite(8,1);
  delay(1000);
   digitalWrite(8,0);
   delay(1000);
    
}
void rh()
{
    digitalWrite(9,1);
    delay(1000);
      digitalWrite(9,0);
      delay(1000);
}  
void ll()
{
    digitalWrite(10,1);
    delay(1000);
      digitalWrite(10,0);
      delay(1000);
}
void rl()
{
   digitalWrite(11,1);
   delay(1000);
    digitalWrite(11,0);
    delay(1000);
}
void lf()
{
   digitalWrite(12,1);
   delay(1000);
    digitalWrite(12,0);
    delay(1000);
}
void rf()
{
   digitalWrite(13,1);
   delay(1000);
    digitalWrite(13,0);
    delay(1000);
}
void setup()
{
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13,OUTPUT);
pinMode(14,OUTPUT);
pinMode(15,OUTPUT);


}
void loop()
{
  {alloff();}
  delay(1500);
  {allon();}
  delay(1000);
  {alloff();}
  delay(1000);
  {allrun();}
  delay(1000);
  {h();}
  delay(1000);
  {ra();}
  {la();}
  delay(1000);
  {lh();}
  {rh();}
  delay(1000);
  {rl();}
  {ll();}
  delay(1000);
  {rf();}
  {lf();}
  delay(1000); 
}

