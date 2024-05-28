#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int dice, faces, totalRolls,sum{0};
    int max = INT_MIN;

    vector <int> diceCounter{};
     
     
     do {
        cout << "How many dices are you using?: ";
        cin >> dice;
    } while (dice < 1);

    do {
        cout << "How many sides are on each dice?: ";
        cin >> faces;
    } while (faces <= 1);

    do {
        cout << "How many rolls are you planning on doing?: ";
        cin >> totalRolls;
    } while (totalRolls < 40);

    diceCounter.resize(dice * faces + 1, 0);
    
    for (int count = 0; count < totalRolls; ++count) {
        sum = 0;
        for (int diceLoops = 0; diceLoops < dice; ++diceLoops) {
            sum += 1 + rand() % faces;
        }
        ++diceCounter.at(sum);
    }

    for (int element : diceCounter) {
        if (element > max)
            max = element;
    }
    
    

    for (int i = 0; i < diceCounter.size(); ++i) {
        cout << "Rolled" << setw(10) << i + 1 << " ";

        for (int j= 0; j < (diceCounter.at(i) * 40/max); ++j) {
            cout << "*";

        }

        cout << endl;
    
    }

    return 0;
}

    
  

 


    

/*
set up vector

ask user how many dice and sides

resize vector

ask how many rolls

do your rolls with nested for loop, outer loop covers the total amount of rolls, inner loop is for the amount of dice add it up incrememnt the counter

done with the rolls, find the maximum for the scale, use a range based for loop

go to loop that will print out the stars, one for each element in the array

inner loop prints out the stars, take the scale factor in account

print blank line at the end


*/