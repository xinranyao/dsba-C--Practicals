//
//  main.cpp
//  A generic finite-size stack
//
//  Created by 姚欣然 on 2/16/21.
//

#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {
    
    Stack <int> s = Stack <int> (8);
    
    //a test code
    s.print();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.print();
    s.pop();
    s.pop();
    s.print();
    
   
    return 0;
}

