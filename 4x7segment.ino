int a=1; 
int b=3; 
int c=7; 
int d=5; 
int e=4; 
int f=2; 
int g=8; 
int dp=6; 

int d1 = 10;
int d2 = 11;
int d3 = 12;
int d4 = 9;

void setup() {
    for(int i = 1; i <= 13; i++)
        pinMode(i, OUTPUT);
} 

void loop()
{
  // Display each digit with minimal delay for multiplexing
  clearDisplay();
  pickDigit(1);
  pickNumber(2);
  delay(1);

  clearDisplay();
  pickDigit(2);
  pickNumber(7);
  delay(1);

  clearDisplay();
  pickDigit(3);
  pickNumber(8);
  delay(1);

  clearDisplay();
  pickDigit(4);
  pickNumber(4);
  delay(1);
 // pickDigit(1); // Select digit position for thousands

}

void display1(void) 
{
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
} 
//display number 2
void display2(void) 
{
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(d,HIGH);
}
  
// display number 3
void display3(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(g,HIGH);
} 
// display number 4
void display4(void) 
{
    digitalWrite(f,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
} 
// display number 5
void display5(void)
{ 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
} 
// display number 6
void
  display6(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);  
} 
// display number 7
void display7(void)
{   
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
}
  
// display number 8
void display8(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
    digitalWrite(f,HIGH);
  
} 

// display number 9
void display9(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(f,HIGH);
}

void clearDisplay(void) 
{ 
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(g,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);  
    digitalWrite(e,LOW);  
    digitalWrite(f,LOW);  
} 

// display number 0
void display0(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);  
}


void pickDigit(int x) //changes digit
{
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
 
  switch(x)
  {
  case 1: 
    digitalWrite(d1, LOW); 
    break;
  case 2: 
    digitalWrite(d2, LOW); 
    break;
  case 3: 
    digitalWrite(d3, LOW);
    break;
    case 4: 
    digitalWrite(d4, LOW); 
    break;
  default: 
    break;
  }
}
 
void pickNumber(int x) //changes value of number
{
  switch(x)
  {
  default: 
    display0(); 
    break;
  case 1: 
    display1(); 
    break;
  case 2: 
    display2(); 
    break;
  case 3: 
    display3(); 
    break;
  case 4: 
    display4(); 
    break;
  case 5: 
    display5(); 
    break;
  case 6: 
    display6(); 
    break;
  case 7: 
    display7(); 
    break;
  case 8: 
    display8(); 
    break;
  case 9: 
    display9(); 
    break;
  }
}
 


