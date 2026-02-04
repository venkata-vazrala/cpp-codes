#include <iostream>
#include <string>

// Define the Point struct with x and y ‘grouped’
struct Point {
    int x;
    int y;
};

int main() {
    // Declare a variable of type Point
    struct Point myPoint; 
    std::string a = "hello";
    
     std::cout<<a;
    // // Access and assign values to its members
    // myPoint.x = 10;
    // myPoint.y = 20;

    // // Print the values
    // std::cout << "The x-coordinate is: " << myPoint.x << std::endl;
    // std::cout << "The y-coordinate is: " << myPoint.y << std::endl;

    return 0;
}