https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
//
// Created by mark on 2/6/20.
//

#include "vectest.h"
#include <new>


/***********
 * Very simple custom Allocator for use with a std::container.
 * The standard allocator uses new and delete inside allocate and
 * deallocate, respectively.  Here, we are simply using malloc and
 * free.
 * @tparam T the type that will exist in the container which we are allocating.
 */
template <class T>
class myAllocator {
public:
    typedef T value_type;

    T* allocate(std::size_t n) {
        cout << "Custom vector alloc" << endl;
        return static_cast<T*>(std::malloc(n*sizeof(T)));
    }

    void deallocate(T* p, std::size_t)noexcept {
        cout << "Custom vector dealloc" << endl;
        std::free(p);
    }

};

void somefunction() {
    cout << "In someFunction" << endl;

    //When instantiating the vector, we tell it to use our custom allocator.
    vector <int, myAllocator<int> > v;
    cout << "Pushing 10" << endl;
    v.push_back(10);
    cout << "Pushing 20" << endl;
    v.push_back(20);
    cout << "Ending someFunction" << endl;

    int* p = ::new int;
}