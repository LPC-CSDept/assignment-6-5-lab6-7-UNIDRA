//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(int &a, int &b, int &c) {
    swap(a, b);
    swap(a, c);
}