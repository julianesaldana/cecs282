#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

bool isPrime(int num) {
    if (num == 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Starting game.." << endl;

    Deck deck;
    deck.shuffle();

    while (deck.cardsLeft() > 0) {
        int sum = 0;
        Card card = deck.deal();
        sum += card.getValue();
        while (!isPrime(sum)) {
            card = deck.deal();
            sum += card.getValue();
        }
    }
}


