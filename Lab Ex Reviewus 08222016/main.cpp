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
    
    // Goodbye World
    cout << "Goodbye, World!\n";
    
    return 0;
}
#endif
