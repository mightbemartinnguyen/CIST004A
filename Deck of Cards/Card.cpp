#include <iostream>
#include "Card.h";
using namespace std;


Card::Card(size_t cardSuit, size_t cardFace) {
	suit = cardSuit;
	face = cardFace;
}


const std::string Card::namesOfFaces[] = { "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace" };
const std::string Card::namesOfSuits[] = { "Clubs" , "Diamonds", "Hearts", "Spades" };


size_t Card::getFacesValue() {
	return face;
	}


size_t Card::getSuitValue() {
	return suit;
}


string Card::toString() {
		return namesOfFaces[face] + " of " + namesOfSuits[suit];
}
