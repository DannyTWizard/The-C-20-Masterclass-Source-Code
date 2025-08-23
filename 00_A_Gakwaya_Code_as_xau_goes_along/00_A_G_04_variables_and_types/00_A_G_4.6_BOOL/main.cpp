

///We are going to try to make some simple if statements with booleans

#include <iostream>

int main(){

    bool red_light {true};
    bool green_light {false};

    if (red_light==true){
        std::cout << "Stop" << std::endl;
    }else{
        std::cout << "Go" << std::endl;
    
    }

    if (green_light){
        std::cout << "Go" << std::endl;
    }else{
        std::cout << "Stop" << std::endl;
    }

    std::cout << std::boolalpha;
    std::cout << "red light is " << red_light << std::endl;
    std::cout << "green light is " << green_light << std::endl;
}



    