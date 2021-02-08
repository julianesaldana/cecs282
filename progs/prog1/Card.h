//
// Created by Julian on 2/6/2021.
//

#ifndef PROG1_CARD_H
#define PROG1_CARD_H

#include <string>
using namespace std;

class Card {
private:
    char rank;
    char suit;
public:
    Card();
    Card(char r, char s);
    void setCard(char r, char s);
    int getValue(char r, char s);
    void showCard();
};


#endif //PROG1_CARD_H
