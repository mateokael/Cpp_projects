#include <iostream>
using namespace std;

enum Flavor {
    VANILLA = 1,
    CHOCOLATE,
    PREMIUM_CHOCOLATE_BROWNIES,
    MANGO_ROYAL,
    OREO_COOKIESCREAM
};

enum Topping {
    NONE = 0,
    SPRINKLES = 1,
    CHOCOLATE_CHIPS,
    CHOCOLATE_SYRUP,
    MARSHMALLOWS
};

int main() {
    const float discount = 0.15;
    int flavorChoice;
    int toppingChoice;
    int pricePerScoop = 0;
    int scoops = 0;

    float totalBeforeDiscount = 0;
    float finalTotal = 0;


    int totalBrownieScoops = 0;

    bool go = true;

    cout << "____________________________________________________________________________________________________________________________" << endl;	
    cout << "\t\t=== WELCOME TO LANCE BIG SCOOPS ===" << endl;
    cout << "____________________________________________________________________________________________________________________________" << endl;
    
    cout << "!!!PROMO AVAILABLE TODAY - Get 3+ scoops of our new flavor Premium Chocolate Brownies OR Spend ₱100+ to get 15% discount!!!" << endl;

    while (go) {
        cout << "\n--- ICE CREAM FLAVORS ---" << endl;
        cout << "1. Vanilla - ₱20 per scoop" << endl;
        cout << "2. Chocolate - ₱20 per scoop" << endl;
        cout << "3. Premium Chocolate Brownies - ₱28 per scoop" << endl;
        cout << "4. Mango Royal - ₱25 per scoop" << endl;
        cout << "5. Oreo Cookies & Cream - ₱23 per scoop" << endl;
        cout << "0. Finish Order" << endl;
        cout << "Choose your flavor (0–5): ";
        cin >> flavorChoice;

        if (flavorChoice == 0) {
            go = false;
        }
        else if (flavorChoice >= VANILLA && flavorChoice <= OREO_COOKIESCREAM) {
            cout << "How many scoops? ";
            cin >> scoops;

            if (flavorChoice == VANILLA || flavorChoice == CHOCOLATE)
                pricePerScoop = 20;
            else if (flavorChoice == PREMIUM_CHOCOLATE_BROWNIES)
                pricePerScoop = 28;
            else if (flavorChoice == MANGO_ROYAL)
                pricePerScoop = 25;
            else if (flavorChoice == OREO_COOKIESCREAM)
                pricePerScoop = 23;

            int subtotal = pricePerScoop * scoops;


            if (flavorChoice == PREMIUM_CHOCOLATE_BROWNIES)
                totalBrownieScoops += scoops;

            cout << "\n--- TOPPINGS MENU ---" << endl;
            cout << "1. Sprinkles (+₱5)" << endl;
            cout << "2. Chocolate Chips (+₱10)" << endl;
            cout << "3. Syrup (+₱8)" << endl;
            cout << "4. Marshmallows (+₱7)" << endl;
            cout << "0. No Topping" << endl;
            cout << "Choose your topping (0–4): ";
            cin >> toppingChoice;

            if (toppingChoice == SPRINKLES)
                subtotal += 5;
            else if (toppingChoice == CHOCOLATE_CHIPS)
                subtotal += 10;
            else if (toppingChoice == CHOCOLATE_SYRUP)
                subtotal += 8;
            else if (toppingChoice == MARSHMALLOWS)
                subtotal += 7;
            else if (toppingChoice == NONE || toppingChoice > 4)
                cout << "No topping added.\n";

            totalBeforeDiscount += subtotal;
            cout << "Ice cream added! Subtotal: ₱" << subtotal << endl;
            cout << "Current total (before discount): ₱" << totalBeforeDiscount << endl;
        }
        else {
            cout << "Invalid flavor, please try again.\n";
        }
    }


    bool discountApplied = false;
    if (totalBeforeDiscount >= 100 || totalBrownieScoops >= 3) {
        finalTotal = totalBeforeDiscount * (1 - discount);
        discountApplied = true;
    }
    else {
        finalTotal = totalBeforeDiscount;
    }

    cout << "\n=== ORDER SUMMARY ===" << endl;

    if (totalBeforeDiscount > 0) {
        cout << "Total before discount: ₱" << totalBeforeDiscount << endl;
        if (discountApplied)
            cout << "Discount applied (15% off)!" << endl;
        cout << "Final total: ₱" << finalTotal << endl;
    }
    else {
        cout << "No ice cream ordered." << endl;
    }

    cout << "Thank you for visiting LANCE BIG SCOOPS!" << endl;

    return 0;
}