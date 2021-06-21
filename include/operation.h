//
// Created by mars on 2021/6/19.
//

#ifndef CALCMAC_SRC_OPERATION_H_
#define CALCMAC_SRC_OPERATION_H_

typedef struct {
  double left;
  double right;
  double (*operator)(double, double);
} Operation;

double OperationApply(Operation *operation);

double Plus(double left, double right);

double Minus(double left, double right);

double Multiply(double left, double right);

double Divide(double left, double right);

#endif //CALCMAC_SRC_OPERATION_H_
