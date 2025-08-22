/*We are going to understand and write our first lil program


*/

#include <iostream> //This essentially lets you print things to the console

//Lets write a function that print hello world to the console


// int main(){
//     std::cout << "Hello World" << std::endl;
//     return 0;
// }

//IT WORKS UWU >^w^<

/*The main function is something called the entry point of your cpp program
It is the first thing that is going to be executed
I don't really know what this means ie, if it means you can have a whole bunch of stuff
written down but still the main function will be executed first
or if it means something entirely different
But we will see*/

// int main(){
//     std::cout << "Number 1" << std::endl;
//     std::cout << "Number 2"; 

//     return 0;
// }    



// The std::endl command ensures what follows comes on a new line
//interestingly if you dont put std::endl after the second cout statement 
//it prints Number 2 on before the (base) xau_uni_... in the terminal on the same line
//I just thought that was weird


int main(){
    std::cout << "Number 1" << std::endl;
    std::cout << "Number 2"; 
    std::cout << "Number 3"<< std::endl; 
    return 0;


}    

//This prints out Number 2 and Number 3 on the same line

//return 0 is a way for to tell the OS it has finished running or if it has run into a problem
//std cout and endl come from the <iostream> library

//The one important thing to know about comments is that you cannot nest block comments
//Use it sparingly, don't write a novel