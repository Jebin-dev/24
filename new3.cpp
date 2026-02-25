#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("notes.txt");  // Create and open file
    string note;

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    cout << "📝 Enter your notes (type 'exit' to stop):\n";

    while (true) {
        getline(cin, note);

        if (note == "exit")
            break;

        file << note << endl;  // Write to file
    }

    file.close();
    cout << "✅ Notes saved to notes.txt successfully!" << endl;

    return 0;
}
