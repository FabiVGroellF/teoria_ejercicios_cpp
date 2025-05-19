#include <iostream>

using namespace std;

int main() {
    int *p;
    int x = 10;

    p = new int[10];
    p[0] = 20;
    p[1] = 21;
    p[2] = *p; // p[2] = *p = p[0] = 20
    p[3] = *(p + 1); // p[3] = *(p + 1) = p[1] = 21
    p[4] = *p + *(p + 1); // p[4] = *p + *(p + 1) = p[0] + p[1] = 20 + 21 = 41

    cout << *(p + 4) << endl; // Output: 41)

    return 0;
}