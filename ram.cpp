#include <iostream>
using namespace std;

int main() {
    int subjects;
    float marks, total = 0, average;

    cout << "🎓 Student Grade Calculator\n";
    cout << "Enter number of subjects: ";
    cin >> subjects;

    for(int i = 1; i <= subjects; i++) {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;
        total += marks;
    }

    average = total / subjects;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Average = " << average << endl;

    if(average >= 90)
        cout << "Grade: A+" << endl;
    else if(average >= 80)
        cout << "Grade: A" << endl;
    else if(average >= 70)
        cout << "Grade: B" << endl;
    else if(average >= 60)
        cout << "Grade: C" << endl;
    else if(average >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
