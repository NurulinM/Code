#include <iostream>
#include <iomanip>
using namespace std;
//массиавы для  сохранения имён и поролей юзеров
string user[1];
string pass[1];
string chUser[1];
string chPass[1];
//-----------------------------------------------
//обявление функций в шапке программы
void check();
//-----------------------------------------------
string Login;
bool i;

int main()
{
    cout << setw(40)<< "Sing up" <<endl;
    cout << "Name of user ";
    cin >> user[0];
    cout << "Password ";
    cin >> pass[0];
    cout << "You registred"<<endl;
    cout << "Login (yes/no) "<<endl;
    cin >> Login;
    
        if (Login == "yes")
        {
            check();
        }
        if (Login == "no")
        {
            cout << "OK";
        }
        else
        {
            while (Login != "yes", Login != "no")
            {
                cout << "Login (yes/no) " << endl;
                cin >> Login;

                if (Login == "yes")
                {
                    check();
                }
                if (Login == "no")
                {
                    cout << "OK";
                }
            }
        }
    
    return 0;
}
//функция проверки
void check()
{
    for (i = false; i == false ;)
    {


        do
        {
            cout << setw(45) << "Login" << endl;
            cout << "User ";
            cin >> chUser[0];
            cout << "Password ";
            cin >> chPass[0];

        } while (user[0] != chUser[0], pass[0] != chPass[0]);


        if (user[0] == chUser[0], pass[0] == chPass[0])
        {
            i = true;
        }
        else
        {
            i = false;
        }
    }
        cout << "You Login";
}


