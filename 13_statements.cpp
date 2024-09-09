#include <iostream>
using namespace std;

void state_if(int x, int y) {
    if (x >= y) {
        cout << "x is greater than y" << endl;
    }
}

void state_else(int x, int y) {
    if (x >= y) {
        cout << "x is greater than y" << endl;
    } else {
        cout << "x is not greater than y" << endl;
    }
}

void state_else_if(int x) {
    if (x <10) {
        cout << "Good morning" << endl;
    } else if (x < 20) {
        cout << "Good noon" << endl;
    } else {
        cout << "Good night" << endl;
    }
}

void state_short_if(int x) {
    string result = (x < 18) ? "Good day." : "Good night.";
    cout << result << endl;
}

void state_switch(int day) {
    // switch: compared with the values of each case
    switch(day) {
        case 100:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
    }
}

void state_default(int day) {
    switch (day) {
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Unknown" << endl;
        
    }
}

void state_while(int i) {
    while (i < 5) {
        cout << i << endl;
        i++;
    }
}

void state_do_while(int i) {
    do {
        cout << i << endl;
        i++;
    }
    while (i < 5);
}

void state_for() {
    for (int i = 0; i <= 10; i += 2) {
        cout << i << endl;
    }
}

void state_nest() {
    // Outer
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer" << i << endl;
        // Inner
        for (int j = 1; j <= 3; ++j) {
            cout << "Inner" << j << endl;
        }
    }
}

void state_forEach() {
    int myNum[5] = {10,20,30,40,50};
    // for (int i : myNum) {
    //     cout << i <<endl;
    // }
}

void state_break() {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << endl;
    }
}

void state_continue() {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << endl;
    }
}

void while_break() {
    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
        if (i == 4) {
            break;
        }
    }
}

void while_continue() {
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
}


int main() {
    //state_if(20,18);
    //state_else(20,18);
    //state_else_if(22);
    //state_short_if(20);
    //state_switch(100); // Monday
    //state_default(4);
    //state_while(0);
    //state_do_while(0);
    //state_for();
    //state_nest();
    //state_forEach();
    //state_break();
    //state_continue();
    //while_break();
    //while_continue();
    return 0;
}