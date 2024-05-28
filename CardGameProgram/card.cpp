#include <string>
#include "card.h"
#include "deck.h"

using namespace std;
Card::Card( size_t cardSuit, size_t cardFace )
{
	suit = cardSuit;
	face = cardFace;
}
const std::string Card::faceNames[13] ={ "Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace"};
const std::string Card::suitNames[4] = {"Hearts", "Clubs", "Diamonds", "Spades"};
const std::string Card::cardToString(){ 
	return faceNames[face] + " of " + suitNames[suit];
}

bool Card :: operator > (const Card& right) {
 if (face > right.face) return true;
 if (face < right.face) return false;
 return (suit > right.suit);
}
bool Card :: operator == (const Card& right) {
 return(face == right.face && suit == right.suit);

}
bool Card :: operator < (const Card& right) {
	if (face < right.face) return true;
	if (face > right.face) return false;
	return (suit < right.suit);
}