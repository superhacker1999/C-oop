#include <iostream>
#include <string>
using namespace std;

class Point 
{

private: 
    int x;
    int y;

public:
    int GetX() {
        return x;
    }
    void SetX(int valueX) {
        x = valueX;
    }

    int GetY() {
        return y;
    }
    void SetY(int valueY) {
        y = valueY;
    }

    void Print() {
         printf("\ny = %d\nx = %d\n", y, x);
    }


};


int main () 
{
    setlocale(LC_ALL, "ru"); // для возможности пользоваться киррилицей
    Point a;
    a.Print();
    //int valueX = 1;
    // a.SetX(5);
    int valueY;
    int valueX;

    cin >> valueY >> valueX;

    a.SetX(valueX);
    a.SetY(valueY);

    // a.GetX();
    // a.GetY();
    printf("\ny = %d\nx = %d\n", a.GetY(), a.GetX());
    // a.Print();

    

   
    return 0;
}