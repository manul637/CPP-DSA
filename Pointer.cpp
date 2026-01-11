#include <iostream>
using namespace std;
#include <vector>




//pass by refrence using pointer

void update(int *p){
*p = 20;
    }


//pass by refrence using alias

void update2(int &b){                       //here "&" is alias
b = 30;
    }


int main() {
//     int a = 10;
// int* ptr = &a;
// int** pptr = &ptr;

// cout << "Value of a: " << a << endl;
// cout << "Value using single pointer: " << *ptr << endl; 
// cout << "Value using double pointer: " << **pptr << endl;

// ---------------------------------------------------------------------------

int a = 10;

cout << "Before update: " << a << endl;
update(&a);
cout << "After update using pointer: " << a << endl;
update2(a);
cout << "After update using reference: " << a << endl;

// -----------------------------------------------------------------------------

int arr[5] = {1, 2, 3, 4, 5};

cout << arr << endl;          //prints address of first block
cout << *arr << endl;         //prints value at first block

//pointer arithmetic
cout << *(arr + 1) << endl;    //prints value at second block
cout << *(arr + 2) << endl;    //prints value at third block

//increment and decrement
 cout << arr << endl;        //prints address of first block
 cout << arr+1 << endl;    //prints address of second block
 cout << arr+2 << endl;    //prints address of third block


    return 0;

}