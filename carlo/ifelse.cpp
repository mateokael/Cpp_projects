#include <iostream>
using namespace std;
int main()
{
    int password = 123;
    int pass;

    cout<<"Enter your Password: ";
    cin>>pass;

    if(pass == password){

        cout<<"Welcome to your cashier";

        int price,quantity,total;
        cout<<"\nEnter Price: ";
        cin>>price;
        cout<<"Enter quantity: ";
        cin>>quantity;

        total = price * quantity;
        cout<<"The Total is: "<<total<<endl;



    }
    else{
        cout<<"Incorrect password";

    }
  


    



    return 0;
}