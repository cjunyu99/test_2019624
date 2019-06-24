/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Mon, 24 Jun 2019 11:54:17 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteCircleButton circle1;
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

    circle1.setPos(1, 2);
    circle1.setSize(3, 3);
    circle1.setText("開／關");
    circle1.setColor(RC_ORANGE);
    LRemote.addControl(circle1);

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
  if (circle1.isValueChanged()) {
    if (circle1.getValue() == 1) {
      digitalWrite(7, HIGH);

    } else {
      digitalWrite(7, LOW);

    }

  }
  delay(100);
}