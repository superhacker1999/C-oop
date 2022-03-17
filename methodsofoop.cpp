#include <iostream>
#include <string>
using namespace std;

class Human 
{
public:              // <- модификатор доступа
    int age;
    int weight;
    string name;
    
    void Print () {
        cout << "Имя: " << name << "\nВес: " << weight << "\nВозраст: " << age << endl; 
    }
    void Aging () {
        age++;
    }
};


int main () 
{
  
    setlocale(LC_ALL, "ru"); // для возможности пользоваться киррилицей
    Human firstHuman;
    Human secondHuman;

    firstHuman.age = 22;
    firstHuman.name = "Zatsepin Kirill Sergeevich";
    firstHuman.weight = 65;

    secondHuman.age = 1;
    secondHuman.name = "Ivanov Ivan";
    secondHuman.weight = 4;
    firstHuman.Print();
    secondHuman.Print();
    
    cout << "Через год все повзрослели" << endl;

    firstHuman.Aging();
    secondHuman.Aging();

    firstHuman.Print();
    secondHuman.Print();

}