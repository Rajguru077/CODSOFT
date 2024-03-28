#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
    map<string, int> studentGrades;
    string name;
    int grade;
    char option;
    do 
    {
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter grade for " << name << ": ";
    cin >> grade;

    studentGrades[name] = grade;

        cout << "Do you want to add another student? (y/n): ";
        cin >> option;
    } while (option == 'y' || option == 'Y');

    double total = 0.0;
    int highestGrade = INT MIN;
    int lowestGrade = INT MAX;

    for (const auto& pair : studentGrades) {
        total += pair.second;
        highestGrade = max(highestGrade, pair.second);
        lowestGrade = min(lowestGrade, pair.second);
    }

    int numStudents = studentGrades.size();
    double averageGrade = total / numStudents;

    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
