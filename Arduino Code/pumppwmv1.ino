
const int ledPin = 9;  //pin 9 has PWM funtion
const int potPin = A0; //pin A0 to read analog input

//Variables:
int value = 0; //save analog value

void setup(){
  //Input or output?
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); 
  pinMode(potPin, INPUT); //Optional 
  }

void loop(){
  value = analogRead(potPin);          //Read and save analog value from potentiometer
  value = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  analogWrite(ledPin, value);          //Send PWM value to led
  Serial.println(value);
 }
 