#include "globals.h"
#include "canHelper.h"

unsigned long btn01DebounceTime = 0; // the last time the output pin was toggled
unsigned long btn02DebounceTime = 0; // the last time the output pin was toggled
unsigned long btn03DebounceTime = 0; // the last time the output pin was toggled
unsigned long btn04DebounceTime = 0; // the last time the output pin was toggled
unsigned long btn05DebounceTime = 0; // the last time the output pin was toggled
unsigned long btn06DebounceTime = 0; // the last time the output pin was toggled
unsigned long btn07DebounceTime = 0; // the last time the output pin was toggled
unsigned long btn08DebounceTime = 0; // the last time the output pin was toggled
unsigned long debounceDelay = 200;   // the debounce time; increase if the output

#define BTN1_PIN 34
#define BTN2_PIN 25
#define BTN3_PIN 27
#define BTN4_PIN 12
#define BTN6_PIN 22
#define BTN7_PIN 21
#define BTN8_PIN 18
#define BTN5_PIN 16

void setup()
{
  Serial.begin(115200);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
  pinMode(LED4_PIN, OUTPUT);
  pinMode(LED5_PIN, OUTPUT);
  pinMode(LED6_PIN, OUTPUT);
  pinMode(LED7_PIN, OUTPUT);
  pinMode(LED8_PIN, OUTPUT);
  digitalWrite(LED1_PIN,LOW);
  digitalWrite(LED2_PIN,LOW);
  digitalWrite(LED3_PIN,LOW);
  digitalWrite(LED4_PIN,LOW);
  digitalWrite(LED5_PIN,LOW);
  digitalWrite(LED6_PIN,LOW);
  digitalWrite(LED7_PIN,LOW);
  digitalWrite(LED8_PIN,LOW);

  pinMode(BTN1_PIN, INPUT);
  pinMode(BTN2_PIN, INPUT_PULLUP);
  pinMode(BTN3_PIN, INPUT_PULLUP);
  pinMode(BTN4_PIN, INPUT_PULLUP);
  pinMode(BTN5_PIN, INPUT_PULLUP);
  pinMode(BTN6_PIN, INPUT_PULLUP);
  pinMode(BTN7_PIN, INPUT_PULLUP);
  pinMode(BTN8_PIN, INPUT_PULLUP);
  canHelper::canSetup();
}

void loop()
{
  /* HANDLE BTN01 */
  if (digitalRead(BTN1_PIN) == LOW)
  {

    if ((millis() - btn01DebounceTime) > debounceDelay)
    {
      btn01DebounceTime = millis();
      // Send message
      canHelper::send_message(1);
    }
  }
  /* HANDLE BTN02 */
  if (digitalRead(BTN2_PIN) == LOW)
  {
    if ((millis() - btn02DebounceTime) > debounceDelay)
    {
      btn02DebounceTime = millis();
      // Send message
      canHelper::send_message(2);
    }
  }

  /* HANDLE BTN03 */
  if (digitalRead(BTN3_PIN) == LOW)
  {
    if ((millis() - btn03DebounceTime) > debounceDelay)
    {
      btn03DebounceTime = millis();
      // Send message
      canHelper::send_message(3);
    }
  }

  /* HANDLE BTN04 */
  if (digitalRead(BTN4_PIN) == LOW)
  {
    if ((millis() - btn04DebounceTime) > debounceDelay)
    {
      btn04DebounceTime = millis();
      // Send message
      canHelper::send_message(4);
    }
  }

  /* HANDLE BTN05 */
  if (digitalRead(BTN5_PIN) == LOW)
  {
    if ((millis() - btn05DebounceTime) > debounceDelay)
    {
      btn05DebounceTime = millis();
      // Send message
      canHelper::send_message(5);
    }
  }

  /* HANDLE BTN06 */
  if (digitalRead(BTN6_PIN) == LOW)
  {
    if ((millis() - btn06DebounceTime) > debounceDelay)
    {
      btn06DebounceTime = millis();
      // Send message
      canHelper::send_message(6);
    }
  }

  /* HANDLE BTN07 */
  if (digitalRead(BTN7_PIN) == LOW)
  {
    if ((millis() - btn07DebounceTime) > debounceDelay)
    {
      btn07DebounceTime = millis();
      // Send message
      canHelper::send_message(7);
    }
  }

  /* HANDLE BTN08 */
  if (digitalRead(BTN8_PIN) == LOW)
  {
    if ((millis() - btn08DebounceTime) > debounceDelay)
    {
      btn08DebounceTime = millis();
      // Send message
      canHelper::send_message(8);
    }
  }
  canHelper::canLoop();
}