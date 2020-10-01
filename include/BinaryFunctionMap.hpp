#pragma once
#include <math.h>

class BinaryFunctionMap
{
private:
  float applyBasic(const float x, const float y, int n);
  float applyComplex(const float z, int n);

public:
  float applyFunction(const float x, const float y, int n);
};
