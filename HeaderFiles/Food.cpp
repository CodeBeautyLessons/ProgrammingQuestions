#include "Food.h"
#include <iostream>

const char* RecommendMeAFood(char firstLetter) {
    if (firstLetter == 'a' || firstLetter == 'A') {
        return "apple";
    }

    if (firstLetter == 'b' || firstLetter == 'B') {
        return "banana";
    }

    if (firstLetter == 'c' || firstLetter == 'C') {
        return "cider";
    }

    return "pizza";
};

void GetPizzaRecipe()
{
    std::cout << "To make pizza you need....";
}