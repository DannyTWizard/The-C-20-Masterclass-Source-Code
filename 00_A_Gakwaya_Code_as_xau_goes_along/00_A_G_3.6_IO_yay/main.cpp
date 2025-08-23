

#include <iostream>
#include <string>

int main(){
    // std::cout << "Hello C++20" << std::endl;

    // int Age {22};
    // std::cout << "Age:" << Age << std::endl;

    // std::cerr << "oops" << std::endl;
    // std::clog << "logarithm" << std::endl;
    // return 0;

    // int Age1;
    // std::string Name;

    // std::cout << "please enter name and age " << std::endl;
    // // std::cin >> Name;
    // // std::cin >> Age1;

    // std::cin >> Name >> Age1;

    //Grabbing data with spaces with getline

    std::string full_name;
    int age3;

    std::cout << "please enter name and age " << std::endl;

    std::getline(std::cin,full_name);
    std::cin >> age3;






    std::cout << " wagwan my slime " << full_name 
    << " you are " << age3 << " years old innit" << std::endl;

    return 0;






}