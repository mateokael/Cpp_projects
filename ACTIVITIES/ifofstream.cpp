// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){
//     ofstream pasokFile("data.txt", ios::app);

//     pasokFile << "tite";
//     pasokFile << 123 + 1;
    
//     pasokFile.close();



// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {


    int cash = 1;
    ifstream moneyIn("money.txt");
    if (moneyIn.is_open()) {
        string label;
        moneyIn >> label >> label >> cash; 
        moneyIn.close();
    }
    // string filename = "numbers.txt";
    // double number;

    // cout << "=== Number Saver Program ===\n";
    // cout << "Enter a number to save (0 to stop):\n";

    // ofstream outFile(filename, ios::app); // open file in append mode
    // if (!outFile) {
    //     cout << "Error opening file!" << endl;
    //     return 1;
    // }

    // // keep taking input
    // while (true) {
    //     cout << "Number: ";
    //     cin >> number;
    //     if (number == 0) break;  // exit when user enters 0
    //     outFile << number << endl;
    //     cout << "Saved " << number << " to file!\n";
    // }

    // outFile.close();

    
    // cout << "\n=== All Numbers in File ===\n";
    // ifstream inFile(filename);
    // int total = 0;
    // int line;
    // while (inFile >> line) {
    //     total += line;
    // }
    // inFile.close();

    // cout << "===========================\n";
    // cout << "Program finished.\n";

    // cout << total;
    return 0;
}
