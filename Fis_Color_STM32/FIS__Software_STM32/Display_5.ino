void Display_5(){

  arrowPos = 60;
  tft.fillRectangle(0, 30, tft.maxX(), 176, COLOR_BLACK);
  tft.drawBitmap(180, 10, Map, 32, 32, COLOR_WHITE);
  tft.drawText(0, 60, ">", COLOR_WHITE);
  tft.drawText(20, 60, "Cartographie 1", COLOR_WHITE);
  tft.drawText(20, 90, "Cartographie 2", COLOR_WHITE);
  tft.drawText(20, 120, "Cartographie 3", COLOR_WHITE);
  }

//--------------------------------------------- Sub Menu Line Selection --------------------------------------------------------
  void Display_Sub5(){

  tft.fillRectangle(0, 30, 10, 176, COLOR_BLACK);
  tft.drawText(0, arrowPos, ">", COLOR_WHITE);
}
