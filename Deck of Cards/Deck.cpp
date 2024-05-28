#include <iostream>
#include<vector>
#include "Deck.h";
#include "Card.h";

Deck::Deck() {
	for (size_t suit = 0; suit < 4; ++suit) {
		for (size_t face = 0; face < 13; ++face) {
			theDeckOfCards.emplace_back(Card{ suit, face });
		}
	}
	indexOfNextCard = 0;
}


void Deck::shuffleTheDeck() {
	for (int i = 0; i < 250; i++)
	{
		int x = rand() % 52;
		int y = rand() % 52;
		Card temp = theDeckOfCards[x];
		theDeckOfCards[x] = theDeckOfCards[y];
		theDeckOfCards[y] = temp;
	}
	indexOfNextCard = 0;
	return;
}
Card Deck::dealOneCard() {
	return theDeckOfCards[indexOfNextCard++];
}

bool Deck::cardsLeft() {
	return indexOfNextCard < 52;
	}