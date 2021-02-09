//
// Created by Julian on 2/6/2021.
//

#include "Card.h"
#include <iostream>

Card::Card(){
    rank = 'r';
    suit = 's';
}

Card::Card(char r, char s){
    rank = r;
    suit = s;
}

void Card::setCard(char r, char s) {
    rank = r;
    suit = s;
}

int Card::getValue() {
    if (rank == 'T' || rank == 'J' || rank == 'Q' || rank == 'K')
        return 10;
    else if (rank == 'A')
        return 1;
    else
        return rank - 48; // utilizing ascii code values, works because char uses asci value with arithmetic functions
}

void Card::showCard() {
    if (rank == 'T')
        cout << "10" << suit << ", ";
    else
        cout << rank << suit << ", ";
}