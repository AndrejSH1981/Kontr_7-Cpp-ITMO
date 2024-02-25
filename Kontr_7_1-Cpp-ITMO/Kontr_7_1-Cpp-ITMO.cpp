
#include <cmath>
# include <windows.h>
#include <iomanip>
#include <iostream>
#include <stdexcept>

using namespace std;

// Переменные типа структуры
struct Time {
    int hours;
    int minutes;
    int seconds;
    int var_Return;
};



Time MyVariables(int a, int b, int c) {


    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    bool marker0 = false;
    bool marker1 = false;
    bool marker2 = false;
    bool marker3 = false;
    bool marker4 = false;
    bool marker5 = false;
    bool marker6 = false;
    bool marker7 = false;

    if (a1 == 0 && b1 == 0 && c1 == 0) {
        a1 = a;
        b1 = b;
        c1 = c;


        marker1 = true;
    }


    if (c1 < 0) {
        b1 = b1 - 1;
        c1 = 60 + c1;
        marker7 = true;
    }
    else {
        marker7 = false;
    }
    if (c1 >= 60) {
        b1 = b1 + 1;
        c1 = c1 - 60;
        marker4 = true;
    }
    else {
        marker4 = false;
    }

    if (b1 < 0) {
        a1 = a1 - 1;
        b1 = 60 + b1;
        marker6 = true;
    }
    else {
        marker6 = false;
    }
    if (b1 >= 60) {
        a1 = a1 + 1;
        b1 = b1 - 60;
        marker3 = true;
    }
    else {
        marker3 = false;
    }

    if (a1 < 0) {
        a1 = 24 - a1;
        marker5 = true;
    }
    else {
        marker5 = false;
    }
    if (a1 >= 24) {
        a1 = a1 - 24;
        marker2 = true;
    }
    else {
        marker2 = false;
    }

    if (marker2 == true || marker3 == true || marker4 == true || marker5 == true || marker6 == true || marker7 == true) {
        wcout << L"\n-не корректное отображение времени, вот  перерасчитанное время: ";
        cout.width(2);
        cout << a1 << ":" << b1 << ":" << c1 << endl;
        marker1 == false;
        return Time{ (a1), (b1), (c1), 10 };
    }

    if (marker1 == true) {

        return Time{ (a1), (b1), (c1), 1 };
    }

}


int main() {

    setlocale(LC_CTYPE, "rus");

    wcout << L"Введите первое время в формате 'HH:MM:SS': " << endl;
    int a, b, c;

    wcout << L" - HH: = ";
    cin >> a;
    wcout << L" - MM: = ";
    cin >> b;
    wcout << L" - SS: = ";
    cin >> c;

    Time variables = MyVariables(a, b, c);

    int hours1;
    int minutes1;
    int seconds1;


    if (variables.var_Return == 1) {
        hours1 = variables.hours;
        minutes1 = variables.minutes;
        seconds1 = variables.seconds;

    }

    wcout << L"Введите второе время в формате 'HH:MM:SS': " << endl;
    wcout << L" - HH: ";
    cin >> a;
    wcout << L" - MM: = ";
    cin >> b;
    wcout << L" - SS: = ";
    cin >> c;
    Time variables2 = MyVariables(a, b, c);
 

    int hours2;
    int minutes2;
    int seconds2;



    if (variables2.var_Return == 1) {
        hours2 = variables2.hours;
        minutes2 = variables2.minutes;
        seconds2 = variables2.seconds;
     
    }


    a = hours1 - hours2;
    b = minutes1 - minutes2;
    c = seconds1 - seconds2;

    Time variables3 = MyVariables(a, b, c);
    if (variables3.var_Return == 1) {
        cout.width(2);
        wcout << L"разница = " << variables3.hours << ":" << variables3.minutes << ":" << variables3.seconds << endl;
    }
    else if (variables3.var_Return == 10) {
        wcout << L"(показана разница)" << endl;
    }


    a = hours1 + hours2;
    b = minutes1 + minutes2;
    c = seconds1 + seconds2;

    Time variables4 = MyVariables(a, b, c);
    if (variables4.var_Return == 1) {
        cout.width(2);
        wcout << L"разница = " << variables4.hours << ":" << variables4.minutes << ":" << variables4.seconds << endl;
    }
    else if (variables4.var_Return == 10) {
        wcout << L"(показано сложение)" << endl;
    }


}










// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
