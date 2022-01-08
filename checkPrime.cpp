#include <iostream>
#include <math.h>
#define endl "\n"
using namespace std;

// bruteforce solution
bool isPrime(int number)
{
    if (number == 1)
        return false;
    if (number == 2 || number == 3)
        return true;
    if (number % 2 == 0 || number % 3 == 0)
        return false;
    for (int div = 5; div <= sqrt(number); div += 2)
    {
        if (number % div == 0 || number % (div + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int number;
    cin >> number;
    if (isPrime(number))
    {
        cout << "\nPrime";
    }
    else
    {
        cout << "\nNot Prime";
    }
    cout << endl;
    return 0;
}
