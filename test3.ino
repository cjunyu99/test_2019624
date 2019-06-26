/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 11:07:29 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteSwitch switch1;
LRemoteLabel label2;

void setup()
{
  LRemote.setName("junyu");
  LRemote.setOrientation(RC_PORTRAIT);
  LRemote.setGrid(5, 6);
    label1.setPos(0, 0);
    label1.setText("藍芽遙控測試");
    label1.setSize(5, 2);
    label1.setColor(RC_ORANGE);
    LRemote.addControl(label1);

    switch1.setPos(2, 3);
    switch1.setSize(1, 1);
    switch1.setText("");
    switch1.setColor(RC_ORANGE);
    LRemote.addControl(switch1);

    label2.setPos(0, 5);
    label2.setText("陳俊瑜製作");
    label2.setSize(5, 1);
    label2.setColor(RC_ORANGE);
    LRemote.addControl(label2);
  LRemote.begin();
  pinMode(7, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (switch1.isValueChanged()) {
    if (switch1.getValue() == 1) {
      digitalWrite(7, HIGH);

    } else {
      digitalWrite(7, LOW);

    }

  }
  delay(100);
}