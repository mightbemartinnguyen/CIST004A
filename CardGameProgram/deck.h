#pragma once
#include <vector>
#include "card.h"

class DeckOfCards
{
public:

	DeckOfCards(); // constructor initializes deck
	void shuffleTheDeck(); // shuffles cards in deck
	Card* dealOneCard(); // deals a card from the deck
	Card* getCard(size_t);
	bool cardsLeft() const;

private:
	std::vector< Card* > theDeckOfCards;
	size_t indexOfNextCard;
};