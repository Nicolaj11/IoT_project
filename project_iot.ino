// Define connection pins:
#define pirPin 2
#define ledPin 3
#define motor 4
#define thermistor 0

void setup() {
  // Configure the pins as input or output:
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  pinMode(motor, OUTPUT);

  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
