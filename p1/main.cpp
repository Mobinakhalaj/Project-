#include <iostream>
using namespace std;

double Avr(int a[], int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += a[i];
    }
    return sum / count;
}

int Max(int a[], int length) {
    int MaxA = a[0];
    for (int i = 0; i < length; i++) {
        if (a[i] > MaxA) {
            MaxA = a[i];
        }
    }
    return MaxA;
}

int Min(int a[], int length) {
    int MinA = a[0];
    for (int i = 0; i < length; i++) {
        if (MinA > a[i]) {
            MinA = a[i];
        }
    }
    return MinA;
}

int main() {
    int a[] = {7, 3, 9, 2, 6};
    int length = sizeof(a) / sizeof(a[0]);

    cout << "Average = " << Avr(a, length) << endl;
    cout << "Maximum = " << Max(a, length) << endl;
    cout << "Minimum = " << Min(a, length) << endl;

    return 0;
}
