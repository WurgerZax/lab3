#include <iostream>
#include <string>


using namespace std;

//1.Дан массив символов. Удалить символ двоеточие и подсчитать количество удаленных символов.


void ex1() 
{
    string strk;
    getline(cin, strk);

    cout << "Строка: " << strk << endl;

    int count = 0;
    while (strk.find(":") != -1)
    {
        count++;
        strk.erase(strk.begin() + strk.find(":"));// от начала строки ищем дветочие и удаляем.
    }

    cout << "Удалили символов: " << count << endl;
    cout << "Отформатированная строка: " << strk << endl;
}
int main()
{
    setlocale(0, "rus");
    ex1();
}
