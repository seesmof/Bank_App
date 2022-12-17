// include necessary libraries
#include <bits/stdc++.h>
using namespace std;

struct userData
{
    string name;
    int age;
    string password;
    long double balance;
};

// function prototypes //
void showBalance(long double balance)
{
    cout << "\nYour current balance is $" << balance << "\n";
    return;
}
/////////////////////////

// declare main function
int main()
{
    // declare local variables //
    srand(time(NULL));
    char doContinue, userDecision;
    vector<userData> user(4);
    int userIndex, sessionNumber = 0;
    string userHolder, passHolder;
    bool doRemember = false;
    /////////////////////////////

    // project intro
    cout << "\n/////////////////////////////////////////////////////////////\n"
         << "\nWelcome to Skyline Bank!\n"
         << "\n/////////////////////////////////////////////////////////////\n\n";
    do
    {
        //////////////////////////////////////////////////////////////////////////////////
        cout << "Do you already have an account? (Y | N) ";
        cin >> userDecision;

        string tempName, tempPassword;
        if (userDecision == 'N' || userDecision == 'n')
        {
            cout << "\nWould you like to register? (Y | N) ";
            cin >> userDecision;

            if (userDecision == 'N' || userDecision == 'n')
            {
                cout << "\nThanks for using this program\n"
                     << "\n/////////////////////////////////////////////////////////////\n\n";
                break;
            }

            userIndex = sessionNumber;
            cout << "\nEnter your name: ";
            cin >> user.at(userIndex).name;
            cout << "Enter your full age: ";
            cin >> user.at(userIndex).age;
            int age = (int)user.at(userIndex).age;
            if (age < 18)
            {
                cout << "\nUnfortunately, you are not allowed to have an account yet.\n";
                break;
            }
            cout << "Enter your password: ";
            cin >> user.at(userIndex).password;

            cout << "\nCongratulations, " << user.at(userIndex).name << ", you have successfully created a new account!\n";
            cout << "As a bonus, you will recieve $50 to your account!\n";
            user.at(userIndex).balance += 50.0;

            userHolder = user.at(userIndex).name;
            passHolder = user.at(userIndex).password;
        }
        else if (userDecision == 'Y' || userDecision == 'y')
        {
            cout << "\nPlease enter your username: ";
            cin >> tempName;
            cout << "Please enter your password: ";
            cin >> tempPassword;

            bool isFoundName, isCorrectPassword;
            int j;
            for (j = 0; j < user.size(); j++)
            {
                if (user.at(j).name == tempName || tempName == userHolder)
                {
                    isFoundName = true;

                    if (tempPassword == passHolder)
                    {
                        isCorrectPassword = true;
                        break;
                    }
                    else if (user.at(j).password == tempPassword)
                    {
                        isCorrectPassword = true;
                        break;
                    }
                    else if (user.at(j).password != tempPassword)
                    {
                        isCorrectPassword = false;
                        break;
                    }
                }
            }

            if (isFoundName && isCorrectPassword)
            {
                cout << "\nWelcome back, " << tempName << "!\n";
                userIndex == j;

                userHolder = user.at(userIndex).name;
                passHolder = user.at(userIndex).password;
            }
            else
            {
                if (!isCorrectPassword)
                {
                    cout << "\nIncorrect password\n";
                    break;
                }
            }
        }

        int choice;
        cout << "\n\nWhat operation would you like to perform?\n";
        cout << "1 for money | 2 for credit | 3 for stocks\n";
        cout << "Enter: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nWhat exactly would you like to do?\n";
            cout << "1 to deposit | 2 to withdraw\n";
            cout << "Enter: ";
            cin >> choice;

            if (choice == 1)
            {
                showBalance(user.at(userIndex).balance);
                double amount;
                cout << "\nWhat amount would you like to deposit? ";
                cin >> amount;

                cout << "Are you sure you want to deposit $" << amount << "? (Y | N) ";
                cin >> doContinue;

                if (doContinue == 'N' || doContinue == 'n')
                    break;

                user.at(userIndex).balance += amount;
                cout << "\nCongratulations! You have successfully deposited $" << amount << " to your account.";
                showBalance(user.at(userIndex).balance);
            }
            else if (choice == 2)
            {
                showBalance(user.at(userIndex).balance);
                double amount;
                cout << "\nWhat amount would you like to withdraw? ";
                cin >> amount;

                if (amount > user.at(userIndex).balance)
                {
                    cout << "\nYou cannot withdraw more than $" << user.at(userIndex).balance << ".\n";
                    break;
                }

                user.at(userIndex).balance -= amount;
                cout << "Congratulations! You have been successfully withdrew $" << amount << " from your account.";
                showBalance(user.at(userIndex).balance);
            }
        }
        //////////////////////////////////////////////////////////////////////////////////
        cout << "\n/////////////////////////////////////////////////////////////\n"
             << "\nWould you like to continue program execution? (Y | N): ";
        cin >> doContinue;
        if (doContinue == 'Y' || doContinue == 'y')
        {
            cout << "\n/////////////////////////////////////////////////////////////\n\n";
            continue;
        }
        else
            break;
    } while (doContinue = 'Y' || doContinue == 'y');
    cout << "\nThanks for using this program\n"
         << "\n/////////////////////////////////////////////////////////////\n\n";

    // end main function
    return 0;
}