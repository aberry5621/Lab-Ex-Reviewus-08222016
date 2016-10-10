//
//  main.cpp
//  Lab Ex Reviewus 08222016
//
//  Created by ax on 10/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

// C-Proprocessor-Macro

# define prog 2

#include <iostream>
using namespace std;

#if(prog == 1)

int main() {
    
    // Hello World
    cout << "Hello, World!\n";
    
    return 0;
}

#elif(prog == 2)

int main() {
    
    // Declare memory storage we need
    // We use double for floating point numbers to be stored for each of
    // the memory locations named: sum, difference, product and quotient
    // Initialize the memory locations to 0.0
    
    cout << "Aritmetic Operations\n";
    
    double sum = 0.0, difference = 0.0, product = 0.0, quotient = 0.0;
    
    sum = 30 + 4;
    difference = 30 - 4;
    product = 30 * 4;
    quotient = 30 / 4;
    
    
    cout << sum << endl;
    cout << difference << endl;
    cout << product << endl;
    cout << quotient << endl;
    
    return 0;
}

#elif(prog == 3)

int main() {
    
    // Declare memory storage we need
    // We use double for floating point numbers to be stored for each of
    // the memory locations named: sum, difference, product and quotient
    // Initialize the memory locations to 0.0
    
    cout << "Aritmetic Operations\n";
    
    double sum = 0.0, difference = 0.0, product = 0.0, quotient = 0.0;
    
    sum = 30 + 4;
    difference = 30 - 4;
    product = 30 * 4;
    quotient = 30 / 4;
    
    
    cout << sum << endl;
    cout << difference << endl;
    cout << product << endl;
    cout << quotient << endl;
    
    return 0;
}


#endif
