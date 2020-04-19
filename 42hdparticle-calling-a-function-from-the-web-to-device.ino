int ledRed = D6;
int ledGreen = D4;
int ledYellow = D5;

void setup() {
    
    Serial.begin(9600);
    
    pinMode(ledRed, OUTPUT);
    pinMode(ledGreen, OUTPUT);
    pinMode(ledYellow, OUTPUT);

    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, LOW);
    
    Particle.function("toggleLights", toggleLights);
    
}

int toggleLights(String value){
    
    if( value == "red" || value == "Red" || value == "RED"){
        
        digitalWrite(ledRed, HIGH);
        delay(1000);
        digitalWrite(ledRed, LOW);
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledYellow, LOW);
        return 1;
        
    }
    else if(value == "yellow" || value == "Yellow" || value == "YELLOW"){
        
        digitalWrite(ledYellow, HIGH);
        delay(1000);
        digitalWrite(ledYellow, LOW);
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledRed, LOW);
        return 2;
        
    }
    else if(value == "green" || value == "Green" || value == "GREEN"){
        
        digitalWrite(ledGreen, HIGH);
        delay(1000);
        digitalWrite(ledGreen, LOW);
        digitalWrite(ledYellow, LOW);
        digitalWrite(ledRed, LOW);
        return 3;
        
    }
}

void loop() {

}