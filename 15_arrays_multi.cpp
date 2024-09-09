#include <iostream>
using namespace std;

//game of Battleship

bool ships[4][4] = {
    {0,1,1,0},
    {0,0,0,0},
    {0,0,1,0},
    {0,0,1,0}
};

int hits = 0;
int numberOfTurns = 0;

void displayShip() {
    cout << "current: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << "{";
        for (int j = 0; j < 4; j++) {
            cout << ships[i][j];
            if (j < 3) {
                cout << ",";
            }
        }
        cout << "}" << endl;
    }
}

void battleship() {
    while (hits < 4) {
        int row, column;
        
        cout << "Selecting coordinates" << endl;

        //ask player for a column
        cout << "Choose a row between 0 and 3: " << endl;
        cin >> row;

        cout << "Choose a column between 0 and 3: " << endl;
        cin >> column;

        if (ships[row][column]) {
            ships[row][column] = 0;
            hits++;

            cout << "Hits! " << hits << " left.\n" << endl;
        } else {
            cout << "Miss! " << endl;
        }
        displayShip();
        numberOfTurns++;
        
    }
    cout << "Win!" << endl;
    cout << "You won in " << numberOfTurns << " turns." << endl;
}

int main() {
    displayShip();
    battleship();
    
    return 0;
}