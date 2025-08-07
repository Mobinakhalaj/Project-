#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

double AverageAge(Person p[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += p[i].age;
    }
    return (double)sum / count;
}

int main() {
    Person people[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter name for person " << i + 1 << ": ";
        cin >> people[i].name;

        cout << "Enter age for person " << i + 1 << ": ";
        cin >> people[i].age;
    }

    double avg = AverageAge(people, 10);
    cout << "Average age = " << avg << endl;

    return 0;
}
