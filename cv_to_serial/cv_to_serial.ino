#define TRIGGER_1_PIN 2
#define TRIGGER_2_PIN 3
#define TRIGGER_3_PIN 4

int val1;
int val2;
int val3;
bool trigger1 = false;
bool trigger2 = false;
bool trigger3 = false;

void setup() {
  pinMode(TRIGGER_1_PIN, INPUT);
  pinMode(TRIGGER_2_PIN, INPUT);
  pinMode(TRIGGER_3_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  val1 = digitalRead(TRIGGER_1_PIN);
  val2 = digitalRead(TRIGGER_2_PIN);
  val3 = digitalRead(TRIGGER_3_PIN);

  if (val1 == HIGH) {
    if (trigger1 == false) {
      trigger1 = true;
      Serial.write("trigger_1\n");
    }
  } else {
    trigger1 = false;
  }

  if (val2 == HIGH) {
    if (trigger2 == false) {
      trigger2 = true;
      Serial.write("trigger_2\n");
    }
  } else {
    trigger2 = false;
  }

  if (val3 == HIGH) {
    if (trigger3 == false) {
      trigger3 = true;
      Serial.write("trigger_3\n");
    }
  } else {
    trigger3 = false;
  }
}
