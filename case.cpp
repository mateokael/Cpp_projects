#include <iostream>
using namespace std;

int main(){
    char choose;

    cin >> choose;

    switch(choose){
        case 'a':
        cout << "a";
        break;

        case 'b':
        cout << "b";
        break;

        default:
        cout << "invalid";

    }

    return 0;
}