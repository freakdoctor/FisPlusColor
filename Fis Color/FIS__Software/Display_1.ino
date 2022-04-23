void Display_1(){

  tft.fillRectangle(0, 30, tft.maxX(), 176, COLOR_BLACK);
  tft.drawText(0, 80, "Huile:         --.- C     ", COLOR_WHITE);
  tft.drawLine(10, 101, tft.maxX()-10, 101, COLOR_WHITE);
  tft.drawText(-4, 110, " LDR:           --.- C    ", COLOR_WHITE);
  
  }
