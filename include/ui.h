//
// Created by mars on 2021/6/19.
//

#ifndef CALCMAC_INCLUDE_UI_H_
#define CALCMAC_INCLUDE_UI_H_

#include <calculator.h>

typedef struct {
  void *text_displayer;
  CalcContext *context;
} UiContext;

extern UiContext *ui_context;
#endif //CALCMAC_INCLUDE_UI_H_
