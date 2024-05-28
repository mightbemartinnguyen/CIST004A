#include <iostream>
using namespace std;

int countCharacters(char* sPtr) {
    int count{ 0 };
    for (; *sPtr != '\0'; ) {
        ++count;
        ++sPtr;
    }
    return count;
}

int vowelCount(char* sPtr)
{
    int count{ 0 };

    while ((*sPtr) != '\0') {
        switch (toupper(*sPtr)){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            ++count;
        }
        ++sPtr;
    }

    return count;
}

void firstUpper(char* sPtr) {
    *sPtr = toupper(*sPtr);
    while (*sPtr != '\0') {
    if (*sPtr == ' ')
        *(sPtr + 1) = toupper(*(sPtr + 1));
        ++sPtr;
    }
    return;
}


void shout(char* sPtr)
{
    while (*sPtr != '\0') {
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
    return;
}


void removeSpaces(char* sPtr)
{
    char* source = sPtr;
    char* dPtr = sPtr;
    while (*source != '\0') {
        if (*source == ' '){
            if (*source != *sPtr) {
                *dPtr = *source;
                dPtr++;
                source++;
            }
            while (*source == ' ') {
                source++;
            }
        }
        else{
            *dPtr = *source;
            dPtr++;
            source++;
        }
    }
    *dPtr = '\0';

    return;
}



int main()
{
    cout << "Martin Nguyen	CIST 004A	10-25-2022\n";
    char sPtr[80];

    cout << "Enter a string: ";
    cin.getline(sPtr, 80);
    cout << "There are "<< countCharacters(sPtr) << " characters in \"" << sPtr << "\"\n";
   
    cout << "There are "<< vowelCount(sPtr) << " vowels in \"" << sPtr << "\"\n";

    firstUpper(sPtr);
    cout << "Upper case first characters: \"" << sPtr << "\"\n";

    shout(sPtr);
    cout << "Shouting: \"" << sPtr << "\"\n";
 
    removeSpaces(sPtr);
    cout << "Extra spaces removed: \"" << sPtr << "\"\n";

    return 0;
}