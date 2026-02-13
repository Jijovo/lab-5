#include <iostream>
using namespace std;

int swap(int* pa, int* pb);

int main() {
    int x = 5, y = 10;
    int* px = &x;
    int* py = &y;
    cout << "x = " << *px << "  | y = " << *py << endl;

    cout << "Swapping...\n";
    int sum = swap(px, py);
    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

int swap(int* pa, int* pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    return *pa + *pb;
}