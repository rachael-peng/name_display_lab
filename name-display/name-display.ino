// Author: 			Rachael Peng
// Date: 			  November 22, 2021
// Purpose: 		Display the letters of my first and last name 
//					    on the 7-segment display. Turn the display off if the
//					    the switch is pushed to the left position at any time.

//positions of the switch

#define LEFT LOW
#define RIGHT HIGH
#define ON HIGH
#define OFF LOW

//symbolic constants for INPUT/OUTPUT pins
int const A = 11;
int const B = 10;
int const C = 7;
int const D = 8;
int const E = 9;
int const F = 12;
int const G = 13;
int const H = 6;
int const SWITCH = 5;


// My Functions
// define any function(s) required to implement your program

	// function to turn off display for half a second

void turnOff(void) {
  digitalWrite(A, OFF);
  digitalWrite(B, OFF);
  digitalWrite(C, OFF);
  digitalWrite(D, OFF);
  digitalWrite(E, OFF);
  digitalWrite(F, OFF);
  digitalWrite(G, OFF);
  digitalWrite(H, OFF);
  
  delay(500);
  
}

	// function to write the letter R on the display

void letterR(void) {
  digitalWrite(A, ON);
  digitalWrite(B, ON);
  digitalWrite(C, OFF);
  digitalWrite(D, OFF);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, OFF);
  digitalWrite(H, OFF);
}

	// function to write the letter A on the display

void letterA(void) {
  digitalWrite(A, ON);
  digitalWrite(B, ON);
  digitalWrite(C, ON);
  digitalWrite(D, OFF);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, ON);
  digitalWrite(H, OFF);
}

	// function to write the letter C on the display
             
void letterC(void) {
  digitalWrite(A, ON);
  digitalWrite(B, OFF);
  digitalWrite(C, OFF);
  digitalWrite(D, ON);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, OFF);
  digitalWrite(H, OFF);
}
             
	// function to write the letter H on the display
             
void letterH(void) {
  digitalWrite(A, OFF);
  digitalWrite(B, ON);
  digitalWrite(C, ON);
  digitalWrite(D, OFF);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, ON);
  digitalWrite(H, OFF);
}
             
	// function to write the letter E on the display

void letterE(void) {
  digitalWrite(A, ON);
  digitalWrite(B, OFF);
  digitalWrite(C, OFF);
  digitalWrite(D, ON);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, ON);
  digitalWrite(H, OFF);
}             
             
	// function to write the letter L on the display

void letterL(void) {
  digitalWrite(A, OFF);
  digitalWrite(B, OFF);
  digitalWrite(C, OFF);
  digitalWrite(D, ON);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, OFF);
  digitalWrite(H, OFF);
}
  
	// function to write the letter P on the display
             
void letterP(void) {
  digitalWrite(A, ON);
  digitalWrite(B, ON);
  digitalWrite(C, OFF);
  digitalWrite(D, OFF);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, ON);
  digitalWrite(H, OFF);
}
	// function to write the letter N on the display
             
void letterN(void) {
  digitalWrite(A, ON);
  digitalWrite(B, ON);
  digitalWrite(C, ON);
  digitalWrite(D, OFF);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, OFF);
  digitalWrite(H, OFF);
}
	// function to write the letter G on the display
             
void letterG(void) {
  digitalWrite(A, ON);
  digitalWrite(B, OFF);
  digitalWrite(C, ON);
  digitalWrite(D, ON);
  digitalWrite(E, ON);
  digitalWrite(F, ON);
  digitalWrite(G, OFF);
  digitalWrite(H, OFF);
}
                       
             
//initialization

void setup(void)
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(SWITCH, INPUT);
    
}


// Start 

void loop(void) 
{
  int trackswitch = 0;
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch == 0) {
  	letterR();
  	delay(1000);
  	turnOff();
    trackswitch++;
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterA();
  	delay(1000);
  	turnOff();
  }
  else {
    trackswitch = 0;
  }
    
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterC();
  	delay(1000);
  	turnOff();
  }
  else {
    trackswitch = 0;
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterH();
  	delay(1000);
  	turnOff();
  }
  else {
    trackswitch = 0;
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterA();
  	delay(1000);
  	turnOff();
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterE();
  	delay(1000);
  	turnOff();
  }
  else {
    trackswitch = 0;
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterL();
  	delay(1000);
  	turnOff();
  }
  else {
    trackswitch = 0;
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterP();
  	delay(1000);
  	turnOff();
  }
  else {
    trackswitch = 0;
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterE();
  	delay(1000);
  	turnOff();
  }
  else {
    trackswitch = 0;
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterN();
  	delay(1000);
  	turnOff();
  }
  else {
    trackswitch = 0;
  }
  
  if (digitalRead(SWITCH) == RIGHT && trackswitch > 0) {
  	letterG();
  	delay(1000);
  	turnOff();
  } 
  else {
    trackswitch = 0;
  }

}



















