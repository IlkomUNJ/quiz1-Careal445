#include <iostream>
#include "bank_customer.h"
#include "buyer.h"

enum PrimaryPrompt{LOGIN, REGISTER, EXIT};

using namespace std;

int main() {
    //create a loop prompt 
    PrimaryPrompt prompt = LOGIN;
    while (prompt != EXIT) {
        cout << "Select an option: " << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cin >> choice;
        prompt = static_cast<PrimaryPrompt>(choice - 1);
        switch (prompt) {
            case LOGIN: {
                cout << "Login selected. Please enter your username: ";
                string username;
                cin >> username;
                cout << "Enter your password: ";
                string password;
                cin >> password;
                // Simulate login success
                cout << "Login successful!\n";
                bool loggedIn = true;
                while (loggedIn) {
                    cout << "\n--- User Menu ---" << endl;
                    cout << "1. Check Account Status" << endl;
                    cout << "2. Upgrade Account to Seller" << endl;
                    cout << "3. Bank Account Functions" << endl;
                    cout << "4. Logout" << endl;
                    int userChoice;
                    cin >> userChoice;
                    switch (userChoice) {
                        case 1:
                            cout << "[Stub] Displaying account status..." << endl;
                            break;
                        case 2: {
                            cout << "[Seller Upgrade] Enter Store Name: ";
                            string storeName;
                            cin >> storeName;
                            cout << "Enter Store Address: ";
                            string storeAddress;
                            cin >> storeAddress;
                            cout << "Enter Store Phone: ";
                            string storePhone;
                            cin >> storePhone;
                            cout << "Enter Store Email: ";
                            string storeEmail;
                            cin >> storeEmail;
                            cout << "[Stub] Seller account upgrade requested." << endl;
                            break;
                        }
                        case 3: {
                            bool bankMenu = true;
                            while (bankMenu) {
                                cout << "\n--- Bank Account Functions ---" << endl;
                                cout << "1. Create Bank Account" << endl;
                                cout << "2. Check Balance" << endl;
                                cout << "3. Deposit" << endl;
                                cout << "4. Withdraw" << endl;
                                cout << "5. Transaction History" << endl;
                                cout << "6. Back to User Menu" << endl;
                                int bankChoice;
                                cin >> bankChoice;
                                switch (bankChoice) {
                                    case 1:
                                        cout << "[Bank] Enter initial deposit: ";
                                        double deposit;
                                        cin >> deposit;
                                        cout << "Enter Address: ";
                                        {
                                            string addr; cin >> addr;
                                        }
                                        cout << "Enter Phone: ";
                                        {
                                            string phone; cin >> phone;
                                        }
                                        cout << "Enter Email: ";
                                        {
                                            string email; cin >> email;
                                        }
                                        cout << "[Stub] Bank account created." << endl;
                                        break;
                                    case 2:
                                        cout << "[Stub] Checking balance..." << endl;
                                        break;
                                    case 3:
                                        cout << "[Stub] Deposit function..." << endl;
                                        break;
                                    case 4:
                                        cout << "[Stub] Withdraw function..." << endl;
                                        break;
                                    case 5:
                                        cout << "[Stub] Transaction history..." << endl;
                                        break;
                                    case 6:
                                        bankMenu = false;
                                        break;
                                    default:
                                        cout << "Invalid option." << endl;
                                }
                            }
                            break;
                        }
                        case 4:
                            cout << "Logging out..." << endl;
                            loggedIn = false;
                            break;
                        default:
                            cout << "Invalid option." << endl;
                    }
                }
                break;
            }
            case REGISTER: {
                cout << "Register selected. Please enter your name: ";
                string name;
                cin >> name;
                cout << "Enter Home Address: ";
                string address;
                cin >> address;
                cout << "Enter Phone number: ";
                string phone;
                cin >> phone;
                cout << "Enter Email: ";
                string email;
                cin >> email;
                cout << "Do you want to register as a Seller as well? (y/n): ";
                char sellerOpt;
                cin >> sellerOpt;
                if (sellerOpt == 'y' || sellerOpt == 'Y') {
                    cout << "Enter Store Name: ";
                    string storeName;
                    cin >> storeName;
                    cout << "Enter Store Address: ";
                    string storeAddress;
                    cin >> storeAddress;
                    cout << "Enter Store Phone: ";
                    string storePhone;
                    cin >> storePhone;
                    cout << "Enter Store Email: ";
                    string storeEmail;
                    cin >> storeEmail;
                    cout << "[Stub] Seller account created and linked to Buyer." << endl;
                }
                cout << "[Stub] Buyer account created and logged in." << endl;
                break;
            }
            case EXIT:
                cout << "Exiting." << std::endl;
                break;
            default:
                cout << "Invalid option." << endl;
                break;
        }
        cout << endl;
    }

    //BankCustomer customer1(1, "Alice", 1000.0);
    //Buyer buyer1(1, customer1.getName(), customer1);
    return 1;
}
