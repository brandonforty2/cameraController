char data;

const int camera = 8;   //Pin that the relay is connected to

void setup() {
  pinMode(camera, OUTPUT);
  Serial.begin(9600);
}

//Checks if a '1' is sent to the arduino over a serial connection
//If so, trigger the camera
void loop() {
  if (Serial.available() > 0){
    data = Serial.read();
    if (data == '1'){
      digitalWrite(camera, HIGH);
      delay(250);
      digitalWrite(camera, LOW);
    }
  }
}
