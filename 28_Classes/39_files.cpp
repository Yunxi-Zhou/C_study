#include <iostream>
#include <fstream>
using namespace std;

void sampleFile() {
    //create and open a text file
    ofstream MyFile("sampleFile.txt");

    //Write to the file
    MyFile << "sample Files can be tricky, but it is fun!" << endl;

    //Close the file
    MyFile.close();
}

void readFile() {
    //Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("sampleFile.txt");

    //Use a while loop together with the getline() function to read the file line by line
    while(getline(MyReadFile, myText)) {
        cout << myText << endl;
    }

    MyReadFile.close();
}

int main() {
    sampleFile();
    readFile();
    return 0;
}