#include <iostream>
using namespace std;
bool palin(int n)
{
    if (n < 0)
        return false;
    int original = n;
    long long rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return original == rev;
}
int main()

{
    int n;
    cin >> n;
    if (palin(n))
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}