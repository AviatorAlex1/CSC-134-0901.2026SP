// CSC 134
// M1LAB
// Rodrigua4692
// 17 JAN 2026

#include <iostream>
using namespace std;
int main() {
//Apple Orchard
    string name = "Jane Smith" ;
    int apples = 100 ;
    double pricePerApple = 0.25 ;
    
    cout << "Welcome to " << name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock." << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;
//Calculate the total price of the apples
    double totalPrice = apples * pricePerApple;
    cout << "If you want them all, that will be $" << totalPrice<< endl;

    return 0;
}
