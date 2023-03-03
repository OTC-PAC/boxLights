#include <FastLED.h>
#include "control.h"

#define LED_PIN 6
#define NUM_LEDS 162

CRGB leds[NUM_LEDS];

void setup() {
    FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {

}