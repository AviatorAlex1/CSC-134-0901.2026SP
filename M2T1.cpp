// CSC 134
// M2T1
// Rodrigua4692
// 09 FEB 2026

// Checkout 
#include <iostream>
using namespace std;

int main() {
//Apple Orchard
// Set up Variables
    string first_name, last_name, full_name; //Customer's name
    string product = "apples"; 
    int amount_purchased;
    double costs_each = 0.25; //Cost per apple 
    double total_cost; //Total cost
    
    //Greet the customer
    cout << "Welcome to our " << product << " store! " << endl;
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Hello, " << full_name << "! Nice to meet you!" << endl;
    cout << "We have " << apples;
    cout << " apples in stock." << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;

    //Ask how much they'd like to purchase? 
    cout  << " How many " << product << " would you like today? ";
    cin >> amount_purchased;

    //Calculate
    total_cost = amount_purchased * costs_each;

    //Give the result
    cout << "For " << amount_purchased << " " << product << endl; 
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    
    cout << endl;
    return 0;