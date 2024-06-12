#define Sensor A0
#define Relay 3
float sensorValue;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(Sensor, INPUT);
  pinMode(Relay, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(Sensor);
  Serial.println(sensorValue);
  if((sensorValue &gt; 600) &amp;&amp; (sensorValue &lt; 1024)){
    digitalWrite(Relay,LOW);
    Serial.println(&quot;Pump ON!&quot;);
  }
  else{
    digitalWrite(Relay,HIGH);
    Serial.println(&quot;Pump OFF!&quot;);
  }
  delay(500);
}