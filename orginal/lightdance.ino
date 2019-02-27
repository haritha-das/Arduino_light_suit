
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
  void allon(){
  
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(7,1);
  digitalWrite(6,1);
  digitalWrite(5,1);
  digitalWrite(4,1);
  digitalWrite(3,1);
  digitalWrite(2,1);


  }
  void alloff(){
  
  digitalWrite(10,0);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(7,0);
  digitalWrite(6,0);
  digitalWrite(5,0);
  digitalWrite(4,0);
  digitalWrite(3,0);
  digitalWrite(2,0);
}
  void allrun()
  
  {
    
 int a[12]={5,6,7,8,9,10,11,12,13,14,15};
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
    digitalWrite(4,1);
    delay(100);
    digitalWrite(4,0);
    delay(100);
  }
}
void ha(){
  int ha=1;
  {
    digitalWrite(2,1);
    digitalWrite(3,1);
    delay(100);
    digitalWrite(2,0);
    digitalWrite(3,0);
    delay(100);   
  }
}

void la()
  {
  digitalWrite(2,1);
  delay(100);
  digitalWrite(2,0);
  delay(100);  
}
void ra()
{
  digitalWrite(3,1);
  delay(100);
    digitalWrite(3,0);
    delay(100);
}
void hi()
{
    digitalWrite(5,1);
      digitalWrite(6,1);
    delay(100);
      digitalWrite(5,0);
        digitalWrite(6,0);
      delay(100);  
}

void lh()
{
  digitalWrite(5,1);
  delay(100);
   digitalWrite(5,0);
   delay(100);
    
}
void rh()
{
    digitalWrite(6,1);
    delay(100);
      digitalWrite(6,0);
      delay(100);
}  
void ll()
{
    digitalWrite(7,1);
    delay(100);
      digitalWrite(7,0);
      delay(100);
}
void rl()
{
   digitalWrite(8,1);
   delay(100);
    digitalWrite(8,0);
    delay(100);
}

void bl()
{
  digitalWrite(7,1);
  digitalWrite(8,1);
  delay(100);
  digitalWrite(7,0);
  digitalWrite(8,0);
  delay(100);
}
void lf()
{
   digitalWrite(9,1);
   delay(100);
    digitalWrite(9,0);
    delay(100);
}
void rf()
{
   digitalWrite(10,1);
   delay(100);
    digitalWrite(10,0);
    delay(100);
}
void f()
{
  digitalWrite(9,1);
    digitalWrite(10,1);
    delay(100);
      digitalWrite(9,0);
        digitalWrite(10,0);
        delay(100);
  
}
void rlc()
{
   digitalWrite(3,1);
    digitalWrite(7,1);
   delay(100);
   digitalWrite(3,0);
    digitalWrite(7,0);
    delay(100);
}
void lrc()
{
   digitalWrite(2,1);
    digitalWrite(8,1);
    delay(100);
    digitalWrite(2,0);
    digitalWrite(8,0);
    delay(100);
}
    void cc()
    {
      digitalWrite(2,1);
      digitalWrite(3,1);
          digitalWrite(5,1);
              digitalWrite(6,1);
      delay(100);
     digitalWrite(2,0);
      digitalWrite(3,0);
          digitalWrite(5,0);
              digitalWrite(6,0);
      delay(100);
    }
    void hfc()
    {
      digitalWrite(2,1);
      digitalWrite(3,1);
          digitalWrite(9,1);
              digitalWrite(10,1);
              delay(100);
              digitalWrite(2,0);
      digitalWrite(3,0);
          digitalWrite(9,0);
              digitalWrite(6,0);
              delay(100);
    }
    void al()
    {
      digitalWrite(2,1);
      digitalWrite(5,1);
          digitalWrite(7,1);
              digitalWrite(9,1);
              delay(100);
              digitalWrite(2,0);
      digitalWrite(5,0);
          digitalWrite(7,0);
              digitalWrite(9,0);
              delay(100);
              
    }
    void ar()
    {
      digitalWrite(3,1);
      digitalWrite(6,1);
          digitalWrite(8,1);
              digitalWrite(10,1);
              delay(100);
              digitalWrite(3,0);
      digitalWrite(6,0);
          digitalWrite(8,0);
              digitalWrite(10,0);
              delay(100);
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
  
 
 
}
