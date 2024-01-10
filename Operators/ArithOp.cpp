#include <iostream>
using namespace std;

int main(){
    int x = 20;
    int y = 30;

    cout << x + y <<endl;
    cout << x - y <<endl;
    cout << x / y <<endl;
    cout << x * y <<endl;

    // operation predcedence

    int a = 2 + 9 * 5;
    int b = (2 + 9) * 5;
    cout << a <<endl;
    cout << b <<endl;

    // Comparision operation

    int i = 50;
    int j = 40;
    int k = i;

    int p = i == j;
    cout << p;
}
