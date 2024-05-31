#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter your score:" << endl;
    cin >> score;

    if (score >= 70) {
        cout << "You got an A.\n";
    } else if (score >= 60) {
        cout << "You got a B.\n";
    } else if (score >=50) {
        cout << "You got a C.\n";
    } else if (score >=40) {
        cout << "You got a D.\n";
    } else {
        cout << "You got an F.\n";
    }

    return 0;
}
