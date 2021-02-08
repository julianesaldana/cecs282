#include <iostream>
#include "Card.h"
#include "Deck.h"
using namespace std;


int main() {
    Deck test;
    test.showDeck();
    test.shuffle();
    test.showDeck();
    test.refreshDeck();
    test.showDeck();
    return 0;
}
