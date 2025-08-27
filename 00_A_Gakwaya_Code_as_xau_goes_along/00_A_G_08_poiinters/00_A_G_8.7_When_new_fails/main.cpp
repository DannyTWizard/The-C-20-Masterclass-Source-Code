

#include <iostream>



///

int main(){

    //When we allocate memory on the heap using new, it has a chance to faol
    //usually this is because of a memory overflow, meaning we are trying to
    //allocate more memory than the system has available

    //Two examples of artificially induced new failures

    int  *p_large_array {nullptr};
    p_large_array= new (std::nothrow) int[10000000000000000];

    //We can use no throw to tell new to return a null ptr if it fails

    if (p_large_array==nullptr){
        std::cout << "memalloc failed" <<std::endl;
    }

    delete p_large_array;

    std::cout<<"program finished"<<std::endl;


    //We can try something similar with a loop

    for (size_t i{0}; i<100000;++i){
        try{
            int *ptr = new int[100000000000000000];
            std::cout<<"iteration: " << i <<std::endl;

        }catch(std::exception& ex){
            std::cout << "memalloc failed at iteration: " << i << " with exception "<<ex.what()<<std::endl;
            //auto ptr_val= *ptr;
            //std::cout << "ptr_val: " << ptr_val << std::endl;
            //OOOHHHH Ok so the above couts failed which means ptr isnt a nullptr it actually wasnt declared
            //break;
            
        }
        

    }

    std::cout<<"program finished"<<std::endl;
    return 0;
    

}