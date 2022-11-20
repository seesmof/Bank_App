#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    int index;
    if (age > 17 && age < 35)
    {
        index = 0;
    }
    else if (age >= 35 && age < 50)
    {
        index = 1;
    }
    else if (age >= 50 && age < 65)
    {
        index = 2;
    }
    else
    {
        index = 3;
    }

    return 0;
}