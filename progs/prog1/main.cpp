#include <iostream>
#include "Card.h"
#include "Deck.h"
using namespace std;


int main() {
    Deck test;
    test.showDeck();
    Card temp = test.deal();
    temp.showCard();
    return 0;
}
