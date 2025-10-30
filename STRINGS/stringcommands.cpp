#include <iostream>
#include <string>
using namespace std;


// void getchar(string word){
//     // string word;
//     int num;

//     // cin >> word;

//     while(true){
//     cin >> num;
//     if (num < word.length() and num >= 0) {

//      cout << word[num-1];
        
//          break;
//     }
//     else{
//        cout << "tryagain";
   
//     }


// }

// }

// void substr(string word){
//     int start, count;


//     while(true){
//         cin >> start;
//         cin >> count;
//     if(start >= 0 and start <= word.length()){
//         cout << word.substr(start-1, count);
//         break;}
//     else{
//         cout << "try again";
//     }
// }
//     }
        

// void replace(string word){
//     int start, end;
//     string repWord;


//     while(true){
//         cin >> start;
//         cin >> end;
//         cin >> repWord;
//     if(start >= 0 and start < word.length()){
//         cout <<word.replace(start -1, end,repWord);
//         break;}
//     else{ 
//         cout << "try agian";
        

//     }
//     }
// }

// void insert(string word){
//     int start;
//     string ins;

//     while(true){
//         cin >> start;
//         cin >> ins;

//         if (start >= 0){
//             cout << word.insert(start - 1, ins);
//             break;
//         }
//         else{
//             cout << "try again";
//         }
//     }
// }


// void erase(string word){
//     int start, end;

//     while(true){

//         cin >> start;
//         cin >> end;

//         if()

//     }

// }


int main(){
    string word;
    int num, digits;

    cin >> word;


    cin >> num;
    if (num < word.length() and num >= 0) {
       cout << word[num-1];
    }
    // cout << word[0];

    // cout << word[word.length()-1];

    // cin >> num;

    //  digits = to_string(num).length();
    // cout << digits;

     // replace(word);
    // getchar(word);
    //  substr(word);
    // insert(word);
return 0;

}

