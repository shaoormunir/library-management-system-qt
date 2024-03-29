#ifndef USER_H
#define USER_H


#include<iostream>
#include<string>
#include<vector>
#include<ctime>

using namespace std;

class LoanItem;

class User {

protected:
    int id;
    string name;
    string user_name;
    string phone_number;
    string address;
    string password;
    vector <LoanItem *> loans;

public:
    User(int id = 0, string name ="", string uname="", string phone_number = "", string address ="", string password = "");
    void add_loanItem(LoanItem *item);
    string get_username();
    string get_name();
    string get_address();
    string get_number();
    string get_password();
    int get_id();
    virtual string return_type() = 0;
    vector<LoanItem *> return_pending_loans();
    vector<LoanItem *> return_loans();
    void update_info(string name, string uname, string address, string phoneNumber, string password);
    bool remove_loan_by_id(int loanID, bool self_call = true);
    void delete_all_loans();
    void return_item(int loanID);
};

#endif // USER_H
