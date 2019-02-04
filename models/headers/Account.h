#pragma once
#include <iostream>

class User {
private:
    int acnt_num;        
    std::string type, username, password, first_nm, last_nm;  
public:
    User(int acnt_num_I, std::string type_I, std::string username_I,
    std::string password_I, std::string first_nm_I, std::string last_nm_I);
    
    void show_acnt();
    void deposit();

    // Getters
    int get_acnt_num() {return acnt_num;}
    std::string get_acnt_type() {return type;}
    std::string get_name() {return first_nm + " " + last_nm;}
};

class Admin {
private:      
    std::string type, username, password, first_nm, last_nm;  
public:
    User(std::string type_I, std::string username_I, std::string password_I,
    std::string first_nm_I, std::string last_nm_I);
};

