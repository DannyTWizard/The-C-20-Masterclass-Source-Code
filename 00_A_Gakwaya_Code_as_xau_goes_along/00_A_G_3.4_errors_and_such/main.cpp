/*
There are 3 kinds of errors you can get
You can get Compile Time errors
You can get runtime errors 
You can get warnings
We are going to see what each of these is
*/

#include <iostream>

int main(){
    std::cout << "Hello World" << std::endl; // Compile time error, because we forgot to include iostream

    //runtime error example
    int value = 7;
    std::cout << value << std::endl;
    std::cout << "Hello World" << std::endl;
}