Servo  myservoOne; // create servo object to control a  servo
//twelve servo objects can be  created on most boards
Servo myservoTwo;
Servo myservoThree;
Servo myservoFour;

int pos =  0; //variable to store the servo position

void setup(){
  myservoOne .attach(9); // attaches the servo on pin 9 to the ser object
  myservoTwo.attach(10);
  myservoThree.attach(11);
  myservoFour.attach(12);
}

void loop(){
  for(pos = 0; pos <=  180;  pos+=1){
    myservoOne.write(pos);
    myservoTwo.write(pos);
    myservoThree.write(pos);
    myservoFour.write(pos);
    delay(20);
  }
    for(pos = 180; pos >= 0;  pos-=1){
    myservoOne.write(pos);
    myservoTwo.write(pos);
    myservoThree.write(pos);
    myservoFour.write(pos);
    delay(20);
  }
}
