#include <iostream>
#include <iomanip>
using namespace std;
//массиавы для  сохранения имён и поролей юзеров
string user[1];
string pass[1];
string chUser[1];
string chPass[1];
//-----------------------------------------------
//обявление функций на шапке програмы
void check();
//-----------------------------------------------
string SingUp;

int main()
{
    cout << setw(40)<< "Login" <<endl;
    cout << "Name of user ";
    cin >> user[0];
    cout << "Password ";
    cin >> pass[0];
    cout << "You registred"<<endl;
    cout << "Sing up (yes/no) "<<endl;
    cin >> SingUp;
    if (SingUp == "yes")
        {
            check();
        }
    if (SingUp == "no")
        {
        cout <<  "OK";
        }
    return 0;
}
//функция проверки
void check()
{
    do
    {
        cout << setw(45) << "Sing Up" << endl;
        cout << "User ";
        cin >> chUser[0];
        cout << "Password ";
        cin >> chPass[0];
        
    } while (user[0] != chUser[0] ,  pass[0] != chPass[0]);
        cout << "You Sing Up";
}


