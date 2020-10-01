#pragma once
#include "BinaryFunctionMap.hpp"
#include <vector>

class FunctionTree
{
private:
  BinaryFunctionMap functionMap;
  std::vector<std::vector<int>> pairsArray;

public:
  float applyTree(float, float);
  FunctionTree(std::vector<std::vector<int>> pairsArray, BinaryFunctionMap map);
};