// include necessary libraries
#include <iostream>
using namespace std;

int balance = rand() % 1000;

void showBalance();

// declare main function
int main(int argc, char **argv)
{
    // output program intro
    cout << endl;
    cout << "****************************** Skyline Bank *************************************" << endl
         << endl;

    srand(time(NULL));
    int amount;
    char confirmation;

    int choise;
    cout << "Welcome to Skyline Bank!" << endl
         << endl;
    do
    {
        cout << "What operation would you like to do?" << endl;
        cout << "1 for Money Operations | 2 for Loans | 3 for Stock Market" << endl;
        cout << "Enter: ";
        cin >> choise;
        if (choise == 1)
        {
            cout << endl;
            cout << "1 for Money Deposit | 2 for Money Withdrawal" << endl;
            cout << "Enter: ";
            cin >> choise;
            if (choise == 1)
            {
                cout << endl;
                showBalance();
                cout << "Enter a sum you would like to deposit: $";
                cin >> amount;
                cout << "Are you sure you want to deposit $" << amount << " to your account? (Y / N): ";
                cin >> confirmation;
                if (confirmation == 'y' || confirmation == 'Y')
                {
                    cout << endl;
                    balance += amount;
                    cout << "Congratulations! You have successfully depositted $" << amount << " into your account." << endl;
                    cout << "Would you like to continue? (Y / N): ";
                    cin >> confirmation;
                    if (confirmation == 'y' || confirmation == 'Y')
                    {
                        cout << endl;
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    cout << endl;
                    cout << "Operation cancelled. If you did it by acident, please try again." << endl
                         << endl;
                    continue;
                }
            }
            else if (choise == 2)
            {
                cout << endl;
                showBalance();
                cout << "How much money would you like to withdraw?: $";
                cin >> amount;
                cout << "Are you sure you want to withdraw $" << amount << " from your account? (Y / N): ";
                cin >> confirmation;
                if (amount <= balance)
                {
                    if (confirmation == 'Y' || confirmation == 'y')
                    {
                        cout << endl;
                        balance -= amount;
                        cout << "Congratulations! You successfully withdrew $" << amount << " from your wallet." << endl;
                        cout << "Your current balance is $" << balance << endl;
                        cout << "Would you like to continue? (Y / N): ";
                        cin >> confirmation;
                        if (confirmation == 'y' || confirmation == 'Y')
                        {
                            cout << endl;
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                else
                {
                    cout << endl;
                    cout << "Oops! You don't have sufficient funds to complete the transaction, try again later." << endl
                         << endl;
                    continue;
                }
            }
        }
        else if (choise == 2)
        {
            cout << endl;
            cout << "Oops! This section is under development :(" << endl;
        }
        else if (choise == 3)
        {
            cout << endl;
            cout << "Oops! This section is under development :(" << endl;
        }
        else
        {
            cout << endl;
            cout << "You entered an invalid choice, would you like to continue? (Y / N): ";
            cin >> confirmation;
            if (confirmation == 'y' || confirmation == 'Y')
            {
                cout << endl;
                continue;
            }
            else
            {
                break;
            }
        }
    } while (choise != 0);

    // output project outro
    cout << endl;
    cout << "**********************************************************************************" << endl
         << endl;

    // end main function
    return 0;
}

void showBalance()
{
    cout << "Your current balance is $" << balance << endl;
}