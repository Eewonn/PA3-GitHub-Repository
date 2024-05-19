#include <iostream>

using namespace std;

int main()
{
    string pass1 = "";
    string pass2;

    cout << "Enter your password: ";
    cin >> pass1;

    cout << "Re-enter your password: ";
    cin >> pass2;

    if(pass1 == pass2){
        cout << "You've entered the correct password";
    }else{
        cout << "Your password is wrong";
    }

    cout << endl;

    int n1;
    int n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    if(n1 == n2){
        cout << "The numbers are equal";
    }else{
        cout << "The numbers is not equal to each other";
    }

    return 0;
}
