#include <iostream>
#include <string>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Worker {

public:
    int age;
    string name;
private:
    float weight;
    int mood = 10;

public:
    void check_object() {
        cout << "Возраст: " << age << endl;
        cout << "Имя: " << name << endl;
        cout << "Настроение: " << mood << endl;
        cout << "Вес: " << weight << endl;
    }
    //Методы
    void eat(float how_much);
    void walk(int walking);
    void dance(int dancing);
    void work(int working);
    float get_weight();
    float get_mood();

    string Name() {
        cout << "Введите имя рабочего: ";
        cin >> name;
        return name;
    }

    int Age() {
        cout << "Введите возраст рабочего: ";
        cin >> age;
        return age;
    }
};

void Worker::eat(float how_much) {
    if (how_much > 10) {
        age += 1;
        weight = weight + (how_much/2);
    }
    else {
        weight = weight + how_much;
    }
}

void Worker::walk(int walking){
    mood = mood + walking;
}

void Worker::dance(int dancing) {
    for (int i = 0; i < dancing; i++)
        mood = mood + 2;
}

void Worker::work(int working) {
    for (int i = 0; i < working; i++)
    {
        mood = mood - 2;
        if (mood < 0)
        {
            mood = 0;
        }
    }
}

float Worker::get_weight() {
    return weight;
}

float Worker::get_mood() {
    return mood;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    Worker *wrk1 = new Worker();
    wrk1->Name();
    wrk1->Age();
    wrk1->eat(2);
    wrk1->work(9);
    wrk1->walk(2);
    wrk1->dance(3);
    wrk1->eat(3);
    wrk1->eat(15);
    wrk1 -> check_object();

}