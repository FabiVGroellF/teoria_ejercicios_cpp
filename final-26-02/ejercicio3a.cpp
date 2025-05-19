#include <iostream>

using namespace std;

void proc (int v[], int len) {
    *v = 10;
}

int main() {
    int *p = NULL;
    int x = 30;

    p = new int[3];
    p[1] = x;
    proc(p, 3);
    p[2] = *(p + 1) + x;

    for (int i = 0; i < 3; i++) {
        cout << *(p + 1) << " ";
    }

    delete []p;
    return 0;
}