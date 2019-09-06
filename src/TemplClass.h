#ifndef LIB_TEMPL
#define LIB_TEMPL

#include <Arduino.h>

//#include <ESP8266WiFi.h>
//#include <WiFiUdp.h>

#pragma message (#PIOENV " : " str(PIOENV))

#define LED_BLINK D7

namespace Templ
{

  class TemplClass
  {
  public:
    TemplClass();
    //˜TemplClass(){}

    void blink(void);

  private:
    TemplClass(TemplClass const&)     = delete;
    void operator=(TemplClass const&) = delete;
  };

};

#endif
