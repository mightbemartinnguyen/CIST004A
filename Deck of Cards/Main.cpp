#include <iostream>
#include <iomanip>
#include "Card.h"
#include "Deck.h"
using namespace std;


int main()
{
    Deck yourDeck;
    yourDeck.shuffleTheDeck();
    while (yourDeck.cardsLeft()) {
        cout << yourDeck.dealOneCard().toString() << '\n';
}
    return 0;
}

