void Display_7() {

  arrowPos = 60;
  tft.fillRectangle(0, 30, tft.maxX(), 176, COLOR_BLACK);
  tft.drawBitmap(180, 10, Setup, 32, 32, COLOR_WHITE);
  tft.drawText(0, 60, ">", COLOR_WHITE);
  tft.drawText(20, 60, "Bleu", COLOR_WHITE);
  tft.drawText(20, 90, "Rouge", COLOR_WHITE);
  tft.drawText(20, 120, "Vert", COLOR_WHITE);
}

//--------------------------------------------- Sub Menu Line Selection --------------------------------------------------------
void Display_Sub7() {

  tft.drawBitmap(180, 10, Setup, 32, 32, COLOR_WHITE);
  tft.fillRectangle(0, 30, 10, 176, COLOR_BLACK);
  tft.drawText(0, arrowPos, ">", COLOR_WHITE);
}
