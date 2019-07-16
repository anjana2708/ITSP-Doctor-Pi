#include <Stepper.h>
#include <Servo.h>

Servo myservo;  // create servo object to control a servo


//defines pins numbers

const int stepPin = 5; 
const int dirPin = 2; 
const int enPin = 8;

int servo1Pin = 6;
int servo2Pin = 7;
Servo Servo1;
Servo Servo2;


int pos = 70;                                                    //Elbow servo

 
const int stepsPerRevolutionBase = 80;                           //Base Theta Oscillation
Stepper myStepperBase(stepsPerRevolutionBase, 14,15,16,17);       //Base Theta Oscillation


void setup() {

  // Sets the two pins as Outputs
  Serial.begin(9600);
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);


  myStepperBase.setSpeed(40);                                       //Base Theta
  myservo.attach(37);                                               //Elbow servo pin

    Servo1.attach(servo1Pin);
    Servo2.attach(servo2Pin); 

}

void loop() {


myStepperBase.step(-stepsPerRevolutionBase);
  delay(500);

///
//delay(5000);  
for( int x = 0; x < 120; x += 5){ 
   // Make servo go to 0 degrees 
   Servo1.write(x); 
   delay(200);
   }
//delay(5000);
//for( int x = 0; x < 180; x += 1){ 
//   // Make servo go to 0 degrees 
//   Servo2.write(x); 
//   delay(200);
//   }
Servo2.write(180);   
delay(5000);

  
  

  

//1+  
  for (pos = 80; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }

Servo1.write(150);
//1+  
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    }
delay(50); // One second delay
int x = 0;



//2+
for (pos = 90; pos <= 120; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  } 
Servo1.write(180);

//2+
digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    }
delay(50); // One second delay
x = 0;



for (pos = 120; pos <= 150; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  } 


//Servo1.write(180);

 


//3-  
  digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction

  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;


for (pos = 150; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  } 



Servo1.write(40);
Servo2.write(40);

//LEFT SIDE UPWARD MOTION COMPLETED
//NOW IT WILL RETURN DOWN FROM CENTRE

myStepperBase.step(stepsPerRevolutionBase);
  delay(500);



for (pos = 180; pos >= 150; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }




digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction

  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;
//3-

  //Servo2.write(90);

  
 for (pos = 150; pos >= 130; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }


  Servo2.write(100);

  
//4-
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction

  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;



  //Servo2.write(125);

//4-
 for (pos = 130; pos >= 110; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }
 Servo2.write(120); 
///
digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction

  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;


Servo2.write(135);  


for (pos = 110; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }

Servo2.write(150);

for (pos = 90; pos >= 70; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }
  Servo2.write(165);

digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction

  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;

Servo2.write(180);
delay(1000);

///HERE ON BEGINS THE RIGHT WARD PART AND RETURNS FROM CENTRE  

  myStepperBase.step(stepsPerRevolutionBase);
  delay(500);

Servo2.write(40);
Servo1.write(120);  

  

//1+  
  for (pos = 70; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }


//1+  
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    }
delay(50); // One second delay
x = 0;

//2+
for (pos = 90; pos <= 120; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  } 

Servo1.write(90);
Servo2.write(20);

//2+
digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    }
delay(50); // One second delay
x = 0;

for (pos = 120; pos <= 150; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  } 






//3-  
  digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction

  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;


for (pos = 150; pos <= 190; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  } 


Servo1.write(40);
Servo2.write(40);


//HERE ON RIGHT PART IS COMPLETED AND WILL RETURN DOWN FROM CENTRE
myStepperBase.step(-stepsPerRevolutionBase);
  delay(500);



for (pos = 180; pos >= 150; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }




digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction

  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;
//3-

  //Servo2.write(90);

  
 for (pos = 150; pos >= 130; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }


  //Servo2.write(120);

  
//4-
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction

  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;



  //Servo2.write(125);

//4-
 for (pos = 130; pos >= 110; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }
 Servo2.write(120); 
///
digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction

  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;


Servo2.write(135);  


for (pos = 110; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }


Servo2.write(150);

for (pos = 90; pos >= 70; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
  }
  Servo2.write(165);

digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction

  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(50);
    Serial.println("Step!!!"); 
    //delay(500); // One second delay
  }
delay(50); // One second delay
x = 0;

Servo2.write(180);

}
