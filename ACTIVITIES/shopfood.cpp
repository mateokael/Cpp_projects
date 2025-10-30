#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string ingredients[] = {"Shrimp", "Crab", "Mussels", "Clams", "Corn", "Sausage"};
    double prices[] = {25, 80, 15, 10, 20, 25};
    string flavors[] = {"Garlic Butter", "Spicy Cajun", "Lemon Pepper"};

    int quantity[6] = {0};
    int choice, amount, flavorChoice;
    double total = 0, cash;

    cout << "=== SEAFOOD BOIL SHOP ===\n";
    for (int i = 0; i < 6; i++)
        cout << i + 1 << ". " << ingredients[i] << " - ₱" << prices[i] << endl;

    
    while (true) {
        cout << "\nEnter ingredient number (0 to finish): ";
        cin >> choice;
        if (choice == 0) break;
        if (choice < 1 || choice > 6) {
            cout << "Invalid choice!\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> amount;
        if (amount < 1) {
            cout << "Must be at least 1!\n";
            continue;
        }

        quantity[choice - 1] += amount;
    }

    system("cls");

    
    cout << "\nChoose a flavor:\n";
    for (int i = 0; i < 3; i++)
        cout << i + 1 << ". " << flavors[i] << endl;
    cout << "Enter flavor number: ";
    cin >> flavorChoice;

    if (flavorChoice < 1 || flavorChoice > 3) {
        cout << "Invalid choice! Defaulting to Garlic Butter.\n";
        flavorChoice = 1;
    }

    system("cls");

    
    cout << "\n=== RECEIPT ===\n";
    for (int i = 0; i < 6; i++) {
        if (quantity[i] > 0) {
            double subtotal = quantity[i] * prices[i];
            cout << ingredients[i] << " x" << quantity[i] << " - ₱" << subtotal << endl;
            total += subtotal;
        }
    }
    cout << "Flavor: " << flavors[flavorChoice - 1] << endl;
    cout << "-----------------\nTOTAL: ₱" << total << endl;


    ofstream receipt("receipt.txt", ios::app);
    receipt << "\n=== SEAFOOD BOIL RECEIPT ===\n";
    for (int i = 0; i < 6; i++)
        if (quantity[i] > 0)
            receipt << ingredients[i] << " x" << quantity[i]
                    << " - ₱" << quantity[i] * prices[i] << "\n";
    receipt << "Flavor: " << flavors[flavorChoice - 1] << "\n";
    receipt << "TOTAL: ₱" << total << "\n";
    receipt << "-----------------------------\n";
    receipt.close();
    cout << "Receipt saved.\n";

    ifstream moneyIn("money.txt");
    if (moneyIn.is_open()) {
        string label;
        moneyIn >> label >> label >> cash; 
        moneyIn.close();
    }
    
    cash += total;

    ofstream moneyOut("money.txt");
    moneyOut << "CASH REGISTER: ";
    moneyOut << cash;  
    moneyOut.close();

    return 0;
}
