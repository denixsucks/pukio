#include <iostream>
#include "dice.h"

void Dice::roll(Dice::DiceType type, uint32_t count)
{
  std::cout << diceTypeToString(type) << " rolled "<< count <<" times : " << std::endl;
}

std::string Dice::diceTypeToString(Dice::DiceType type) {
  switch (type) {
    case Dice::D100: return "D100";
    case Dice::D20:  return "D20";
    case Dice::D12:  return "D12";
    case Dice::D10:  return "D10";
    case Dice::D8:   return "D8";
    case Dice::D6:   return "D6";
    case Dice::D4:   return "D4";
    default:         return "Not defined";
  }
}