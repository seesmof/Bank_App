#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

string username, lname, fname;
int password, input, bday, bmonth, byear;
double balance = 0;

void REG()
{
    cout << "Please enter your first name: " << endl;
    cin >> fname;
    cout << "Please enter your last name: " << endl;
    cin >> lname;
    cout << "Please enter your username: " << endl;
    cin >> username;
    cout << "Please enter your birth date in DD MM YYYY format: ";
    cin >> bday >> bmonth >> byear;

    if (bday > 31 || byear > 2004 || bmonth > 12)
    {
        cout << "Please enter valid birth date." << endl;
    }
    else
    {
        cout << endl;
        cout << "Congratulations, " << username << "! You have successfully created a new account!" << endl;
    }
}

void LOGIN()
{
    cout << "Please enter your username: " << endl;
    cin >> username;
    cout << "Please enter your password: " << endl;
    cin >> password;
    cout << "Welcome back, " << username << "! Your current balance is $" << balance << endl;
}

int main()
{
    cout << "Welcome to SkylinesBank! Thank you for choosing us" << endl;
    cout << "If you already have an account, you can login by typing 1 below. Otherwise, type 0" << endl;
    cin >> input;
    cout << endl;
    if (input == 1)
    {
        LOGIN();
    }
    else
    {
        REG();
    }

    return 0;
}