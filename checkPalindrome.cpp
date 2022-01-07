#include <iostream>
#define endl "\n"
using namespace std;

bool palindrome(int number)
{
    int copy_number = number;

    int reversed_number = 0;
    while (copy_number > 0)
    {
        reversed_number = reversed_number * 10 + copy_number % 10;
        copy_number /= 10;
    }
    if (number == reversed_number)
        return true;
    else
        return false;
}

int main()
{
    int number;
    cin >> number;

    if (palindrome(number))
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    cout << endl;
    return 0;
}
