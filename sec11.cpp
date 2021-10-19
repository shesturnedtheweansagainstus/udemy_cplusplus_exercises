#include <iostream>
using namespace std;

int *apply_all(int [], int [], size_t, size_t);
void print(int [], size_t);

int main() {

    int array1 [] {1, 2, 3, 4, 5};
    int array2 [] {10, 20, 30, 40, 50};

    print(array2, 5);
    int *ptr {apply_all(array1, array2, 5, 5)};
    print(ptr, 25);

    delete [] ptr;
    return 0;
}

int *apply_all(int array1 [], int array2 [], size_t size1, size_t size2) {
    int *array_ptr {nullptr};
    array_ptr = new int [size1 * size2];

    int i {0};
    for (int x {0}; x < size2; ++x) {
        for (int y {0}; y < size1; ++y) {
            array_ptr[i++] = array2[x] * array1[y];
        }
    }
    return array_ptr;
}

void print(int array [], size_t size) {
    cout << endl;
    for (int i {0}; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}