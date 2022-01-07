#include <iostream>
#define endl "\n"
using namespace std;

// gives correct only till 20
unsigned long long int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    int number;
    cin >> number;
    cout << "Factorial of " << number << " : " << factorial(number);
    cout << endl;
    return 0;
}
