/*
OK Im gonna skip this because its basically just can you assign stuff and how
The important thing is that curly braces gives you an compile time error when you try to assign a float to an int
functional and assignment don't they just floor it without a warning*/

/*You can use the sizeof() function to calculate the size of an empty type, or of a variable value*/


#include <iostream>

int main(){

    //braced initialisation

    int birb_count {5};
    //int frac_birbs {5.1};

    std::cout << "Birb count: " << birb_count << std::endl;
    //std::cout << "Fractional birbs: " << frac_birbs << std;

    //functional initialisation
    int birb_count2(5);
    int frac_birbs2(5.1);

    std::cout << "Birb count 2: " << birb_count2 << std::endl;
    std::cout << "Fractional birbs 2: " << frac_birbs2 << std::endl;

    //assignment

    int birb_count3 = 5;
    int frac_birbs3 = 5.1;

    std::cout << "Birb count 3: " << birb_count3 << std::endl;
    std::cout << "Fractional birbs 3: " << frac_birbs3 << std::endl;

    std::cout << "size of int" << sizeof(int) <<std::endl;
    std::cout << "borbs" << sizeof(birb_count) << std::endl;

    return 0;

}