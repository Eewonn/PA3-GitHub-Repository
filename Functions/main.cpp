#include <iostream>

using namespace std;

void sayhello(){
    cout << "Hello!";
}

int mid(int n1,int n2){
    return (n1 + n2) / 2;
}

int cube(int n){
    return n*n*n;
}



int main()
{
    sayhello();
    cout << endl;

    cout << cube(2)<< endl;

    cout << mid(1,5);

    return 0;
}
