#include <iostream>
#define endl "\n"
using namespace std;

// bruteforce solution
int lcm_brutefource(int a, int b)
{
    int result = max(a, b);
    int i;

    for (i = result; i < a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
            return i;
    }
    return i;
}

// using euclidean algorithm
int euclid(int num_1, int num_2)
{
    if (num_2 == 0)
        return num_1;
    else
        return euclid(num_2, num_1 % num_2);
}

int optimized(int a, int b)
{
    return (a * b) / euclid(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "bruteforce : " << lcm_brutefource(a, b) << endl;
    cout << "optimized  : " << optimized(a, b) << endl;
    cout << endl;
    return 0;
}
