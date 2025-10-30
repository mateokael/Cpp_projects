#include <iostream>
using namespace std;

int main(){
    int prices[5];
    int subtotal = 0;


    for (int i = 0; i<5 ; i++){
        cin >> prices[i];
        
        subtotal += prices[i];
        
    }
cout << subtotal;


    return 0;
}