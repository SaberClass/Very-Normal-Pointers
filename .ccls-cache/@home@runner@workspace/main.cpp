#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    int **ptr2ptr = &ptr;
    int ***ptr2ptr2ptr = &ptr2ptr;
    int ****ptr2ptr2ptr2ptr = &ptr2ptr2ptr;
    int *****ptr2ptr2ptr2ptr2ptr = &ptr2ptr2ptr2ptr;
    int ******ptr2ptr2ptr2ptr2ptr2ptr = &ptr2ptr2ptr2ptr2ptr;
    int *******ptr2ptr2ptr2ptr2ptr2ptr2ptr = &ptr2ptr2ptr2ptr2ptr2ptr;
    int ********ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr = &ptr2ptr2ptr2ptr2ptr2ptr2ptr;
    int *********ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr = &ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr;
    int **********ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr = &ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr;
    int ***********ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr = &ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr;
    
    
    
    void* ptrs[] = {ptr, ptr2ptr, ptr2ptr2ptr, ptr2ptr2ptr2ptr, ptr2ptr2ptr2ptr2ptr, ptr2ptr2ptr2ptr2ptr2ptr, ptr2ptr2ptr2ptr2ptr2ptr2ptr, ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr, ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr, ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr, ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr2ptr};

    for (int i = 0; i < 11; i++) {
        string newString = "ptr";
        for (int k = 0; k < i; k++) {
            newString += "2ptr";
        };
        cout << "Value of pointer " << newString << " = " << *(int**)ptrs[i] << "\n";
    };
}