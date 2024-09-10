#include <iostream>
using namespace std;

//Function declaration
int sumRec(int k);

int main() {
    int result = sumRec(10);
    cout << result << endl;
    return 0;
}

//Function definition
int sumRec(int k) {
    if (k > 0) {
        return k + sumRec(k - 1);
    } else {
        return 0;
    }
}