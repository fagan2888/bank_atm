#include "../../models/headers/my_funcs.h"
#include "../../models/headers/Account.h"

#include<iostream>

int main_menu() {
    print("_______ Main Menu _______");
    print("1. Users Login ");
    print("2. Admin Login ");
    print("3. Create Account");
    print("4. Exit ");
    print(" ");
    printSL("\n*  Enter Command #:      ");
    int cmd;
    std::cin  >> cmd;
    return cmd;
}

// void user_info(int* usrnm, int* pswrd) {
//     int* arr = 
// }

int user_login() {
    print("\n_______ User Login _______");
    int rand_var1;
    int rand_var2;
    std::cin >> rand_var1;
    std::cin >> rand_var2;
    int* arr = new int[2];
    arr[0] = rand_var1;
    arr[1] = rand_var2;
    return arr;
}


std::string get_username() {
    printSL("\nEnter Username:          ");
    std::string username;
    std::cin >> username;
    return username;
}

std::string get_password() {
    printSL("Enter Password:          ");
    std::string password;
    std::cin >> password;
    return password;
}

void create_account() {
    print("\n_______ Create Account _______");
    int acnt_num;
    std::string type, username, password, first_nm, last_nm;
    printSL("Enter Account Number:    ");
    std::cin >> acnt_num;
    printSL("Type (User or Admin):    ");
    std::cin >> type;
    printSL("Enter First Name:        ");
    std::cin >> first_nm;
    printSL("Enter Last  Name:        ");    
    std::cin >> last_nm;
    printSL("Enter Username:          ");
    std::cin >> username;
    printSL("Enter Password:          ");
    std::cin >> password;
}

void user_menu() {
    print("1. Deposit");
    print("2. Withdraw");
    print("3. History");
}