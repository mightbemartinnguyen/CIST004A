#pragma once
#include<vector>
#include "Card.h"


class Deck {
private:
	std::vector<Card> theDeckOfCards;
	size_t indexOfNextCard;
public:
	Deck();
	void shuffleTheDeck();
	Card dealOneCard();
	bool cardsLeft();
};