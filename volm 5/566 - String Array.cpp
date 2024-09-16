#include <iostream>

using namespace std;

int main() {
    const int rows = 6;
    const int cols = 20;
    char strArray[rows][cols] = {
        "I",
        "Love",
        "Outsbook",
        "Programming",
        "School"
    };

    for (int i = 0; i < rows; ++i) {
        if (strArray[i][0] != '\0') {
            cout << strArray[i] << endl;
        }
    }

    return 0;
}
