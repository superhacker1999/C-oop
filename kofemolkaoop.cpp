#include <iostream> 
#include <string>
using namespace std;

class CoffeeGrinder {
    private:
    bool CheckVoltage () {
        float NormalVoltage = 3.22;
        float currentVoltage;
        scanf("%f", &currentVoltage);
        if (currentVoltage == NormalVoltage) {
            return true;
        } else {
            return false;
        }
        
    }

    public:
    void Start () 
    {
        if (CheckVoltage()) {
            cout << "Вжжжжжжж" << endl;
        } else {
            cout << "Бип Бип" << endl;
        }
        

    }
};

int main() {
    CoffeeGrinder Bosh;
    Bosh.Start();

    return 0;
}