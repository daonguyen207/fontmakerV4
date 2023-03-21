#include "iot47_hub75_dma.h"
#include "fontmakerV4.h"

// 4 tấm P5 2x2 ( 128x64 )

MakeFontV4 fontV4(V_matrix_setPixel);

void setup() 
{
  Serial.begin(115200);
  int panelInit = LED_PANEL_INIT(64,32,7,false,P10_32_16,2.3);
  if( panelInit == 0)
  {
    Serial.println(F("Khỏi tạo panel thành công"));
    clear_Buffer_RGB();
    V_matrix_showScreenTest();
    led_show();
  }
  else Serial.println(F("Khỏi tạo panel thất bại"));

  fontV4.setArea(64,32);
  fontV4.print(0,0,"alo123",255,0,0);
  led_show();
}

void loop()
{
  
}
