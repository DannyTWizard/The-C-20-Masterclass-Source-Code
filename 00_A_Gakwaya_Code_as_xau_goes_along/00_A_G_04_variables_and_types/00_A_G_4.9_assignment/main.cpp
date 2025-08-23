

/*Assignment*/


#include <iostream>

int main(){
    int var1 {123};
    std::cout << "var1 is " << var1 << std::endl;


    var1=321;
    std::cout << "var1 is now " << var1 << std::endl;
    std::cout << std::boolalpha;

    bool var2 {true};
    std::cout << "var2 is " << var2 << std::endl;
    var2 = false;
    std::cout << "var2 is now " << var2 << std::endl;
    std::cout << "-----------------------------------"<< std::endl;

    auto var3 {123u};
    std::cout << "var3 is " << var3 << std::endl;
    var3 =-5;
    std::cout << "var3 is now " << var3 << std::endl;

    return 0;
    
}