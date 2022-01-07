#include <iostream>
#define endl "\n"
using namespace std;

// bruteforce solution
int gcd_brutefource(int a, int b)
{
    int min_ = min(a, b);
    while (min_ >= 2)
    {
        if ((a % min_ == 0) && (b % min_ == 0))
        {
            return min_;
        }
        min_ -= 1;
    }
    return min_;
}

// using euclidean algorithm
int euclid(int num_1, int num_2)
{
    if (num_2 == 0)
        return num_1;
    else
        return euclid(num_2, num_1 % num_2);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "bruteforce : " << gcd_brutefource(a, b) << endl;
    cout << "euclidean  : " << euclid(a, b) << endl;
    cout << endl;
    return 0;
}
