#include <iostream>
#include <fstream>
using namespace std;


void showMenu(string ingredients[], double prices[], int size);
void takeOrder(int quantity[], int size);
int chooseFlavor(string flavors[], int flavorCount);
double printReceipt(string ingredients[], double prices[], int quantity[], int size, string flavor);
void saveReceipt(string ingredients[], double prices[], int quantity[], int size, string flavor, double total);
void updateCashRegister(double total);

int main() {
    string ingredients[] = {"Shrimp", "Crab", "Mussels", "Clams", "Corn", "Sausage"};
    double prices[] = {25, 80, 15, 10, 20, 25};
    string flavors[] = {"Garlic Butter", "Spicy Cajun", "Lemon Pepper"};
    int quantity[6] = {0};
    int ingredientCount = 6;
    int flavorCount = 3;

    // --- Program Flow ---
    showMenu(ingredients, prices, ingredientCount);
    takeOrder(quantity, ingredientCount);

    system("cls"); // Clear screen

    int flavorChoice = chooseFlavor(flavors, flavorCount);
    system("cls");

    double total = printReceipt(ingredients, prices, quantity, ingredientCount, flavors[flavorChoice - 1]);
    saveReceipt(ingredients, prices, quantity, ingredientCount, flavors[flavorChoice - 1], total);
    updateCashRegister(total);

    return 0;
}

// 🦞 Display Menu
void showMenu(string ingredients[], double prices[], int size) {
    cout << "=== SEAFOOD BOIL SHOP ===\n";
    for (int i = 0; i < size; i++)
        cout << i + 1 << ". " << ingredients[i] << " - ₱" << prices[i] << endl;
}

// 🍤 Take the Order
void takeOrder(int quantity[], int size) {
    int choice, amount;
    while (true) {
        cout << "\nEnter ingredient number (0 to finish): ";
        cin >> choice;
        if (choice == 0) break;
        if (choice < 1 || choice > size) {
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
}

// 🧈 Choose Flavor
int chooseFlavor(string flavors[], int flavorCount) {
    int flavorChoice;
    cout << "\nChoose a flavor:\n";
    for (int i = 0; i < flavorCount; i++)
        cout << i + 1 << ". " << flavors[i] << endl;
    cout << "Enter flavor number: ";
    cin >> flavorChoice;

    if (flavorChoice < 1 || flavorChoice > flavorCount) {
        cout << "Invalid choice! Defaulting to Garlic Butter.\n";
        flavorChoice = 1;
    }

    return flavorChoice;
}

// 🧾 Print and Calculate Receipt
double printReceipt(string ingredients[], double prices[], int quantity[],
                    int size, string flavor) {
    double total = 0;
    cout << "\n=== RECEIPT ===\n";
    for (int i = 0; i < size; i++) {
        if (quantity[i] > 0) {
            double subtotal = quantity[i] * prices[i];
            cout << ingredients[i] << " x" << quantity[i] << " - ₱" << subtotal << endl;
            total += subtotal;
        }
    }
    cout << "Flavor: " << flavor << endl;
    cout << "-----------------\nTOTAL: ₱" << total << endl;
    return total;
}

// 💾 Save Receipt
void saveReceipt(string ingredients[], double prices[], int quantity[],
                 int size, string flavor, double total) {
    ofstream receipt("receipt.txt", ios::app);
    receipt << "\n=== SEAFOOD BOIL RECEIPT ===\n";
    for (int i = 0; i < size; i++)
        if (quantity[i] > 0)
            receipt << ingredients[i] << " x" << quantity[i]
                    << " - ₱" << quantity[i] * prices[i] << "\n";
    receipt << "Flavor: " << flavor << "\n";
    receipt << "TOTAL: ₱" << total << "\n";
    receipt << "-----------------------------\n";
    receipt.close();
    cout << "Receipt saved.\n";
}

// 💰 Update Cash Register
void updateCashRegister(double total) {
    double cash = 0;
    ifstream moneyIn("money.txt");
    if (moneyIn.is_open()) {
        string label;
        moneyIn >> label >> cash;
        moneyIn.close();
    }
    cash += total;

    ofstream moneyOut("money.txt");
    moneyOut << "CASH REGISTER: " << cash;
    moneyOut.close();
}
