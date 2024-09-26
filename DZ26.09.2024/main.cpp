#include <iostream>
using namespace std;

//Задание 1

//int main(){
//    setlocale(LC_ALL, "Russian");
//    int a = 0;
//    int b = 0;
//    cout << "Введите расстояние до аэропорта\n";
//    cin >> a;
//    cout << "Введите время за которое нужно доехать\n";
//    cin >> b;
//    cout << "Ответ:" << a/b << "км/ч";
//    
//    return 0;
//}

//Задание 2

//int main(){
//    setlocale(LC_ALL, "Russian");
//    int a = 0;
//    int a1 = 0;
//    double a2 = 0;
//    int b = 0;
//    int b1 = 0;
//    double b2 = 0;
//    cout << "Введите время начала поездки\n" << "Час:";
//    cin >> a;
//    cout << "Минут:";
//    cin >> a1;
//    cout << "Секунд:";
//    cin >> a2;
//    cout << "Введите время конца поездки\n" << "Час:";
//    cin >> b;
//    cout << "Минут:";
//    cin >> b1;
//    cout << "Секунд:";
//    cin >> b2;
//    cout << "Ответ:" << ((b*60+b1+b2/60) - (a*60+a1+a2/60)) * 2 << "Гривн";
//    
//    return 0;
//}

//Задание 3

int main(){
    setlocale(LC_ALL, "Russian");
    int a = 0;
    double b = 0;
    double c = 0;
    double c1 = 0;
    double c2 = 0;
    cout << "Введите расстояние\n";
    cin >> a;
    cout << "Введите расход бензина на 100км\n";
    cin >> b;
    cout << "Введите стоимость бензина\n" << "92: ";
    cin >> c;
    cout << "95: ";
    cin >> c1;
    cout << "100: ";
    cin >> c2;
    cout << "Стоимость на 92 топливе" << b * (a/100) * c << endl << "Стоимость на 95 топливе: " << b * (a/100) * c1 << endl << "Стоимость на 100 топливе: " << b * (a/100) * c2;
    
    return 0;
}
