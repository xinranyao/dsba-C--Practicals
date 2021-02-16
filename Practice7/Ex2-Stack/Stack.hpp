//
//  Stack.hpp
//  A generic finite-size stack
//
//  Created by 姚欣然 on 2/16/21.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>

#include "StackI.hpp"
using namespace std;

template <typename T>

class Stack:StackI<T>{
    
protected :
    int topitem;
    int nitems;
    int size ; // size of the stack
    T s[];
    
public :
    // the first constructor that creates a stacks of 20 elements
    Stack(){
        s [20];
        topitem=0;
        nitems=0;
        size =20; }
    
    // the second constructor that creates a stack of n elements
    Stack(int n){
        s[n];
        topitem=0;
        nitems=0;
        size = n; }

        void push(T t){
            if (nitems>=0 && nitems<size){
                s [ topitem++]=t;
                nitems++; }
}
    
    //define pop() to remove the top item
    void pop(){
        if (nitems>0){
            --topitem;
            --nitems; }
        
    }
    T top(){
    if (nitems>0){
        return s[topitem]; }
    else
        return s [0];
    }
    
    
    //difine print() to display
    void print(){
        if (nitems==0){cout<< "This is an empty stack"<<endl;//when nitem is zero
        }
        else{
            for (int i = topitem -1;i>0;i--){
                if (i == topitem-1)
                    cout << "the top one -> \n";
                else cout << s[i]<< endl;
            }
        }
    }
    
    
    bool isEmpty(){
    return (nitems==0)? true : false;
    } };

    
#endif /* Stack_hpp */
