
#include <BleKeyboard.h> // https://github.com/T-vK/ESP32-BLE-Keyboard
#include <ezButton.h>    // https://arduinogetstarted.com/tutorials/arduino-button-library

#define ButtonOneText "prawnzGG "
#define ButtonTwoText "prawnzGL "
#define ButtonThreeText "prawnzLUL "
#define ButtonFourText "hatchlAB "
#define ButtonFiveText "PrawnzoPls "
#define ButtonSixText "JodiesSmile "
#define ButtonSevenText "catJAM "
#define ButtonEightText "JojoPls "
#define ButtonNineText "prawnzChefsKiss "
#define ButtonTenText "theche31DerpyBarba "
#define ButtonElevenText "prawnzGasm "
#define ButtonTwelveText "prawnzAYAYAShake "
#define ButtonThirteenText "ConcernFroge "
#define ButtonFourteenText "hatchlRocky "

//Set the name of the bluetooth keyboard
BleKeyboard bleKeyboard("The Emoterator");

ezButton button1(13);
ezButton button2(14);
ezButton button3(27);
ezButton button4(26);
ezButton button5(33);
ezButton button6(32);
ezButton button7(23);
ezButton button8(22);
ezButton button9(25);
ezButton button10(21);
ezButton button11(18);
ezButton button12(5);
ezButton button13(17);
ezButton button14(16);
ezButton EnterButton(12);
ezButton BackspaceButton(19);

void setup()
{
  Serial.begin(115200);
  //  Serial.println("Starting BLE work!");
  button1.setDebounceTime(50);
  button2.setDebounceTime(50);
  button3.setDebounceTime(50);
  button4.setDebounceTime(50);
  button5.setDebounceTime(50);
  button6.setDebounceTime(50);
  button7.setDebounceTime(50);
  button8.setDebounceTime(50);
  button9.setDebounceTime(50);
  button10.setDebounceTime(50);
  button11.setDebounceTime(50);
  button12.setDebounceTime(50);
  button13.setDebounceTime(50);
  button14.setDebounceTime(50);
  EnterButton.setDebounceTime(50);
  BackspaceButton.setDebounceTime(50);

  bleKeyboard.begin();
  bleKeyboard.setBatteryLevel(69); // nice
}

void loop()
{
  button1.loop();
  button2.loop();
  button3.loop();
  button4.loop();
  button5.loop();
  button6.loop();
  button7.loop();
  button8.loop();
  button9.loop();
  button10.loop();
  button11.loop();
  button12.loop();
  button13.loop();
  button14.loop();
  EnterButton.loop();
  BackspaceButton.loop();

  if (bleKeyboard.isConnected())
  {
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

    if (button8.isPressed())
      bleKeyboard.print(ButtonEightText);

    if (button9.isPressed())
      bleKeyboard.print(ButtonNineText);

    if (button10.isPressed())
      bleKeyboard.print(ButtonTenText);

    if (button11.isPressed())
      bleKeyboard.print(ButtonElevenText);

    if (button12.isPressed())
      bleKeyboard.print(ButtonTwelveText);

    if (button13.isPressed())
      bleKeyboard.print(ButtonThirteenText);

    if (button14.isPressed())
      bleKeyboard.print(ButtonFourteenText);

    if (EnterButton.isPressed())
      bleKeyboard.write(KEY_RETURN);

    if (BackspaceButton.isPressed())
      bleKeyboard.write(KEY_BACKSPACE);
  }
}
