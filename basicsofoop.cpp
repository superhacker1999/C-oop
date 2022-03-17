#include <iostream>
#include <string>
using namespace std;

class Human 
{
public:              // <- модификатор доступа
    int age;
    int weight;
    string name;


};
class point {
    public:
    int x;
    int y;
    int z;
};

int main () 
{
    point a;
    a.x = 1;
    a.y = 3;
    a.z = 2;

    cout << "Point has [" << a.x << " ," << a.y  << " ," << a.z << "] coordinate" << endl;
    // Human firstHuman;
    // Human secondHuman;

    // firstHuman.age = 22;
    // firstHuman.name = "Zatsepin Kirill Sergeevich";
    // firstHuman.weight = 65;

    // secondHuman.age = 1;
    // secondHuman.name = "Ivanov Ivan";
    // secondHuman.weight = 4;

    // cout << firstHuman.age << endl;
    // cout << firstHuman.name << endl;
    // cout << firstHuman.weight << endl;
    // cout << secondHuman.age << endl;
    // cout << secondHuman.name << endl;
    // cout << secondHuman.weight << endl;
}