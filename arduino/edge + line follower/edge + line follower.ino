int mot1=9;
int mot2=6;
int mot3=5;
int mot4=3;

int left=13;
int right=12;

int eleft=2;// edge
int eright=4;// edge
int switch1=7;// edge detector
int switch2=8;// vacuum cleaner



int Left=1;//Left=0;
int Right=1;//Right=0;

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
  pinMode(eleft,INPUT);//edge
  pinMode(eright,INPUT);//edge
  pinMode(switch1,INPUT);// edge detector
  pinMode(switch2,INPUT);// vacuum cleaner


  digitalWrite(left,LOW);
  digitalWrite(right,LOW);
  digitalWrite(eleft,LOW);//edge
  digitalWrite(eright,LOW);//edge
  
  
}

void loop() 
{
 
analogWrite(mot1,100);
analogWrite(mot2,0);
analogWrite(mot3,100);
analogWrite(mot4,0);

//***********************line follower****************************//

if((switch1==0 && switch2==0)==1)
{
while(1)
{
  Left=digitalRead(left);
  Right=digitalRead(right);
  
  if((Left==1 && Right==0)==1)//if((Left==0 && Right==1)==1)
  LEFT();
  else if((Right==1 && Left==0)==1)// else if((Right==0 && Left==1)==1)
  RIGHT();
}
}
//***********************edge detector****************************//
else if((switch1==1 && switch2==0)==1)
{
while(1)
{
  Left=digitalRead(eleft);
  Right=digitalRead(eright);
  
  if((Left==1 && Right==0)==1)//if((Left==0 && Right==1)==1)
  ELEFT();
  else if((Right==1 && Left==0)==1)// else if((Right==0 && Left==1)==1)
  ERIGHT();
}
}
}
//og function
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
void STOP (void)
{
analogWrite(mot1,0);
analogWrite(mot2,0);
analogWrite(mot3,0);
analogWrite(mot4,0);
}
//edge detector
void ELEFT (void)
{
   analogWrite(mot3,0);
   analogWrite(mot4,100);
   
   
   while(Left==1)
   {
    Left=digitalRead(eleft);
    Right=digitalRead(eright);
    if(Right==1)
    {
      int lprev=Left;
      int rprev=Right;
      STOP();
      while(((lprev==Left)&&(rprev==Right))==1)
      {
         Left=digitalRead(eleft);
         Right=digitalRead(eright);
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

   while(Right==1)
   {
    Left=digitalRead(eleft);
    Right=digitalRead(eright);
    if(Left==1)
    {
      int lprev=Left;
      int rprev=Right;
     STOP();
      while(((lprev==Left)&&(rprev==Right))==1)
      {
         Left=digitalRead(eleft);
         Right=digitalRead(eright);
      }
    }
    analogWrite(mot3,100);
    analogWrite(mot4,0);
    }
   analogWrite(mot1,100);
   analogWrite(mot2,0);
}