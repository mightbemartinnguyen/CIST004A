#include <iostream>
#include <new>
#include "card.h"
#include "deck.h"
using namespace std;
int main() {
	
	DeckOfCards deck;
	size_t userCardIndex, computerCardIndex;
	Card* userCard, * computerCard;

	int yourScore{ 0 };
	int comScore{ 0 };
	bool isgameover = false;

	
	cout << "The current win count is: " << '\n';
	cout << "You: " << yourScore << " " << "Computer: " << comScore << '\n';

	while (!isgameover) {
		
		deck.shuffleTheDeck();
	
		do {
			cout << "\nEnter a card number from 0 to 51: ";
			cin >> userCardIndex;
		} while (userCardIndex < 0 || userCardIndex > 51);

		computerCardIndex = rand() % 52;

		userCard = deck.getCard(userCardIndex);
		computerCard = deck.getCard(computerCardIndex);


		cout << "Your selected card is: " << userCard->cardToString() << '\n';


		cout << "The Computer's card is: " << computerCard->cardToString() << "." << '\n';


		if (*userCard == *computerCard) {
			cout << "You and the computer have the same card. You each get a point" << '\n';
			++comScore;
			++yourScore;
		}

		if (*userCard > *computerCard) {
			cout << "You win this round. You get 1 point. " << '\n';
			++yourScore;
			cout << "The current win count is: " << '\n';
			cout << "You: " << yourScore << " " << "Computer: " << comScore << '\n';
		}

		if (*userCard < *computerCard) {
			cout << "You lose this round. Computer gets 1 point." << '\n';
			++comScore;
			cout << "The current win count is: " << '\n';
			cout << "You: " << yourScore << " " << "Computer: " << comScore << '\n';
		}

		if (comScore - yourScore == 2) {
			cout << "Sorry. you lost the game!" << '\n';
			isgameover = true;
		}
		if (yourScore - comScore == 2) {
			cout << "Congrats, you won the game!" << '\n';
			isgameover = true;
		}

	}
	return 0;
}