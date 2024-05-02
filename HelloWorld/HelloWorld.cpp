#include <iostream>
/* Functions */
int add(int a, int b) {
 
    return a + b;
}

int main() {
    /* A simple string */
    std::cout << "Hello World!" << " " << "C++ is quite interesting!" << std::endl;

    /* A simple integer variable */
    int number = 25;
    std::cout << "The number is: " << number << std::endl;

    /* Number Arrays */
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "The number is: " << numbers[6] << std::endl;

    /* Char Arrays */
    char name[] = "Jake";
    std::cout << "Our name is: " << name << std::endl;

    /* Flow control */
    /* For */
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == 5) {
            std::cout << numbers[i] << std::endl;

            break;
        }
    }

    /* Using Functions */
    std::cout << "The sum is: " << add(8, 2) << std::endl;

    return 0;
}