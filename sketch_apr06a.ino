#define LedPin_Blue   6
#define LedPin_Green  9
#define LedPin_Yellow 10
#define LedPin_Red    11

#define BtnPin_Red    6
#define BtnPin_Green  10
#define BtnPin_Blue   9
#define BtnPin_Yellow 11
#define urx A1
#define +5v vcc


#define potzPin A0
{
  pinMode(LedPin_Green, OUTPUT);
  pinMode(LedPin_Blue, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  int rotation = analogRead(potzPin);
  int LedVal = map(rotation, 0, 1023, 0, 255);
  prd = map(rotation, 0, 1023, 600, 200);
  //Serial.println(rotation);
  analogWrite(LedPin_Blue, LedVal);

  digitalWrite(LedPin_Green, HIGH);
  delay(prd);
  digitalWrite(LedPin_Green, LOW);
  delay(prd);
}
