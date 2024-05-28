#include "card.h"
#include "deck.h"
using namespace std;
DeckOfCards::DeckOfCards() {

	for (int suit{ 0 }; suit < 4; ++suit)
	{
		for (int face{ 0 }; face < 13; ++face)
		{
			theDeckOfCards.emplace_back(new Card(suit, face));
		}
	}
	indexOfNextCard = 0;
}
void DeckOfCards::shuffleTheDeck()
{
	for (int i{ 0 }; i <= 100; i++)
	{
		indexOfNextCard = 0;
		int x = rand() % (52);
		int y = rand() % (52);
		Card* temp = theDeckOfCards[x]; 
		theDeckOfCards[x] = theDeckOfCards[y];
		theDeckOfCards[y] = temp;
	}
}
Card* DeckOfCards::dealOneCard()
{
	return theDeckOfCards[indexOfNextCard++];
}
Card* DeckOfCards::getCard(size_t i)
{
	return theDeckOfCards[i];
}
bool DeckOfCards::cardsLeft() const
{
	return indexOfNextCard <= 51;
}