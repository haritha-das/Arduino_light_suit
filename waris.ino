
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

void h(){
  int h;
  h=1;
  {
    digitalWrite(4,1);
    delay(100);
  }
}
void ha(){
  int ha=1;
  {
    digitalWrite(2,1);
    digitalWrite(3,1);
    delay(100);   
  }
}

void la()
  {
  digitalWrite(2,1);
  delay(100);

}
void ra()
{
  digitalWrite(3,1);
  delay(100);
}

void hi()
{
    digitalWrite(5,1);
      digitalWrite(6,1);
    delay(100);

}

void lh()
{
  digitalWrite(5,1);
  delay(100);    
}
void rh()
{
    digitalWrite(6,1);
    delay(100);
}  
void ll()
{
    digitalWrite(7,1);
    delay(100);

}
void rl()
{
   digitalWrite(8,1);
   delay(100);
}

void bl()
{
  digitalWrite(7,1);
  digitalWrite(8,1);
  delay(100);
}
void lf()
{
   digitalWrite(9,1);
   delay(100);
}
void rf()
{
   digitalWrite(10,1);
   delay(100);
}
void f()
{
  digitalWrite(9,1);
    digitalWrite(10,1);
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
          digitalWrite(4,1);
    }
       
            
    void al()
    {
      digitalWrite(2,1);
      digitalWrite(5,1);
          digitalWrite(7,1);
              digitalWrite(9,1);
              delay(100);
              
    }
    void ar()
    {
      digitalWrite(3,1);
      digitalWrite(6,1);
          digitalWrite(8,1);
              digitalWrite(10,1);
              delay(100);

    }
    void w()
    {
      digitalWrite(9,1);
      digitalWrite(10,1);
      delay(500);
      digitalWrite(7,1);
      digitalWrite(8,1);
      delay(500);
      digitalWrite(5,1);
      digitalWrite(6,1);
      delay(500);
      digitalWrite(2,1);
      digitalWrite(3,1);
      delay(500);
      digitalWrite(4,1);
      delay(500);
    }
    
void up()
{
 digitalWrite(4,1);
 digitalWrite(2,1);
 digitalWrite(3,1);
 digitalWrite(5,1);
 digitalWrite(6,1); 
 delay(1000);
 
}
void rfl()
{
 digitalWrite(10,1);
 digitalWrite(8,1);
}
void lfl()
{
 digitalWrite(9,1);
 digitalWrite(7,1);
}
void dwn()
{
 digitalWrite(7,1);
 digitalWrite(8,1);
   digitalWrite(9,1);
 digitalWrite(10,1);
}
void lhh()
{
 digitalWrite(2,1);
 digitalWrite(5,1);
 delay(1000);
}
void rhh()
{
 digitalWrite(3,1);
 digitalWrite(6,1);
 delay(1000);
}
void rhhh()
{
 digitalWrite(3,1);
 digitalWrite(6,1);
  digitalWrite(8,1);
 digitalWrite(10,1);
}

void lhhh()
{
 digitalWrite(2,1);
 digitalWrite(5,1);
 digitalWrite(7,1);
 digitalWrite(9,0);
}

void bt(){
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(100);
  digitalWrite(8, HIGH);
   digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(100);
  digitalWrite(3, HIGH);
   digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
  }

void tb(){

  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
    digitalWrite(3, HIGH);
   digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(100);
   digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(100);
  digitalWrite(8, HIGH);
   digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(100);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
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

void loop() {
  
{allon();}
delay(1000);
{alloff();}
delay(5800);  
{w();}
delay(50);
{allon();}
delay(4000);

{alloff();}
delay(100);
{allon();}
delay(6000);

{alloff();}
delay(200);
{rfl();}
delay(800);//right foot & leg
{alloff();}
delay(50);
{lfl();} //left foot&leg
delay(1000);
{alloff();}
delay(50);
{rhhh();}
delay(1200);//right hip & hand
{alloff();}
delay(50);

{lhhh();}
delay(1400);//left hip & hand
{alloff();}
delay(50);

{h();}
delay(100);
{alloff();}
delay(50);

{bt();}
delay(800);
{alloff();} //blink
  delay(50);

  {allon();}
  {alloff();} //blink
  delay(100);

  {allon();}
  {alloff();} //blink
  delay(100);





{allon();}
delay(2000);
{alloff();}
delay(3000);
//{dwn();}
//delay(1000);
//{up();}
//delay(1000);

//{alloff();}
//delay(4500);

//{bt();}
//delay(1250);
//{alloff();}
//delay(50);
//{tb();}
//delay(1250);

{allon();}
delay(2000);
{alloff();}
delay(2500);

{allon();}
delay(4500);
{alloff();}
delay(3500);
{allon();}
delay(2000);
{alloff();}
delay(1500);
{dwn();}
delay(1000);
{alloff();}
delay(1600);
{up();}
delay(600);
{alloff();}
delay(5000);

//{bt();}
//{tb();}
digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(100);
  digitalWrite(8, HIGH);
   digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(100);
  digitalWrite(3, HIGH);
   digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);

  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
    digitalWrite(3, HIGH);
   digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(100);
   digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(100);
  digitalWrite(8, HIGH);
   digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(100);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(100);

{allon();} 
delay(2300);
{alloff();} 

delay(100);
{allon();} 
delay(3900); // new thing

{alloff();} 
delay(1000); // gun

{allon();} 
delay(300);
{alloff();} 
delay(100);

//{allon();} 
//delay(630);
//{alloff();} 
//delay(600);

{hfc();} 
delay(640); //slow mo

 {alloff();} 
  delay(2500);

  {allon();} 
  delay(500); // panic mode
  {alloff();} 
  delay(500);
  {allon();} 
  delay(400);
  {alloff();} 
  delay(400);
  {allon();} 
  delay(300);
  {alloff();} 
  delay(300);
  {allon();} 
  delay(200);
  {alloff();} 
  delay(200);
  {allon();} 
  delay(100);
  {alloff();} 
  delay(100);
  {allon();} 
  delay(50);
  
  {alloff();} 
  delay(5500);

  {allon();} 
  delay(10000);
}
