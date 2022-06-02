#define trigPin 2
#define echoPin 3
#define LED1 9
#define LED2 8

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
  
    digitalWrite(trigPin, LOW);
    digitalWrite(LED1,    LOW);
    digitalWrite(LED1,    LOW);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.0343/2;
  delay(50);
    

    if (distance > 15) {
      digitalWrite(LED1, HIGH);
        digitalWrite(LED2, LOW);
    } else {
      digitalWrite(LED1, LOW);
        digitalWrite(LED2, HIGH);
    }

  
  
  
   Serial.println(distance);
}
