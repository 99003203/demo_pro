#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
int kmtom(int operand1)
{
  return operand1 * 1000;
}
int mtocm(int operand1)
{
  return operand1 * 100;
}
int ftoi(int operand1)
{
  return operand1 * 12;
}
int itocm(int operand1)
{
  return operand1 * 2.54;
}
int cmtom(int operand1)
{
  return operand1 * 0.01;
}
int ytom(int operand1)
{
  return operand1 * 0.9144;
}
int ytocm(int operand1)
{
  return operand1 * 91.44;
}

