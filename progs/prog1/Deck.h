//
// Created by Julian on 2/6/2021.
//

#ifndef PROG1_DECK_H
#define PROG1_DECK_H

#include <string>
#include "Card.h"

using namespace std;

class Deck {
private:
    Card storage[52];
    int top = 0;
public:
    Deck();
    void refreshDeck();
    Card deal();
//    void shuffle();
//    int cardsLeft();
    void showDeck();
};


#endif //PROG1_DECK_H
