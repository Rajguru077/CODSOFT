#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int countWords(std::ifstream& file) {
    string word;
    int count = 0;
    
    while (file >> word) {
        count++;
    }
    
    return count;
}

int main() {
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;
    ifstream inputFile(fileName);
    
    if (!inputFile.is_open()) {
    cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    int wordCount = countWords(inputFile);
    
    cout << "Total word count: " << wordCount <<endl;

    inputFile.close();
    
    return 0;
}
