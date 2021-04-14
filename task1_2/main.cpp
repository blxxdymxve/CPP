#include <iostream>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;

class Audi
{
public:
    double len;
    double wid;
    double high;
    const char* name;

    void size()
    {
        double m_size;
        m_size = len * wid * high;
        cout << "Объем машины равен: " << m_size << endl;
    }

    void info()
    {
        const char* type = "Audi";
        cout << "Марка машины: " << type << endl;
        cout << "Модель машины: " << name << endl;
    }

    void show()
    {
        cout << "Габариты машины: " << endl;
        cout << "Длина: " << len << endl;
        cout << "Ширина: " << wid << endl;
        cout << "Высота: " << high << endl;
    }
};

class Mercedes
{
public:
    double len;
    double wid;
    double high;
    const char* name;

    void size()
    {
        double m_size;
        m_size = len * wid * high;
        cout << "Объем машины равен: " << m_size << endl;
    }

    void info()
    {
        const char* type = "Mercedes";
        cout << "Марка машины: " << type << endl;
        cout << "Модель машины: " << name << endl;
    }

    void show()
    {
        cout << "Габариты машины: " << endl;
        cout << "Длина: " << len << endl;
        cout << "Ширина: " << wid << endl;
        cout << "Высота: " << high << endl;
    }
};

class BMW
{
public:
    double len;
    double wid;
    double high;
    const char* name;

    void size()
    {
        double m_size;
        m_size = len * wid * high;
        cout << "Объем машины равен: " << m_size << endl;
    }

    void info()
    {
        const char* type = "BMW";
        cout << "Марка машины: " << type << endl;
        cout << "Модель машины: " << name << endl;
    }

    void show()
    {
        cout << "Длина корабля: " << len << endl;
        cout << "Ширина корабля: " << wid << endl;
        cout << "Высота корабля: " << high << endl;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Audi car{ 5, 2, 1.7, "Q8" };
    car.info();
    car.show();
    car.size();
    cout << endl;

    Audi car2{ 5, 1.8, 1.5, "A6" };
    car2.info();
    car2.show();
    car2.size();
    cout << endl;

    Audi car3{ 4.5, 2, 1.2, "R8" };
    car3.info();
    car3.show();
    car3.size();
    cout << endl;

    Mercedes car4{ 4.5, 1.7, 1.4, "C 63" };
    car4.info();
    car4.show();
    car4.size();
    cout << endl;

    Mercedes car5{ 4.7, 1.8, 1.4, "C 63 S" };
    car5.info();
    car5.show();
    car5.size();
    cout << endl;

    Mercedes car6{ 4.7, 1.8, 1.4, "C 43" };
    car6.info();
    car6.show();
    car6.size();
    cout << endl;

    BMW car7{ 4.7, 1.9, 1.4, "M3" };
    car7.info();
    car7.show();
    car7.size();
    cout << endl;

    BMW car8{ 4.9, 2, 1.7, "X5" };
    car8.info();
    car8.show();
    car8.size();
    cout << endl;

    BMW car9{ 4.9, 2, 1.7, "X6" };
    car9.info();
    car9.show();
    car9.size();
    cout << endl;
}