//
//  StackI.hpp
//  A generic finite-size stack
//
//  Created by 姚欣然 on 2/16/21.
//

#ifndef StackI_hpp
#define StackI_hpp

#include <stdio.h>

template <typename T> class StackI{
    
public :
    virtual void push(T t) = 0;
    virtual void pop() = 0;
    virtual T top() =0;
    virtual bool isEmpty() =0;
    virtual void print()=0;
};
    
#endif /* StackI_hpp */
