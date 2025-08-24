#include <iostream>
#include <windows.h> // sleep, system
#include <conio.h>   // getch
#include <limits>    // numeric_limits

using namespace std;


class Banking{
    int completed;
    string id;
    struct customer{
        string ID, name, fname, address, phone, idCard;
        int cash;
    } customer[100];
    public:
        Banking(){
            completed = 0;

        }

    public:
    void options();
    void newAccount();   
    void display();  
    void update();   
    void search();
    void transaction();
    void logout();
    
};

int main() {
    string user_name, user_name1;
    int user_pin, user_pin1;

    cout << "\n\n\n\t\t\t\t\t\t Bank Management System (OOPs) in C++ \n\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------";
    cout << "\n\t\t\t\t\t\t\t Sign Up Here \n";

    cout << "Enter Your Full Name: ";
    getline(cin, user_name);

    cout << "Enter Your 4 Digit Pin: ";
    cin >> user_pin;

    cout << "Your Account is creating, Please Wait ";
    for(int i=0 ; i<3 ; i++){
        cout << ".";
        Sleep(1000);
    }

    cout << "\n\nAccount created successfully! Welcome, " << user_name << ".\n";

    system("CLS");

previouslogin:
    cout << "\n\t\t\t\t\t\t\t Login Here \n";

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
    cout << "Enter Your Name: ";
    getline(cin, user_name1);

    cout << "Enter Your 4 Digit Pin: ";
    cin >> user_pin1;

    if(user_name == user_name1 && user_pin == user_pin1) {
        system("CLS");
        cout << "\nLogin Successful! Welcome back, " << user_name1 << ".\n";
        Banking obj;
        obj.options();
        
    } 
    else if(user_name != user_name1) {
        cout << "Incorrect Username!\n";
        goto previouslogin;
    } 
    else if(user_pin != user_pin1) {
        cout << "Incorrect Pin!\n";
        goto previouslogin;
    }

    return 0;
}

void Banking::options(){
    char select;
    while(1){
        cout << "Press 1 for Creating New Account." << endl;
        cout << "Press 2 for Displaying the Customer Information." << endl;
        cout << "Press 3 for Updating Customer Information." << endl;
        cout << "Press 4 for Searching for Specific Customer." << endl;
        cout << "Press 5 for Transaction Operations like Deposit and Withdraw." << endl;
        cout << "Press 6 for Logout." << endl; 
        select = getch();
        switch(select){
            case '1':
                system("CLS");
                Banking::newAccount();
                break;
            case '2':
                system("CLS");  
                Banking::display();    
                break;
            case '3':
                system("CLS");  
                Banking::update(); 
                break;
            case '4':
                system("CLS");
                Banking::search();
                break;                     
            case '5':
                system("CLS");
                Banking::transaction();
                break; 
            case '6':
                system("CLS");
                Banking::logout();
                break; 
                
            default:
                cout << "Invalid Operation!" << endl;    
        }
    }
}

void Banking::newAccount(){
    cout << "\n\nNew Account Creating." << endl;
    // cout << "Enter the Record of Customer " << completed+1 << endl;
    cout << "Enter your ID: ";
    cin >> customer[completed].ID;
    cout << "Enter your Name: ";
    cin >> customer[completed].name;
    cout << "Enter your Father's Name: ";
    cin >> customer[completed].fname;
    cout << "Enter your Phone Number: ";
    cin >> customer[completed].phone;
    cout << "Enter your ID Card Number: ";
    cin >> customer[completed].idCard;
    cout << "Enter your Cash: ";
    cin >> customer[completed].cash;
    completed++;
}
void Banking::display(){
    for(int i=0 ; i<completed ; i++){
        // cout << "Record of Customer " << customer+1 << endl;
        cout << "Customer Unique ID: " << customer[i].ID << endl;
        cout << "Customer Name: " << customer[i].name << endl;
        cout << "Customer Father's Name: " << customer[i].fname << endl;
        cout << "Customer Phone No: " << customer[i].phone << endl;
        cout << "Customer ID Card Number: " << customer[i].idCard << endl;
        cout << "Customer Amount: " << customer[i].cash << endl;
    }
}

void Banking::update(){
    cout << "Enter the ID of Customer for updating the information.";
    cin >> id;
    for(int i=0 ; i<completed ; i++){
        if(id == customer[i].ID){
            cout << "Existing Record of Customer." << endl << endl;
            cout << "Customer Unique ID: " << customer[i].ID << endl;
            cout << "Customer Name: " << customer[i].name << endl;
            cout << "Customer Father's Name: " << customer[i].fname << endl;
            cout << "Customer Phone No: " << customer[i].phone << endl;
            cout << "Customer ID Card Number: " << customer[i].idCard << endl;
            cout << "Customer Amount: " << customer[i].cash << endl;

            cout << "\n\nUpdating the Customer Information" << endl;
            cout << "Enter your ID: ";
            cin >> customer[i].ID;
            cout << "Enter your Name: ";
            cin >> customer[i].name;
            cout << "Enter your Father's Name: ";
            cin >> customer[i].fname;
            cout << "Enter your Phone Number: ";
            cin >> customer[i].phone;
            cout << "Enter your ID Card Number: ";
            cin >> customer[i].idCard;
            cout << "Enter your Cash: ";
            cin >> customer[i].cash;
            completed++;
        }
        else if(i==completed-1){
            cout << "Customer Record NOT FOUND!";
        }
    }
}

void Banking::search(){
    cout << "Enter the ID of Customer for searching the information: ";
    cin >> id;
    for(int i=0 ; i<completed ; i++){
        if(id == customer[i].ID){
            cout << "Customer's Record FOUND!" << endl << endl;
            cout << "Customer Unique ID: " << customer[i].ID << endl;
            cout << "Customer Name: " << customer[i].name << endl;
            cout << "Customer Father's Name: " << customer[i].fname << endl;
            cout << "Customer Phone No: " << customer[i].phone << endl;
            cout << "Customer ID Card Number: " << customer[i].idCard << endl;
            cout << "Customer Amount: " << customer[i].cash << endl;
        }
        else if(i==completed-1){
            cout << "Customer Record NOT FOUND!";
        }
    }
}

void Banking::transaction(){
    char select;
    int cash1;
    cout << "Enter the ID of Customer for Transaction Operation: ";
    cin >> id;
    for(int i=0 ; i<completed ; i++){
        if(id == customer[i].ID){
            cout << "Customer's Record FOUND!" << endl << endl;
            cout << "Customer Name: " << customer[i].name << endl;
            cout << "Customer Existing Amount: " << customer[i].cash << endl;

            cout << "Press 1 to Deposit Amount: " << endl;
            cout << "Press 2 to Withdraw Amount: " << endl;

            select = getch();

            switch(select){
                case '1':
                    cout << "Enter the amount to deposit: ";
                    cin >> cash1;
                    cout << "Your Transaction is in Process, Please Wait! ";
                    Sleep(2000);
                    customer[i].cash += cash1; 
                    cout << "Transaction DONE! " << endl;
                    cout << "New Amount: " << customer[i].cash << endl;
                    break;

                case '2':
                    previousWithdraw:
                    cout << "Enter the amount to withdraw: ";
                    cin >> cash1;
                    if(cash1 > customer[i].cash){
                        cout << "Insufficient BALANCE! " << endl;
                        goto previousWithdraw;
                    }
                    cout << "Your Transaction is in Process, Please Wait! ";
                    Sleep(2000);
                    customer[i].cash -= cash1; 
                    cout << "Transaction DONE! " << endl;
                    cout << "Existing Amount: " << customer[i].cash << endl;
                    break;  
            }
        }
        else if(i==completed-1){
            cout << "Customer Record NOT FOUND!";
        }
    }
}

void Banking::logout(){
    exit(0);
}