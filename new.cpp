#include <iostream>
using namespace std;


int oddEven(int num1){
    if ((num1 % 2) == 1){
        cout << "ODD";}
    else{
        cout << "EVEN";}

}

int main()
{
    int num;


    cout << "input a number" << endl;
    cin >> num;
    cout << oddEven(num);
    
    

    // cout << oddEven(num)

    


    return 0;

}