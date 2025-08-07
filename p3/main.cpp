#include <iostream>
using namespace std;

class People {
private:
    string names[10];
    int ages[10];

public:
    People() {
        for (int i = 0; i < 10; i++) {
            cout << "Enter name for person " << i + 1 << ": ";
            cin >> names[i];

            cout << "Enter age for person " << i + 1 << ": ";
            cin >> ages[i];
        }
    }

    double AverageAge() {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += ages[i];
        }
        return (double)sum / 10;
    }
};

int main() {
    People group;
    cout << "Average age = " << group.AverageAge() << endl;
    return 0;
}
