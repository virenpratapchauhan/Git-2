#include <iostream>
using namespace std;
void display(string name){
    cout << "Hi," << name << endl;    
}

int main(){
    string name;
    getline(cin, name);
    display(name);
    cout << "Do you want to ask any thing!" << endl;
    string newchoice;
    getline(cin, newchoice);
    if(newchoice == "solve"){
        cout << "sure!" << "which type of problem do you have to solve!" << endl; 
        string choice;
        cin >> choice;
        if (choice == "add"){
            cout << "enter your numbers:" << endl;
            int a,b;
            cin >> a >> b;
            cout << "the sum of " << a <<  " and " << b << " is " << a+b << endl;
        }
        else if (choice == "subtract"){
            cout << "enter your numbers:" << endl;
            int a,b;
            cin >> a >> b;
            cout << "the diffrence of " << a <<  " and " << b << " is " << a-b << endl;
        }
        else if (choice == "multiply"){
            cout << "enter your numbers:" << endl;
            int a,b;
            cin >> a >> b;
            cout << "the product of " << a <<  " and " << b << " is " << a*b << endl;
        }
        else if (choice == "divide"){
            cout << "enter your numbers:" << endl;
            int a,b;
            cin >> a >> b;
            cout << "the divisor of " << a <<  " and " << b << " is " << a/b << endl;
        }
        else{
            cout << "Sorry! I cant understand it!" << endl;
        }
    }
    else if (newchoice == "how are you"){
        cout 
    }
    else{
        cout << "Sorry! I cant understand it!" << endl;
    }

    return 0;
}