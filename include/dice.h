#pragma once
#include <iostream>

class Dice
{
public:

enum DiceType
{
  D100 = 100,
  D20 = 20,
  D12 = 12,
  D10 = 10,
  D8 = 8,
  D6 = 6,
  D4 = 4
};

void roll(DiceType type, uint32_t count);


private:
std::string diceTypeToString(DiceType type);

};