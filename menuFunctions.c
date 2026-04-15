#include <targets\AT91SAM7.h>
#include "pcf8833u8_lcd.h"

/*
void LCDSetXY(int x, int y) {
  // Row address set (command 0x2B)
  WriteSpiCommand(PASET);
  WriteSpiData(x);
  WriteSpiData(x);
  // Column address set (command 0x2A)
  WriteSpiCommand(CASET);
  WriteSpiData(y);
  WriteSpiData(y);
}


void LCDSetPixel(int x, int y, int color) {
  LCDSetXY(x, y);
  WriteSpiCommand(RAMWR);
  WriteSpiData((unsigned char)((color >> 4) & 0xFFFF));
  WriteSpiData((unsigned char)(((color & 0x0F) << 4) | 0x00));
  WriteSpiCommand(NOP);
}

//Narysuj liniê pomiêdzy wspó³rzêdnymi (x0,y0), (x1,y1) i danym kolorze:
void LCDSetLine(int x0, int y0, int x1, int y1, int color) {
  int dy = y1 - y0;
  int dx = x1 - x0;
  int stepx, stepy;
  if (dy < 0) { dy = -dy; stepy = -1; } else { stepy = 1; }
  if (dx < 0) { dx = -dx; stepx = -1; } else { stepx = 1; }
  dy <<= 1; // dy is now 2*dy
  dx <<= 1; // dx is now 2*dx
  LCDSetPixel(x0, y0, color);
  if (dx > dy) {
    int fraction = dy - (dx >> 1); // same as 2*dy - dx
    while (x0 != x1) {
      if (fraction >= 0) {
        y0 += stepy;
        fraction -= dx; // same as fraction -= 2*dx
      }
      x0 += stepx;
      fraction += dy; // same as fraction -= 2*dy
      LCDSetPixel(x0, y0, color);
    }
  } else {
    int fraction = dx - (dy >> 1);
    while (y0 != y1) {
      if (fraction >= 0) {
        x0 += stepx;
        fraction -= dy;
      }
      y0 += stepy;
      fraction += dx;
      LCDSetPixel(x0, y0, color);
    }
  }
}
//Narysuj ko³o o wspó³rzêdnych (x0,y0), œrednicy radius i danym kolorze:
void LCDSetCircle(int x0, int y0, int radius, int color) {
int f = 1 - radius;
int ddF_x = 0;
int ddF_y = -2 * radius;
int x = 0;
int y = radius;
LCDSetPixel(x0, y0 + radius, color);
LCDSetPixel(x0, y0 - radius, color);
LCDSetPixel(x0 + radius, y0, color);
LCDSetPixel(x0 - radius, y0, color);
while (x < y) {
if (f >= 0) {
y--;
ddF_y += 2;
f += ddF_y;
}
x++;
ddF_x += 2;
f += ddF_x + 1;
LCDSetPixel(x0 + x, y0 + y, color);
LCDSetPixel(x0 - x, y0 + y, color);
LCDSetPixel(x0 + x, y0 - y, color);
LCDSetPixel(x0 - x, y0 - y, color);
LCDSetPixel(x0 + y, y0 + x, color);
LCDSetPixel(x0 - y, y0 + x, color);
LCDSetPixel(x0 + y, y0 - x, color);
LCDSetPixel(x0 - y, y0 - x, color);
}
}


//Narysuj symbol X wspó³rzêdnymi œrodka (x0,y0) i danym kolorze:
void drawX(int x0, int y0, int color)
{
  LCDSetLine(x0-15, y0-15, x0+15, y0+15, color);
  LCDSetLine(x0-15, y0-16, x0+15, y0+16, color);
  LCDSetLine(x0-15, y0+15, x0+15, y0-15, color);
  LCDSetLine(x0-15, y0+16, x0+15, y0-16, color);
}
*/
