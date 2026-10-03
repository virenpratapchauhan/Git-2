#include<iostream>
using namespace std;

void square(int n){
    for (int i = 1 ; i <= n ; i++ ){
        for (int j = 1 ; j <= n ; j++ ){
            cout << "*";
        }
        cout << endl;
    }
}
void halfTriangle(int n){
    for (int i = 1 ; i <= n ; i++ ){
        for (int j = 1 ; j <= i ; j++ ){
            cout << "*";
        }
        cout << endl;
    }
}
void invertedTriangle(int n){
    for (int i = 1 ; i <= n ; i++ ){
        for (int j = 1 ; j <= n-i ; j++ ){
            cout << "*";
        }
        cout << endl;
    }
}
void hallowSquare(int n){
    for (int i = 1 ; i <= n ; i++ ){
        for (int j = 1 ; j <= n ; j++ ){
            if (i == 1 || j == 1 || i == n || j == n ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    // square(5);
    // halfTriangle(5);
    // invertedTriangle(5);
    hallowSquare(5);
    cout << endl;
    return 0;
}