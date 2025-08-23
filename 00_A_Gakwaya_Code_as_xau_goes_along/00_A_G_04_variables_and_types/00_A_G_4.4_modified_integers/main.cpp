/*Here we are going to play with the different integer modifications*/
/*These apply only to integral types*/

#include <iostream>

//first lets try positive and negative numbers

int main(){
    signed int plus_bruh {42};
    signed int minus_bruh {-42};

    std::cout << "size of plus bruh " << sizeof(plus_bruh) << std::endl;
    std::cout << "size of plus bruh " << sizeof(minus_bruh) << std::endl;

    //now lets start with the short modifiers

    short short_bruh {42};
    std::cout << "size of short  " << sizeof(short_bruh) << std::endl;
    short int short_int_bruh {42};
    std::cout << "size of short int " << sizeof(short_int_bruh) << std::endl;
    signed short signed_short_bruh {42};
    std::cout << "size of signed short " << sizeof(signed_short_bruh) << std::endl;
    signed short int signed_short_int_bruh {42};
    std::cout << "size of signed short int " << sizeof(signed_short_int_bruh) << std::endl;
    unsigned short unsigned_short_bruh {42};
    std::cout << "size of unsigned short " << sizeof(unsigned_short_bruh) << std::endl;
    unsigned short int unsigned_short_int_bruh {42};
    std::cout << "size of unsigned short int " << sizeof(unsigned_short_int_bruh) << std::endl;


    int int_bruh {42};
    std::cout << "size of int " << sizeof(int_bruh) << std::endl;
    signed signed_bruh {42};
    std::cout << "size of signed " << sizeof(signed_bruh) << std::endl;
    unsigned unsigned_bruh {42};
    std::cout << "size of unsigned " << sizeof(unsigned_bruh) << std::endl;
    signed int signed_int_bruh {42};
    std::cout << "size of signed int " << sizeof(signed_int_bruh) << std::endl;
    unsigned int unsigned_int_bruh {42};
    std::cout << "size of unsigned int " << sizeof(unsigned_int_bruh) << std::endl;

    long long_bruh {42};
    std::cout << "size of long  " << sizeof(long_bruh) << std::endl;
    long int long_int_bruh {42};
    std::cout << "size of long int " << sizeof(long_int_bruh) << std::endl;
    signed long signed_long_bruh {42};
    std::cout << "size of signed long " << sizeof(signed_long_bruh) << std::endl;
    signed long int signed_long_int_bruh {42};
    std::cout << "size of signed long int " << sizeof(signed_long_int_bruh) << std::endl;
    unsigned long unsigned_long_bruh {42};
    std::cout << "size of unsigned long " << sizeof(unsigned_long_bruh) << std::endl;
    unsigned long int unsigned_long_int_bruh {42};
    std::cout << "size of unsigned long int " << sizeof(unsigned_long_int_bruh) << std::endl;


    long long long_long_bruh {42};
    std::cout << "size of long long  " << sizeof(long_long_bruh) << std::endl;
    long long int long_long_int_bruh {42};
    std::cout << "size of long long int " << sizeof(long_long_int_bruh) << std::endl;
    signed long long signed_long_long_bruh {42};
    std::cout << "size of signed long long " << sizeof(signed_long_long_bruh) << std::endl;
    signed long long int signed_long_long_int_bruh {42};
    std::cout << "size of signed long long int " << sizeof(signed_long_long_int_bruh) << std::endl;
    unsigned long long unsigned_long_long_bruh {42};
    std::cout << "size of unsigned long long " << sizeof(unsigned_long_long_bruh) << std::endl;
    unsigned long long int unsigned_long_long_int_bruh {42};
    std::cout << "size of unsigned long long int " << sizeof(unsigned_long_long_int_bruh) << std::endl;




    return 0;

}

