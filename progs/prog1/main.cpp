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

void playSolitairePrime(Deck deck) {
    cout << "\n----------------------------" << endl;
    cout << "Starting game...\n" << endl;

    int piles = 0;
    int sum = 0;
    while (deck.cardsLeft() > 0) {
        sum = 0;
        while ((!isPrime(sum) || sum == 0) && deck.cardsLeft() > 0) {
            Card card = deck.deal();
            card.showCard();
            sum += card.getValue();
        }
        if (isPrime(sum))
            cout << "Prime: " << sum << endl;
        piles++;
    }

    if (isPrime(sum) && deck.cardsLeft() == 0)
        cout << "\nWinner in " << piles << " piles!"<< endl;
    else
        cout << "Non-prime: " << sum << "\n\nLost!" << endl;
    cout << "----------------------------\n" << endl;
}

int main() {
    cout << "Welcome to Solitaire Prime!" << endl;

    bool run = true;
    Deck deck;
    while (run) {
        cout << "1) New Deck\n" << "2) Display deck\n" << "3) Shuffle deck\n" << "4) Play Solitaire Prime\n" << "5) Exit" << endl;
        int option; cin >> option;
        switch (option) {
            case 1:
                deck.refreshDeck();
                break;
            case 2:
                deck.showDeck();
                cout << endl;
                break;
            case 3:
                deck.shuffle();
                break;
            case 4:
                playSolitairePrime(deck);
                break;
            case 5:
                cout << "Thanks for playing!" << endl;
                run = false;
                break;
            default:
                cout << "Enter a valid number!" << endl;
                break;
        }
    }
}


