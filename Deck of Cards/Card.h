#pragma once
class Card { 
private:
	size_t face;
	size_t suit;
	static const std::string namesOfFaces[];
	static const std::string namesOfSuits[];
public:
	Card(size_t cardSuit, size_t cardFace);
	size_t getFacesValue();
	size_t getSuitValue();
	std::string toString();
};
