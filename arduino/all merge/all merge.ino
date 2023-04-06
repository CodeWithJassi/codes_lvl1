int mot1=9;
int mot2=6;
int mot3=5;
int mot4=3;

int left=13;
int right=12;
int eleft=2;//
int eright=4;//
int obd=10;//


int Left=1;
int Right=1;
int Eleft=1;//
int Eright=1;//
int Obd=1;//

void LEFT (void);
void RIGHT (void);
void STOP (void);

void setup()
{
  pinMode(mot1,OUTPUT);
  pinMode(mot2,OUTPUT);
  pinMode(mot3,OUTPUT);
  pinMode(mot4,OUTPUT);  

  pinMode(left,INPUT);
  pinMode(right,INPUT);
  pinMode(eleft,INPUT);
  pinMode(eright,INPUT);
  pinMode(obd,INPUT);//

  digitalWrite(left,HIGH);
  digitalWrite(right,HIGH);
  digitalWrite(eleft,HIGH);
  digitalWrite(eright,HIGH);
  digitalWrite(obd,HIGH);//
  

  
}

void loop()  {
analogWrite(mot1,0);//
analogWrite(mot2,0);
analogWrite(mot3,0);//
analogWrite(mot4,0);

while(1)
{
  Left=digitalRead(left);
  Right=digitalRead(right);
  Eleft=digitalRead(eleft);
  Eright=digitalRead(eright);
  Obd=digitalRead(obd);
  
  if((Left==1 && Right==0 && Eleft==0 && Eright==0 && Obd==1)==1)//
  LEFT();
  else if((Right==1 && Left==0 && Eleft==0 && Eright==0 && Obd==1)==1)//
  RIGHT();
  else if((Eleft==1 && Eright==0 && Obd==1)==1)//
  ELEFT();//
  else if((Eleft==0 && Eright==1 && Obd==1)==1)//
  ERIGHT();//
  else if((Eleft==1 && Eright==1 && Obd==1)==1){// testing code may not work!! if ditch ahead then turn back + right and try to movealong edge then edge constraints start
  analogWrite(mot1,0);//#
  analogWrite(mot2,0);//#
  analogWrite(mot3,0);//#
  analogWrite(mot4,100);//#
  }
  else if((Eleft==0 && Eright==0 && Obd==0)==1){
  analogWrite(mot1,0);//@
  analogWrite(mot2,0);//@
  analogWrite(mot3,0);//@
  analogWrite(mot4,100);//@
  }

}
}

void LEFT (void)
{
   analogWrite(mot3,0);
   analogWrite(mot4,100);
   
   
   while(Left==1)
   {
    Left=digitalRead(left);
    Right=digitalRead(right);
    if(Right==1)
    {
      int lprev=Left;
      int rprev=Right;
      STOP();
      while(((lprev==Left)&&(rprev==Right))==1)
      {
         Left=digitalRead(left);
         Right=digitalRead(right);
      }
    }
    analogWrite(mot1,100);
    analogWrite(mot2,0); 
   }
   analogWrite(mot3,100);
   analogWrite(mot4,0);
}

void RIGHT (void)
{
   analogWrite(mot1,0);
   analogWrite(mot2,100);

   while(Right==1)
 
  {
    Left=digitalRead(left);
    Right=digitalRead(right);
    if(Left==1)
    {
      int lprev=Left;
      int rprev=Right;
     STOP();
      while(((lprev==Left)&&(rprev==Right))==1)
      {
         Left=digitalRead(left);
         Right=digitalRead(right);
      }
    }
    analogWrite(mot3,100);
    analogWrite(mot4,0);
    }
   analogWrite(mot1,100);
   analogWrite(mot2,0);
}


//******************************edge detector
void ELEFT (void)
{
   analogWrite(mot3,0);
   analogWrite(mot4,100);
   
   
   while(Eleft==1)
   {
    Eleft=digitalRead(eleft);
    Eright=digitalRead(eright);
    if(Eright==1)
    {
      int lprev=Eleft;
      int rprev=Eright;
      STOP();
      while(((lprev==Eleft)&&(rprev==Eright))==1)
      {
         Eleft=digitalRead(eleft);
         Eright=digitalRead(eright);
      }
    }
    analogWrite(mot1,100);
    analogWrite(mot2,0); 
   }
   analogWrite(mot3,100);
   analogWrite(mot4,0);
}

void ERIGHT (void)
{
   analogWrite(mot1,0);
   analogWrite(mot2,100);

   while(Eright==1)
 
  {
    Eleft=digitalRead(eleft);
    Eright=digitalRead(eright);
    if(Eleft==1)
    {
      int lprev=Eleft;
      int rprev=Eright;
     STOP();
      while(((lprev==Eleft)&&(rprev==Eright))==1)
      {
         Eleft=digitalRead(eleft);
         Eright=digitalRead(eright);
      }
    }
    analogWrite(mot3,100);
    analogWrite(mot4,0);
    }
   analogWrite(mot1,100);
   analogWrite(mot2,0);
}



//*******************************edge detector
void STOP (void)
{
analogWrite(mot1,0);
analogWrite(mot2,0);
analogWrite(mot3,0);
analogWrite(mot4,0);
  
}
