
#include <BleKeyboard.h> // https://github.com/T-vK/ESP32-BLE-Keyboard
#include <ezButton.h> // https://arduinogetstarted.com/tutorials/arduino-button-library

#define ButtonOneText "prawnzGG "
#define ButtonTwoText "prawnzGL "
#define ButtonThreeText "prawnzLUL "
#define ButtonFourText "hatchlAB "
#define ButtonFiveText "PrawnzoPls "
#define ButtonSixText "JodiesSmile "
#define ButtonSevenText "catJAM "

//Set the name of the bluetooth keyboard
BleKeyboard bleKeyboard("The Emoterator");

ezButton button1(13);
ezButton button2(14);
ezButton button3(27);
ezButton button4(26);
ezButton button5(33);
ezButton button6(32);
ezButton button7(23);
ezButton EnterButton(12);

void setup() {
  Serial.begin(115200);
  //  Serial.println("Starting BLE work!");
  button1.setDebounceTime(50);
  button2.setDebounceTime(50);
  button3.setDebounceTime(50);
  button4.setDebounceTime(50);
  button5.setDebounceTime(50);
  button6.setDebounceTime(50);
  button7.setDebounceTime(50);
  EnterButton.setDebounceTime(50);

  bleKeyboard.begin();
  bleKeyboard.setBatteryLevel(69);
}

void loop() {
  button1.loop();
  button2.loop();
  button3.loop();
  button4.loop();
  button5.loop();
  button6.loop();
  button7.loop();
  EnterButton.loop();
  if (bleKeyboard.isConnected()) {
    if (button1.isPressed())
      bleKeyboard.print(ButtonOneText);
    if (button2.isPressed())
      bleKeyboard.print(ButtonTwoText);
    if (button3.isPressed())
      bleKeyboard.print(ButtonThreeText);
    if (button4.isPressed())
      bleKeyboard.print(ButtonFourText);
    if (button5.isPressed())
      bleKeyboard.print(ButtonFiveText);
    if (button6.isPressed())
      bleKeyboard.print(ButtonSixText);
    if (button7.isPressed())
      bleKeyboard.print(ButtonSevenText);
    if (EnterButton.isPressed())
      bleKeyboard.write(KEY_RETURN);
  }
}
