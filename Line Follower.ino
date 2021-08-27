#define m1 4 
#define m2 5
int b1=10,b2=11;
int l1=0,l2=0;

void setup()
{
pinMode(10,INPUT);
pinMode(11,INPUT);
pinMode(m1, OUTPUT);
pinMode(m2, OUTPUT);
Serial.begin(9600);


}

void loop(){
  l1=digitalRead(b1);
  l2=digitalRead(b2);
 // Move Forward
 if(l1==HIGH && l2==HIGH){
digitalWrite(m1, HIGH);
digitalWrite(m2, HIGH);
Serial.println("MOVING FORWARD");

delay(2000);
 }


// Turn right
if(l1==LOW && l2==HIGH){
digitalWrite(m1, LOW);
digitalWrite(m2, HIGH);
Serial.println("TURNING RIGHT");

delay(2000);
}
// turn left
if(l1==HIGH && l2==LOW){
digitalWrite(m1, HIGH);
digitalWrite(m2, LOW);
Serial.println("TURNING LEFT");

delay(2000);
}

//Stop
if(l1==LOW && l2==LOW){
digitalWrite(m1, LOW);
digitalWrite(m2, LOW);
Serial.println("STOPPED");

delay(2000);
}
}
