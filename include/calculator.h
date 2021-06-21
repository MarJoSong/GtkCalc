//
// Created by mars on 2021/6/19.
//

#ifndef CALCMAC_SRC_CALCULATOR_H_
#define CALCMAC_SRC_CALCULATOR_H_

#include "operation.h"

#define MAX_CHAR 13

typedef struct {
  char input_buffer[MAX_CHAR + 1];
  int input_buffer_position;
  double result;

  Operation previous_operation;
  Operation current_operation;

  void (*display_text)(char *);
} CalcContext;

int HandleInput(CalcContext *context, char input_value);

CalcContext *CreateCalcContext();

void DestoryCalcContext(CalcContext **p_context);

#endif //CALCMAC_SRC_CALCULATOR_H_