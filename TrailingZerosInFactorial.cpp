#include <iostream>
#define endl "\n"
using namespace std;

int trailingZeros(int number)
{
    int answer = 0;
    for (int divisor = 5; divisor <= number; divisor *= 5)
    {
        answer += number / divisor;
    }
    return answer;
}

int main()
{
    int number;
    cin >> number;
    cout << "Trailing zeroes in factorial of " << number << " : " << trailingZeros(number);
    cout << endl;
    return 0;
}
