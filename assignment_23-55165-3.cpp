#include <iostream>
using namespace std;

int main()
{
    double currentBalance;
    double withdrawAmount;
    double transferAmount;
    double accountNumber;
    char transactionType;
    double recentWithdrawal;
    double recentTransfer;
    char menu;
    cout << "Enter Your Current Balance : ";
    cin >> currentBalance;


    do {
        cout << endl;
        cout << "1. Withdraw Money " << endl;
        cout << "2. Transfer Money " << endl;
        cout << "3. Check Your Recent Transaction " << endl << endl;
        cout << "Please choose an option (1 - 3) to continue, ";
        cout << "Otherwise Enter 0 to exit." << endl;
        cin >> menu;



        switch (menu) {
            case '1': {

                cout << endl;
                cout << "Please choose the amount you would like to withdraw: ";
                cin >> withdrawAmount;

                if (withdrawAmount > currentBalance) {
                    cout << "Insufficient funds. Transaction canceled." << endl;
                } else {
                    currentBalance -= withdrawAmount;
                    cout << "Withdrawal successful. Updated balance: " << currentBalance << endl;
                }
                    recentWithdrawal += withdrawAmount;

            } break;


            case '2': {
                cout << endl;
                cout << "Enter the recipient's account number: ";
                cin >> accountNumber;

                cout << endl;
                cout << "Enter the amount you want to transfer: ";
                cin >> transferAmount;
                cout << endl;

                if (transferAmount > currentBalance) {
                    cout << "Insufficient funds. Transfer canceled." << endl;
                } else {
                    currentBalance -= transferAmount;
                    cout << "Transfer successful to account " << accountNumber << endl;
                    cout << "Updated balance: " << currentBalance << endl;
                }
                    recentTransfer += transferAmount;

            } break;

            case '3': {
                cout << endl;
                cout << "Displaying recent transactions..." << endl;
                if (recentWithdrawal==0&&recentTransfer==0){
                    cout << "No recent transactions." << endl;

                } else {
                    cout << "Recent Withdrawal: " << recentWithdrawal << endl;
                    cout << "Recent Transfer: " << recentTransfer << endl;

                }
            } break;

            case '0':
                cout << endl;
                cout << "Exiting the program. Thank You." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        }

    } while (menu != '0');

    return 0;
}
