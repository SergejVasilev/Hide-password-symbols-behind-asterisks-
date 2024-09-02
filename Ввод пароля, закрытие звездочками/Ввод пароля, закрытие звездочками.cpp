#include <iostream>
#include <conio.h>                              // для _getch
using std::cout;
using std::endl;
using std::string;

string input_password()
{
    string pass = "";                           // пароль
    cout << "Enter pass:" << endl;
    char ch;                                    // для считывания символов

    while (1)
    {
        ch = _getch();
        if (ch == 13)                           // пока не введена клавиша enter (код 13)
        {
            break;
        }
        else if (ch == 8)                       // удаление звездочек backspase (код 8)
        {
            cout << (char)8 << ' ' << (char)8;
            if (!pass.empty())                  // если строка не пустая - можем удалять
                pass.erase(pass.length() - 1);  // удаление последнего символа
        }
        else
        {
            cout << "*";                        // вывод звездочек в консоль вместо пароля
            pass = pass + ch;
        }
    }
    cout << endl << "Your pass: " << pass << endl << endl << endl;
    return pass;
}

int main()
{
    input_password();
    system("pause");

    return 0;
}
