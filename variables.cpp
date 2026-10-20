/*
#include <iostream>  //standard library
//variables are used to store temproray data in a program. they are used to store data that can be changed during the execution of a program. variables have a name, a type, and a value. the name is used to refer to the variable in the code, the type determines what kind of data the variable can hold, and the value is the actual data stored in the variable.


int main() {
    int file_size = 100; //variable declaration and initialization
     //variable initialization
    double sales = 9.99;
    std::cout << file_size;
    std::cout << sales;
    return 0;
}
*/

#include <iostream>  //standard library
using namespace std;
// to swap values of a and b
int main() {
    int a = 1;
    int b = 2;
    int temp = a; //temp variable to hold the value of a as a bucket
    a = b;
    b = temp;
    cout << b; //insertion operator so it can display the value

    return 0;
}