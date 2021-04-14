#include <iostream>
#include "windows.h"
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class Triangles
{
public:
    double a, b, angle;
    int action;

    int face()
    {
        cout << "Введите длину 2 сторон треугольника и размер его угла: ";
        cin >> a >> b >> angle;
        return action;
    }

    void incSize(){
        cout << "Во сколько раз вы хотите увеличить угол? ";
        double n;
        cin >> n;
        angle *= n;
        cout << "Угол A увеличен в " << n << "раз(а)" << endl;
        cout << "Угол равен" << angle << " градусам " << endl;
    }

    void downSize(){
        cout << "Во сколько раз вы хотите уменьшить угол? ";
        double n;
        cin >> n;
        angle /= n;
        cout << "Угол A уменьшен в " << n << "раз(а)" << endl;
        cout << "Угол равен" << angle << " градусам " << endl;
    }

    void bisector() {
        double length;
        length = ((2*a*b) * cos(angle/2)) / (a+b);
        cout << "Биссектриса равна: " << length << endl;
    }

    void lengths(){
        double c;
        c  = pow(a, 2) + pow(b, 2) - 2*a*b*cos(angle);
        c = sqrt(c);
        double first;
        double second;
        first = (a*c)/(a+b);
        second = (b*c)/(a+b);
        cout << "Длины отрезков, на которые биссектриса делит сторону, равны: " << first << " " << second << endl;
    }

    void angles(){
        double c;
        double angle2;
        double angle3;
        c  = pow(a, 2) + pow(b, 2) - 2*a*b*cos(angle);
        c = sqrt(c);
        angle2 = cos((pow(a, 2) + pow(c, 2) - pow(b, 2))/2*a*c);

        angle3 = cos((pow(c, 2) + pow(b, 2) - pow(a, 2))/2*b*c);
        cout << "Угол A равен: " << angle << "градусам" << endl;
        cout << "Угол B равен: " << angle2 << "градусам" << endl;
        cout << "Угол C равен: " << angle3 << "градусам" << endl;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Triangles * mas = new Triangles[4];

    mas[1].face();

    cout << "Выберите действие: " << endl;
    cout << "1. Увеличение/уменьшение угла" << endl;
    cout << "2. Вычисление длины биссектрисы" << endl;
    cout << "3. Вычисление длин отрезков на которые биссектриса делит сторону" << endl;
    cout << "4. Вычисление значений углов" << endl;
    int action;
    cin >> action;

    if (action == 1){
        cout << "Выберите действие: " << endl;
        cout << "1. Увеличить" << endl;
        cout << "2. Уменьшить" << endl;
        int act;
        cin >> act;
        if (act == 1){
            mas[1].incSize();
        }
        else if (act == 2){
            mas[1].downSize();
        }
        else{
            cout << "Неправильный выбор действия" << endl;
        }
    }

    else if (action == 2){
        mas[1].bisector();
    }

    else if (action == 3){
        mas[1].lengths();
    }

    else if (action == 4){
        mas[1].angles();
    }

    else {
        cout << "Неправильный выбор действия" << endl;
    }

    system("pause");
    return 0;
}