#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// GROUP 8 MEMBERS:
// 1. Genavia, Jhon Wilson M.
// 2. Esquilador, Jose Miguel T.
// 3. Pontillas, Rhian Jane P.

/*To find the line of code u want, use Ctrl + F using
the names of the labels listed below:

• start              • menu

• registration       • View Membership Plans
• login              • View My Account
• exit               • Update My Account Details
                     • Renew My Membership
                     • Make a Payment
                     • Check My Membership Status
                     • Logout
*/

int main(){
    short choice;
    string fullName, email, password;
    start:

    SetConsoleOutputCP(CP_UTF8);

    cout << "\033[94m";
        cout << R"(  
                    ╔═╗╦ ╦╔╦╗
                    ║ ╦╚╦╝║║║
                    ╚═╝ ╩ ╩ ╩)";
    cout << "\033[96m";
        cout << R"(
╔╦╗╔═╗╔╦╗╔╗ ╔═╗╦═╗╔═╗╦ ╦╦╔═╗  ╔═╗╦ ╦╔═╗╔╦╗╔═╗╔╦╗
║║║║╣ ║║║╠╩╗║╣ ╠╦╝╚═╗╠═╣║╠═╝  ╚═╗╚╦╝╚═╗ ║ ║╣ ║║║
╩ ╩╚═╝╩ ╩╚═╝╚═╝╩╚═╚═╝╩ ╩╩╩    ╚═╝ ╩ ╚═╝ ╩ ╚═╝╩ ╩)";

    cout << "\033[32m";

        cout << "\nHello, welcome to the Gym Membership Management System!" << endl;

    cout << "\033[0m";

    cout << "Please select an option[1-3]:" << endl;
        cout << "\n   [1] Register" << endl;
        cout << "   [2] Login" << endl;
        cout << "   [3] Exit" << endl;
        cout << "\n\nEnter your choice: ";
        cin >> choice;
            cin.ignore(10000, '\n');

// Handle the user's choice
    switch (choice) {
        case 1:
        registration:
            cout << "Welcome to the Registration Page!" << endl;

                cout << "Full Name: ";
                    getline(cin, fullName);
                    cout << "\n";
                cout << "Email: ";
                    getline(cin, email);
                    cout << "\n";
                cout << "Password: ";
                    getline(cin, password);
                    cout << "\n";

            if (fullName.empty() || email.empty() || password.empty()) {
                cout << "All fields are required. Please try again." << endl;
                goto registration;
            }            goto menu;

        case 2:
        login:
            cout << "You selected Login." << endl;
            cout << "Email: ";
            getline(cin, email);
            cout << "\nPassword: ";
            getline(cin, password);

            if (email.empty() || password.empty()) {
                cout << "All fields are required. Please try again." << endl;
                goto login;
            }
            goto menu;

        case 3:
        exit:
            cout << "Exiting the program." << endl;
            goto start;

        default:
            cout << "Invalid choice. Please try again." << endl;
            goto start;
        }

//
//   SPACERS
//

menu:
    for (int i = 0; i < 50; ++i) {
        cout << '\n';
    }
    cout << "\033[96m";
    cout << R"(
            ╔╦╗╔═╗╔╗╔╦ ╦
            ║║║║╣ ║║║║ ║
            ╩ ╩╚═╝╝╚╝╚═╝)" << endl;
    cout << "\033[0m";
    short choiceM;

    cout << "Welcome, " << fullName << "!" << endl;

    cout << "\n[1] View Membership Plans\n";
    cout << "[2] View My Account\n";
    cout << "[3] Update My Account Details\n";
    cout << "[4] Renew My Membership\n";
    cout << "[5] Make a Payment\n";
    cout << "[6] Check My Membership Status\n";
    cout << "[7] Logout\n";
    cout << "\n\nEnter your choice: ";
    cin >> choiceM;
    
    cin.ignore(10000, '\n');

    switch(choiceM) {
    case 1:
        cout << "\n\n\n\n";
        cout << "You selected: View Membership Plans." << endl;
        break;

    case 2:
        cout << "\n\n\n\n";
        cout << "You selected: View My Account." << endl;
        break;

    case 3:
        cout << "\n\n\n\n";
        cout << "You selected: Update My Account Details." << endl;
        break;

    case 4:
        cout << "\n\n\n\n";
        cout << "You selected: Renew My Membership." << endl;
        break;

    case 5:
        cout << "\n\n\n\n";
        cout << "You selected: Make a Payment." << endl;
        break;

    case 6:
        cout << "\n\n\n\n";
        cout << "You selected: Check My Membership Status." << endl;
        break;

    case 7:
        cout << "\n\n\n\n";
        cout << "You selected: Logout." << endl;
        goto start;

    default:
        cout << "\n\n\n\n";
        cout << "Invalid choice. Please try again." << endl;
        goto menu;
        

    }
    return 0;
}