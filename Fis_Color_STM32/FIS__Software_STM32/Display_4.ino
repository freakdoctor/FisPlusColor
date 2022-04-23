void Display_4(){

  tft.fillRectangle(0, 30, tft.maxX(), 176, COLOR_BLACK);
  tft.drawBitmap(180, 10, Trip, 32, 32, COLOR_WHITE);
  tft.drawText(0, 80, "                  0 min", COLOR_WHITE);
  tft.drawLine(10, 101, tft.maxX()-10, 101, COLOR_WHITE);
  tft.drawText(0, 110, "Temp ext      --.- C", COLOR_WHITE);
  }
