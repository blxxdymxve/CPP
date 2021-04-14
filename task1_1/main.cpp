#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

class Paralelograms
{
public:
    float a, b, h;
    int action;

    int face()
    {
        cout << "Введите длину 2 сторон и высоты параллелограмма: ";
        cin >> a >> b >> h;
        return action;
    }

    void incSize(){
        float n;
        cout << "Во сколько раз вы хотите уменьшить параллелограмм?  ";
        cin >> n;
        a  = a/n;
        b = b/n;
        cout << "Параллелограмм уменьшен в " << n << " раз(а)\n";
        cout << "Стороны равны " << a << " и " << b << "\n";
    }

    void perimeter() {
        float p, s, kp, ks;
        p = (a + b) * 2;
        s = a * h;
        kp = sqrt(p);
        ks = sqrt(s);
        cout << "Периметр параллелограмма равен " << p << "\n";
        cout << "Площадь параллелограмма равна " << s << "\n";
        cout << "Квадратный корень из периметра равен " << kp << "\n";
        cout << "Квадратный корень из площади равен " << ks << "\n";
    }

    void show(){
        cout << "Сторона a равна " << a << "\n";
        cout << "Сторона b равна " << b << "\n";
        cout << "Высота равна " << h << "\n";
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Paralelograms * mas = new Paralelograms[3];

    mas[1].face();

    cout << "Выберите действие: \n";
    cout << "1. Увеличение/уменьшение периметра параллелограмма\n";
    cout << "2. Вычисление квадратного корня из периметра и площади\n";
    cout << "3. Показать информацию о фигуре\n";
    int action;
    cin >> action;

    if (action == 1){
        mas[1].incSize();
    }
    else if (action == 2){
        mas[1].perimeter();
    }
    else if (action == 3){
        mas[1].show();
    }
    else {
        cout << "Неправильный выбор действия\n";
    }

    system("pause");
    return 0;
}