#include <iostream>

using namespace std;

int main()
{
    float grades[6];

    cout << "Subject One Grade: ";
    cin >> grades[0];

    cout << "Subject Two Grade: ";
    cin >> grades[1];

    cout << "Subject Three Grade: ";
    cin >> grades[2];

    cout << "Subject Four Grade: ";
    cin >> grades[3];

    cout << "Subject Five Grade: ";
    cin >> grades[4];

    cout << "Subject Six Grade: ";
    cin >> grades[5];

    cout << "Subject Seven Grade: ";
    cin >> grades[6];

    cout << (grades[0] + grades[1] + grades[2] + grades[3] + grades [4] + grades[5] + grades[6]) / 7;
    return 0;
}
