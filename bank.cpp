#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<string>
using namespace std;

class Account {
    private:
        int acnt_num;               // 00011120302
        string type;                  // User or Admin
        string username;            // ex. julio1021
        string password;            // ex. is_password
        string first_nm;            // ex. Julio
        string last_nm;             // ex. Cernadas
    public:
        // Account
        void create_acnt(int acnt_num_I, string type_I, string username_I,string password_I, string first_nm_I, string last_nm_I) {
            acnt_num = acnt_num_I;
            type     = type_I;
            username = username_I;
            password = password_I;
            first_nm = first_nm_I;
            last_nm  = last_nm_I;
        }
        void show_acnt() {

        }

        // Getters
        int get_acnt_num() {return acnt_num;}
        string get_acnt_type() {return type;}
        string get_name() {return first_nm + " " + last_nm;}

        // Delete
        void delete_acnt() {

        }
};

class User : public Account {
    private:
        float balance;
        int pin;
    public:
        void deposit();
        void withdraw();
        void report();

};

class Admin : public Account {
    private:
        int admin_req;
    public:
        void user_reports();
        void user_search();
};

int main() 
{
    int acnt_num_I;
    string type_I;
    string username_I;
    string password_I;
    string first_nm_I;
    string last_nm_I;
    cout << "Enter Account #: ";
    cin >> acnt_num_I;
    cout << "Enter Account Type: ";
    cin >> type_I;
    cout << "Enter Username: ";
    cin >> username_I;
    cout << "Enter Password: ";
    cin >> password_I;
    cout << "Enter First Name: ";
    cin >> first_nm_I;
    cout << "Enter Last Name: ";
    cin >> last_nm_I;
    Account accountI; 
    accountI.create_acnt(acnt_num_I, type_I, username_I, password_I,
    first_nm_I, last_nm_I);
    cout << accountI.get_acnt_num() << endl;
    return 0;
}