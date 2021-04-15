// ------------
// Photo Transistor - Webhooks
// ------------


int led1 = A5; 
int led2 = D7; 

int phototransistor = A0;
String analogValue;

void setup() {
    
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(phototransistor, INPUT);
    
}

void loop() {
    analogValue = analogRead(phototransistor);
    Particle.publish("light", analogValue, PRIVATE);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(1000);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(29000);
}