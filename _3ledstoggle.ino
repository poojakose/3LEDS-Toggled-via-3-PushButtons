
int r_LED = 9;
int y_LED = 10;
int b_LED = 13;
int r0_LED = 3;
int b0_LED = 4;
int y0_LED = 5;

int state = LOW;       
int previous = LOW;   
int state1 = LOW;       
int previous1 = LOW; 
int state2 = LOW;       
int previous2 = LOW; 

long time = 0;         
long debounce = 200;  

void setup()
{  pinMode(r_LED,OUTPUT);
    pinMode(r0_LED, INPUT);
    pinMode(y_LED,OUTPUT);
    pinMode(y0_LED, INPUT);
     pinMode(b_LED,OUTPUT);
    pinMode(b0_LED, INPUT);


}

void loop()
{
 int buttonState = digitalRead(r0_LED);
    int buttonState1 = digitalRead(y0_LED);
      int buttonState2 = digitalRead(b0_LED);

//red led
  if (buttonState == 1 && previous == 0 && millis() - time > debounce) {
  if (state == 0)
      state = 0;
    else
      state = 1;

    time = millis();    
  } 
  digitalWrite(r_LED, state);
  previous = buttonState;

//yellow led
  if (buttonState1 == 1 && previous1 == 0 && millis() - time > debounce) {
    if (state1 == 1)
      state1 = 0;
    else
      state1 = 1;

  time = millis();    
  }
  digitalWrite(y_LED, state1);
  previous1 = buttonState1;
   
   //blue led
   if (buttonState2 == 1 && previous2 == 0 && millis() - time > debounce) {
    if (state2 == 1)
      state2 = 0;
    else
      state2 = 1;

  time = millis();    
  }
  digitalWrite(b_LED, state2);
  previous2 = buttonState2;
  
}

