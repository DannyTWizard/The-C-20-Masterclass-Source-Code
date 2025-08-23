

#include <iostream>

int main(){

    auto var1 {12};
    auto var2 {3.14};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {"E"};

    //int modifier suffixes

    auto var6 {12u};
    auto var7 {12ul};
    auto var8 {12ll};

    //Now confirm they have been deduced right

    std::cout << "var1 occupies " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies " << sizeof(var8) << " bytes" << std::endl;

}