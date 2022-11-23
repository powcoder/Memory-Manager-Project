https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <iostream>
#include <vector>
#include "vectest.h"

using std::cout;
using std::endl;
using std::vector;


void* operator new(size_t b) {
    cout << "Operator new" << endl;
    return malloc (b);
}

void* operator new[](size_t b) {
    cout << "Operator new[]" << endl;
    return malloc(b);
}

void operator delete(void* p) noexcept{
    cout << "Operator delete" << endl;
    free (p);
}

void operator delete[](void* p) noexcept {
    cout << "Operator delete[]" << endl;
    free(p);
}

int main() {

    int* p = new int;
    int* q = new int[10];
    cout << "Allocations done" << endl;
    delete p;
    delete[] q;

    cout << "\nAllocating an int vector and inserting 3 items." << endl;

    vector<int> data;

    cout << "\tPushing 1" << endl;
    data.push_back(1);
    cout << "\tPushing 2" << endl;
    data.push_back(2);
    cout << "\tPushing 3" << endl;
    data.push_back(3);

    somefunction();

    return 0;
}
