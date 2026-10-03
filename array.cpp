#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "How many books do you want to add :" << endl;
    int choice;
    cin >> choice;
    string books[choice];
    for (int i = 0; i <= choice; i++)
    {
        cin >> books[i];
    }
    cout << "Your books are added!" << endl;
    cout << "Dou you want to see them or delete anyone :" << endl;
    string choose;
    cin >> choose;
    if (choose == "see")
    {
        cout << "Here are your books" << endl;
        for (int i = 0; i <= choice; i++)
        {
            cout << books[i] << endl;
        }

    }
    else if(choose == "delete"){
        cout << "Sure! Which book do you have to delete :" << endl;
        string del;
        cin >> del;
        for (int i = 0; i <= choice; i++)
        {
            if (books[i] == del)
            {
                books[i] = "";
                cout << "Book deleted successfully!" << endl;
                break;
            }
            else{
                cout << "You dont have such book!" << endl;
            }
        }
    }
    else{
        cout << "Kukur ho kya !" <<endl;
    }
    return 0;
}