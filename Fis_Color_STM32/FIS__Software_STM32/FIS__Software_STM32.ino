/*
    __ ___ ___     _
  | __|_ _| __|  _| |_
  | _| | |\__ \ |_   _|
  |_| |___|___/   |_|

*/

// 2" TFT ILI9225 176X220

/*
   _    ___ ___ ___    _   ___ ___ ___ ___
  | |  |_ _| _ ) _ \  /_\ | _ \_ _| __/ __|
  | |__ | || _ \   / / _ \|   /| || _|\__ \
  |____|___|___/_|_\/_/ \_\_|_\___|___|___/

*/

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

#include "SPI.h"
#include "TFT_22_ILI9225.h"
#include "bitmap.h"

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

// ARDUINO_ARCH_STM32F1

#define TFT_CLK PA5 // CLK
#define TFT_SDI PA7 // SDA
#define TFT_RS  PA2 // RS
#define TFT_RST PA1 // RST
#define TFT_CS  PA0 // CS

#define TFT_LED 0 // 0 if wired to +5V directly

//---------------------------------------------------------------------------------------

#define up PA3
#define down PA4
#define left PA8
#define right PA9
#define ok PA10

//---------------------------------------------------------------------------------------

const int menuSize = 6;
int subMenuSize = 0;
int parameterSize = 0;

String menuItems[menuSize];

bool upLastState = HIGH;
bool downLastState = HIGH;
bool leftLastState = HIGH;
bool rightLastState = HIGH;
bool okLastState = HIGH;

bool colorSubMenu = LOW;

int currentMenu = 0;
int currentSubMenu = 0;

int currentParameter = 0;
int selectedParameter = 0;

int arrowPos = 60;
String temp;
char currentPrintOut[10];

int currentColor = 0;
int selectedColor = COLOR_BLUE;


//---------------------------------------------------------------------------------------

#define TFT_BRIGHTNESS 100 // Initial brightness of TFT backlight (optional)

// Use hardware SPI (faster - on Uno: 13-SCK, 12-MISO, 11-MOSI)
TFT_22_ILI9225 tft = TFT_22_ILI9225(TFT_RST, TFT_RS, TFT_CS, TFT_LED, TFT_BRIGHTNESS);

// Variables and constants
uint16_t x, y;
boolean flag = false;



//---------------------------------------------------------------------------------------


/*
   ___ ___ _____ _   _ ___
  / __| __|_   _| | | | _ \
  \__ \ _|  | | | |_| |  _/
  |___/___| |_|  \___/|_|

*/

void setup() {
  Serial.begin(9600);
  tft.begin();
  tft.setOrientation(3);

  SplashScreen();

  pinMode(up, INPUT_PULLUP);
  pinMode(down, INPUT_PULLUP);
  pinMode(left, INPUT_PULLUP);
  pinMode(right, INPUT_PULLUP);
  pinMode(ok, INPUT_PULLUP);

  menuItems[0] = "TEMP        ";
  menuItems[1] = "TURBO       ";
  menuItems[2] = "AFR         ";
  menuItems[3] = "TRIP        ";
  menuItems[4] = "MAP         ";
  menuItems[5] = "REGLAGES    ";


  MenuChanged();

}

/*
   __  __   _   ___ _  _   _    ___   ___  ___
  |  \/  | /_\ |_ _| \| | | |  / _ \ / _ \| _ \
  | |\/| |/ _ \ | || .` | | |_| (_) | (_) |  _/
  |_|  |_/_/ \_\___|_|\_| |____\___/ \___/|_|

*/

void loop() {

  //--------------------------------------------- Menu Selection ------------------------------------------------

  if (digitalRead(left) != leftLastState) {
    leftLastState = !leftLastState;

    if (!leftLastState) {
      //Just pressed.
      if (currentMenu > 0) {
        currentMenu--;
      } else {
        currentMenu = menuSize - 1;
      }
      //Serial.println(menuItems[currentMenu]);
      MenuChanged();
    } else {
      //Just released.
    }
  }

  if (digitalRead(right) != rightLastState) {
    rightLastState = !rightLastState;

    if (rightLastState) {
      //Just pressed.
      if (currentMenu < menuSize - 1) {
        currentMenu++;
      } else {
        currentMenu = 0;
      }
      MenuChanged();
    } else {
      //Just released
    }

  }
  //--------------------------------------------- Sub Menu Selection --------------------------------------------------------
  if (currentMenu == 4) {
    subMenuSize = 3;
    if (digitalRead(up) != upLastState) {
      upLastState = !upLastState;

      if (!upLastState) {
        //Just pressed.
        if (currentSubMenu > 0) {
          currentSubMenu--;
          arrowPos = (arrowPos - 30);
          tft.drawText(0, arrowPos, ">", COLOR_WHITE);
        } else {
          currentSubMenu = subMenuSize - 1;
          arrowPos = ((subMenuSize + 1) * 30);
        }
        //Serial.println(SubMenuItems[currentSubMenu]);
        subMenuChanged();
      } else {
        //Just released.
      }
    }

    if (digitalRead(down) != downLastState) {
      downLastState = !downLastState;

      if (downLastState) {
        //Just pressed.
        if (currentSubMenu < subMenuSize - 1) {
          currentSubMenu++;
          arrowPos = (arrowPos + 30);
          tft.drawText(0, arrowPos, ">", COLOR_WHITE);
        } else {
          currentSubMenu = 0;
          arrowPos = 60;

        }
        subMenuChanged();
      } else {
        //Just released
      }

    }


  }
  if (currentMenu == 5) {
    subMenuSize = 2;
    if (digitalRead(up) != upLastState) {
      upLastState = !upLastState;

      if (!upLastState) {
        //Just pressed.
        if (currentSubMenu > 0) {
          currentSubMenu--;
          arrowPos = (arrowPos - 30);
          tft.drawText(0, arrowPos, ">", COLOR_WHITE);
        } else {
          currentSubMenu = subMenuSize - 1;
          arrowPos = ((subMenuSize + 1) * 30);
        }
        //Serial.println(SubMenuItems[currentSubMenu]);
        subMenuChanged();
      } else {
        //Just released.
      }
    }

    if (digitalRead(down) != downLastState) {
      downLastState = !downLastState;

      if (downLastState) {
        //Just pressed.
        if (currentSubMenu < subMenuSize - 1) {
          currentSubMenu++;
          arrowPos = (arrowPos + 30);
          tft.drawText(0, arrowPos, ">", COLOR_WHITE);
        } else {
          currentSubMenu = 0;
          arrowPos = 60;

        }
        subMenuChanged();
      } else {
        //Just released
      }

    }


  }

  //--------------------------------------------- Parameter Selection --------------------------------------------------------

  if (currentMenu == 5  && currentSubMenu == 0 && digitalRead(ok) != okLastState) {
    okLastState = !okLastState;
    currentParameter = 0;
    currentMenu = 6;
    MenuChanged();
  }

  if (currentMenu == 6) {
    parameterSize = 3;
    if (digitalRead(up) != upLastState) {
      upLastState = !upLastState;

      if (!upLastState) {
        //Just pressed.
        if (currentParameter > 0) {
          currentParameter--;
          arrowPos = (arrowPos - 30);
          tft.drawText(0, arrowPos, ">", COLOR_WHITE);
        } else {
          currentParameter = parameterSize - 1;
          arrowPos = ((parameterSize + 1) * 30);
        }
        //Serial.println(SubMenuItems[currentSubMenu]);
        subMenuChanged();
      } else {
        //Just released.
      }
    }

    if (digitalRead(down) != downLastState) {
      downLastState = !downLastState;

      if (downLastState) {
        //Just pressed.
        if (currentParameter < parameterSize - 1) {
          currentParameter++;
          arrowPos = (arrowPos + 30);
          tft.drawText(0, arrowPos, ">", COLOR_WHITE);
        } else {
          currentParameter = 0;
          arrowPos = 60;

        }
        subMenuChanged();
      } else {
        //Just released
      }

    }

  //--------------------------------------------- Color Parameter Selection --------------------------------------------------------


    if (digitalRead(ok) != okLastState) {
      okLastState = !okLastState;

      if (!okLastState) {
        if (currentParameter == 0) {
          okLastState = !okLastState;
          selectedColor = COLOR_BLUE;
          currentMenu = 5;
          MenuChanged();
        }


        else if (currentParameter == 1) {
          okLastState = !okLastState;
          selectedColor = COLOR_RED;
          currentMenu = 5;
          MenuChanged();
        }

        else if (currentParameter == 2) {
          okLastState = !okLastState;
          selectedColor = COLOR_GREEN;
          currentMenu = 5;
          MenuChanged();
        }
      }

    }
  }










  delay(50);
}

/*
    __ _   _ _  _  ___ _____ ___ ___  _  _ ___
  | __| | | | \| |/ __|_   _|_ _/ _ \| \| / __|
  | _|| |_| | .` | (__  | |  | | (_) | .` \__ \
  |_|  \___/|_|\_|\___| |_| |___\___/|_|\_|___/

*/

//--------------------------------------------- Page Selection --------------------------------------------------------

void MenuChanged() {
  currentSubMenu = 0;
  //tft.clear();
  tft.setFont(Terminal12x16);

  temp = String(menuItems[currentMenu]);
  temp.toCharArray(currentPrintOut, 12);

  tft.fillRectangle(180, 10, tft.maxX(), 42, COLOR_BLACK);
  tft.drawText(2, 7, currentPrintOut);
  tft.drawLine(0, 1, tft.maxX(), 1, selectedColor);
  tft.drawLine(0, 26, tft.maxX(), 26, selectedColor);

  if (currentMenu == 0) {
    Display_1();
  }
  else if (currentMenu == 1) {
    Display_2();
  }

  else if (currentMenu == 2) {
    Display_3();
  }

  else if (currentMenu == 3) {
    Display_4();
  }

  else if (currentMenu == 4) {
    Display_5();
  }

  else if (currentMenu == 5) {
    Display_6();
  }

  else if (currentMenu == 6) {
    Display_7();
  }


}

//--------------------------------------------- Sub Page Selection --------------------------------------------------

void subMenuChanged() {

  //tft.clear();
  tft.setFont(Terminal12x16);

  temp = String(menuItems[currentMenu]);
  temp.toCharArray(currentPrintOut, 11);


  tft.drawText(2, 7, currentPrintOut);
  tft.drawLine(0, 1, tft.maxX(), 1, selectedColor);
  tft.drawLine(0, 26, tft.maxX(), 26, selectedColor);


  if (currentMenu == 4) {
    subMenuSize = 3;
    Display_Sub5();
  }

  if (currentMenu == 5) {
    subMenuSize = 2;
    Display_Sub6();
  }

  if (currentMenu == 6) {
    subMenuSize = 3;
    Display_Sub7();
  }


}

//--------------------------------------------- Splash Screen --------------------------------------------------------

void SplashScreen() {
  tft.drawCircle(110, 65, 41, COLOR_WHITE);
  tft.fillCircle(110, 65, 40, COLOR_BLUE);
  tft.drawBitmap(77, 31, VW, 68, 68, COLOR_WHITE);
  tft.setFont(Terminal12x16);
  tft.drawText(50, 120, "VOLKSWAGEN", COLOR_WHITE);
  delay(3000);
  tft.clear();
  tft.drawBitmap(10, 20, Fdr, 200, 95, COLOR_WHITE);
  //tft.drawText(100, 70, "FDR", COLOR_WHITE);
  //tft.drawText(60, 90, "Motorsport", COLOR_WHITE);
  delay(1000);
  tft.drawText(85, 120, "FIS+", COLOR_WHITE);
  delay(2000);
  tft.clear();
}
