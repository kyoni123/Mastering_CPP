#include <iostream>

using namespace std;

void withdraw(int &money);
void deposit(int &money);
void view(int money);

int main()    {
    int money = 1000;
    int choice;
    string menu[] {"Withdraw", "Deposit", "View Balance", "Exit"};
    
    while (true) {
        cout << "Simple ATM Machine" << endl << endl;
        
        for (int i = 0; i< 4; i++) {
            cout << "[" << (i+1) << "] " << menu[i] << endl;
        }
        cout << endl << "Enter choice: ";
        cin >> choice;
        
        cout << endl << endl;
        
        switch(choice)    {
            case 1:
            withdraw(money);
            break;
            
            case 2:
            deposit(money);
            break;
            
            case 3:
            view(money);
            break;
            
            case 4:
            return 0;
            
            default:
            cout << "Invalid Option..." << endl;
            system("pause");
            system("cls");
        }
    }
}

void withdraw(int &money)    {
    system("cls");
    int amount;
    
    cout << "Cash Withdrawal..." << endl << endl;
    cout << "Please enter amount: ";
    cin >> amount;
    
    if (amount <= 0 || amount > money)    {
        cout << "Invalid amount. Please try again..." << endl;
    }
    else    {
        money = money - amount;
        cout << "\n\nWithdrawed Amount: " << amount << "\nAvailable Balance: " << money << endl << endl;
    }
   
    system("pause");
    system("cls");
}

void deposit(int &money) {
    system("cls");
    int amount;
    
    cout << "Cash Deposit..." << endl << endl;
    cout << "Please enter amount: ";
    cin >> amount;
    
    if (amount <= 0)    {
        cout << "Invalid amount. Please try again..." << endl;
    }
    else    {
        money = money + amount;
        cout << "\n\nDeposited Amount: " << amount << "\nUpdated Balance: " << money << endl << endl;
    }
    
    system("pause");
    system("cls");
}

void view(int money)    {
    system("cls");
    cout << "Balance: " << money << endl;
    
    system("pause");
    system("cls");
}