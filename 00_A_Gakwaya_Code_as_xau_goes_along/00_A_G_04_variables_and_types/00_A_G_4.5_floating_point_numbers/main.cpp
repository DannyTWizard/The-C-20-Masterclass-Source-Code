/*floating point numbers are how you store fractional numbers
The three main types are 
floats (4bytes) (7 digits)
doubles (8bytes) (15 digits)
and long doubles (12bytes) (19 digits)
*/

//Floating point numbers can store  numbers in scientific notation
//I assume this sacrifices a few digits of precision since the e and the - have to be stored as well
//But idk maybe not

//A cool thing about floating point numbers is that they can handle division by 0 lol


#include <iostream>
#include <iomanip>

int main(){
    //First we are going to initialise some floating point numbers

    float number1 {3.141592653589793238f};
    double number2 {3.141592653589793238};
    long double number3 {3.141592653589793238L};

    //lets print them to see what happens 

    std::cout << "number 1 " << number1 << std::endl;
    std::cout << "number 2 " << number2 << std::endl;
    std::cout << "number 3 " << number3 << std::endl;

    //If you don't set precision cout automatically sets it to 6 dp apparently

    //so lets specify

    std::cout << std::setprecision(20);
    std::cout << "After setting precision to 20" << std::endl;
    std::cout << "number 1 " << number1 << std::endl; //7 sf survive
    std::cout << "number 2 " << number2 << std::endl; //17 sf survive
    std::cout << "number 3 " << number3 << std::endl; //20 sf survive

    //Garbage numbers are added beyond the precision limits of the floating point numbers


    //Note that even with braced initialisation if you exceed precision limits it still compiles

    
    float number4 {192400023.0f};
    std::cout << "number 4 " << number4 << std::endl;

    //std::cout << "number 4 " << number4 << std::endl; 

    //the same happens with functional and assignment initialisation

    float number5 (192400023.0f);
    std::cout << "number 5 " << number5 << std::endl;
    float number6 = 192400023.0f;
    std::cout << "number 6 " << number6 << std::endl;

    //The suffix in the initialisation determines the type it is stored as

    //small numbers get printed in scientific notation to the precision limit

    std::cout <<"-----------------------------------"<< std::endl;
    double number7 {0.00000000003498f};
    std::cout << "number 7 " << number7 << std::endl;

    //lets test out division by 0

    double number8 {-5.6};
    double number9 {};
    double number10{};

    double result89 = number8 / number9;
    std::cout << "result of number8/number9 " << result89 << std::endl;

    double result810 {number8/number10};
    std::cout << "result of number8/number10 " << result810 <<std::endl;

    double result910 {number9/number10};
    std::cout << "result of number9/number10 " << result910 <<std::endl;

    //and this works with negative numbers too
    //NOTE YOU DONT HAVE TO SPECIFY THE WHETHER OR NOT A FLOATING POINT NUMBER IS SIGNED IN THE TYPE
    float number11{192400023.0f};
    std::cout << "number 11 " << number11 << std::endl;
    float number12{-192400023.0f};
    std::cout << "number 12 " << number12 << std::endl;
    float number13{-1.924000230e8f};
    std::cout << "number 13 " << number13 << std::endl;

    ///NOTE ACTUALLY scientific notation and signing dont result in precision loss

    return 0;





}

