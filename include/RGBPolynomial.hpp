#pragma once
#include <vector>

class RGBPolynomial
{
private:
  std::vector<std::vector<int>> coeffs;
  float applySinglePoly(const float z, std::vector<int> coeffs);
  float norm(float z);

public:
  std::vector<float> applyPoly(const float z);
  RGBPolynomial(std::vector<std::vector<int>> coefficients);
};