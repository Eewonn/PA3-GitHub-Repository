#include <iostream>

using namespace std;

void greet(){
    cout << "Type 0 if no and 1 if yes.";
}

int main()
{
    greet();

    cout << endl;

    bool hasCoke, hasRoyal;

    cout << "Is there a Coke? ";
    cin >> hasCoke;

    cout << "Is there a Royal? ";
    cin >> hasRoyal;

    if(hasCoke && hasRoyal){
        cout << "Buy Coke and Royal";
    }else if(hasCoke || hasRoyal){
        cout << "Don't Buy Coke and Royal";
    }else{
        cout << "Look for Sprite";
    }

    return 0;
}
