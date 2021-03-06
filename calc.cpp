#include <iostream> 

using namespace std;

class Number {
    private:
    float x;
    float y;
    char oper;

    public:
     float GetX() { // getting x value
        return x;
    }

    void SetX(float valueX) { // setting x value
        x = valueX;
    }

    float GetY() {
        return y;
    }

    void SetY(float valueY) {
        y = valueY;
    }

    char GetOperation () {
        return oper;
    }

    void SetOperation(char operation) {
        oper = operation;
    }

    float Plus (float a, float b) { 
        return a + b;
    }

    float Minus (float a, float b) {
        return a - b;
    }

    float Multiply (float a, float b) {
        return a * b;
    }

    float Division (float a, float b) {
        return a / b;
    }

    float StartOperation () {
        if (GetOperation() == '+') { // better to use switch case
            return Plus(x, y);
        } else if (GetOperation() == '-') {
            return Minus(x, y);
        } else if (GetOperation() == '*') {
            return Multiply(x, y);
        } else if (GetOperation() == '/') {
            return Division(x, y);
        } else {
            return 0;
        }
    }

    void Print () {
        if (StartOperation() == 0) {
            cout << "Вы ввели неверную операцию" << endl;
        } else {
        cout << GetX() << " " << GetOperation() << " " << GetY() << " " << "= " << StartOperation() << "\n";
        }
    }
    

};

int main () {
    Number num;
    float a;
    float b;
    char c;
    cout << "Введите два числа\n";

    cin >> a >> b;

    num.SetX(a);
    num.SetY(b);

    cout << "Введите операцию\n";

    cin >> c;

    num.SetOperation(c);

    num.Print();

    return 0;
}