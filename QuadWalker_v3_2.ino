/* Urban Reininger's QuadBot walking test code v3
   This example has the robot move each foot/leg to a "forward" position before
   moving all of the legs to a backwards position at once.
*/ 

//Quad bot test 3.2
#include <Servo.h> 
 
Servo legFR;  // create servo object to control a servo  // a maximum of eight servo objects can be created 
Servo hipFR;
Servo legFL;
Servo hipFL;
//Servo myservo13;

Servo legBR;  
Servo hipBR;
Servo legBL;
Servo hipBL;

//int pos = 0;    // variable to store the servo position

void setup() {
    Serial.begin(9600);
    
  legBR.attach(11);  // Back Right leg
  hipBR.attach(12);  // Back Right hip
  hipBL.attach(10);  // Back Left hip
  legBL.attach(9);   // Back Left leg
  hipFL.attach(5);
  legFL.attach(4);
  hipFR.attach(3);
  legFR.attach(2);

// CENTERING ----   ---- 
//  hipFR.write(90);
//  legFR.write(90);
//  
//  hipFL.write(90);
//  legFL.write(90);
//
//  hipBR.write(90);
//  legBR.write(90);
//  dr
//  hipBL.write(90);
//  legBL.write(90);



  home();
  delay(2000);

} 
void loop() { 
    
walk2();

} 

  void walk2(){
  
  Serial.println("FrontLeft");
  legFL.write(120);
  delay(200);
  
  hipFL.write(70); //forward
  delay(200);
  
  legFL.write(155);
  delay(200);
  
  //Back Right
  Serial.println("BackRight");
  legBR.write(45);
  delay(200);
  
  hipBR.write(110);
  delay(200);
  legBR.write(25);
  delay(200);
  
  
  Serial.println("FrontRight");
  legFR.write(45);
  delay(200);
    
  hipFR.write(110); //forward
  delay(200);
  
  legFR.write(25);
  delay(200);
  
  
  //Back Left
  Serial.println("BackLeft");
  legBL.write(140);
  delay(200);
  
  hipBL.write(70);
  delay(200);
  legBL.write(160);
  delay(200);
  
  hipBL.write(110);  
  hipFR.write(70);
  hipBR.write(70);  
  hipFL.write(110); 
  
  delay(500);  
}

void walk1(){
  
  Serial.println("FrontLeft");
  legFL.write(90);
  delay(1000);
  
  hipFL.write(30);
  delay(1000);
  
  legFL.write(155);
  delay(1000);
  
  
  //Back Right
  Serial.println("BackRight");
  legBR.write(60);
  delay(1000);
  
  hipBR.write(135);
  delay(1000);
  legBR.write(25);
  delay(1000);
  
  hipBR.write(35);  
  hipFL.write(130);
  delay(500);  
}

void home(){   // v3
  
//  hipBR.writeMicroseconds(1500);
//  legBR.writeMicroseconds(1500);
  
  Serial.println("in home");
  
  hipFR.write(90);
  legFR.write(25);
  
  hipFL.write(90);
  legFL.write(160);

delay(1000);

  hipBR.write(90);
  legBR.write(15);
  
  hipBL.write(90);
  legBL.write(160);
delay (1000);
 Serial.println("leaving home");
}
