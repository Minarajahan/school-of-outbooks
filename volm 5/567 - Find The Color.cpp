#include <iostream>
using namespace std;

int main() {
    const char* colors[] = {
        "Red",
        "Light Red",
        "Leaf Green",
        "Bottle Green",
        "Light Green",
        "Blue",
        "Sky Blue",
        "Blackish Blue",
        "Olive Green",
        "Water Green",
        "White",
        "Black",
        "Grey",
        "Orange",
        "Purple",
        "Violet"
    };

    int position;
    while (cin >> position) {
        if (position >= 1 && position <= 16) {
            cout << "The Color is: " << colors[position - 1] << endl;
        }
    }

    return 0;
}
