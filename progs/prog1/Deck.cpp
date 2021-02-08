//
// Created by Julian on 2/6/2021.
//

#include "Deck.h"
#include <iostream>
using namespace std;

Deck::Deck() {
    char suits[4] = {'S', 'H', 'D', 'C'};
    char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    int counter = 0;
    for (int s = 0; s < 4; s++) {
        for (int r = 0; r < 13; r++) {
            storage[counter] = Card(ranks[r], suits[s]);
            counter++;
        }
    }
}

void Deck::refreshDeck() {
    top = 0;
    char suits[4] = {'S', 'H', 'D', 'C'};
    char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    int counter = 0;
    for (int s = 0; s < 4; s++) {
        for (int r = 0; r < 13; r++) {
            storage[counter].setCard(ranks[r], suits[s]);
            counter++;
        }
    }
}

void Deck::showDeck() {
    for (int i = 0; i < 52; i++) {
        if (i % 13 == 0)
            cout << endl;
        storage[i].showCard();
    }
    cout << endl;
}

Card Deck::deal() {
    return storage[top++];
}