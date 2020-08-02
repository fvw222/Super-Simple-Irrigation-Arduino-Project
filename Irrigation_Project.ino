
/************************
Exercise the motor using
the L293D chip
************************/

#define ENABLE 5
#define ENABLE_b 10 
#define DIRA 3
#define DIRA_b 11
#define DIRB 4
#define DIRB_b 8

int i;
 
void setup() {
  //---set pin direction
  pinMode(ENABLE,OUTPUT);
  pinMode(ENABLE_b,OUTPUT);
  pinMode(DIRA,OUTPUT);
  pinMode(DIRA_b,OUTPUT);
  pinMode(DIRB,OUTPUT);
  pinMode(DIRB_b,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Motor 1");
  analogWrite(ENABLE,255); //enable on
  digitalWrite(DIRA,HIGH); //one way
  digitalWrite(DIRB,LOW);
  delay(300000);
  digitalWrite(ENABLE,LOW); //all done

  Serial.println("Motor 2");
  analogWrite(ENABLE_b,255); //enable on
  digitalWrite(DIRA_b,LOW); //one way
  digitalWrite(DIRB_b,HIGH);
  delay(300000);
  digitalWrite(ENABLE_b,LOW); //all done
  
  Serial.println("Done");
  delay(43200000);
}
   
