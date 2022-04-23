void Display_3(){

  tft.fillRectangle(0, 30, tft.maxX(), 176, COLOR_BLACK);
  tft.drawBitmap(186, 10, Lambda, 24, 32, COLOR_WHITE);
  tft.drawText(0, 80, "Melange:                   ", COLOR_WHITE);
  tft.drawLine(10, 101, tft.maxX()-10, 101, COLOR_WHITE);
  tft.drawText(0, 110, "                          ", COLOR_WHITE);
  }
