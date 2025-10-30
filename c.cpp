#include <iostream>
using namespace std;

void welcome() {
    cout << "WELCOME TO BAKEIT \n";
    cout << "Come And Bake" << endl;
}

void schedule() {
    cout << "[1] WALK-IN";
    cout << "[2] SET SCHEDULE";
    cout << "[0] CANCEL ";
}
void mode() {
    cout << "[1] SOLO";
    cout << "[2] DUO";


}


void showMenu() {
    cout << "[1] CAKE";
    cout << "[2] CUPCAKES";
    cout << "[3] COOKIES";
}

void showFlavors() {
    cout << "[1] Chocolate",
    cout << "[2] Mocha",
    cout << "[3] Ube",
    cout << "[4] Mango",
    cout << "[5] Vanilla";

}


int main(){
    string date[3];
    string product, flavor, topping;
    int choice, total = 0;

    welcome();

    while(true){
        schedule();
        cin >> choice;
        if (choice == 0){
            cout << "Thank you for visiting";
            return 0;
        }
        else if (choice == 1){
            cout << "Please come in";
            break;
        }
        else if (choice == 2){
            cout << "Set your date and time"<< endl;
            cout << "Month: "<< endl;
            cin >> date[0];
            cout << "Day: " << endl;
            cin >> date[1];
            cout << "Time: " <<endl;
            cin >> date[2];
            break;
        }
        else {
            cout << "Invalid choice, Please try again";
        }
    }
    while(true){
        mode();
        cin >> choice;
        if (choice == 1){
            cout << "You picked solo";
            break;
            }
        else if (choice == 2){
            cout << "You picked duo";
            break;
        }
        else {
            cout << "Invalid choice";
            }
        }
    while(true){
        showMenu();

        cin >> choice;

        if (choice == 1){
            cout << "CAKE";
            break;
        }





    }

return 0;
}