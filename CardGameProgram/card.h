#pragma once
#include <string>

class Card
{
private:
	int refCount{1};
	size_t face;
	size_t suit;

	static const std::string faceNames[13];
	static const std::string suitNames[4];

public:
	Card(size_t cardSuit, size_t cardFace);
	const std::string cardToString();
	bool operator > (const Card& );
	bool operator == (const Card& );
	bool operator < (const Card& );
};