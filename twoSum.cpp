#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "enter the no of element : ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "enter the " << i << " element : ";
        cin >> arr[i];
    }
    bool found = false;
    int target;
    cout << "enter the target:";
    cin >> target;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "[" << i << "," << i + 1 << "]" << endl;
                found = true;
            }
        }
    }
    if (!(found))
    {
        cout << "wrong target" << endl;
        return 0;
    }
}