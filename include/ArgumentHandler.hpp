#pragma once
#include <vector>

class ArgumentHandler
{
private:
  int numberOfArguments;
  std::vector<std::string> arguments;

  int getIndexOf(std::string s);
  std::string getArgumentByKey(std::string key);

public:
  std::string getName();
  unsigned int getSeed();
  unsigned int getWidth();
  ArgumentHandler(int argc, char const *argv[]);
};