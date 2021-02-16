//
//  Patient.hpp
//  P7 for submission
//
//  Created by 姚欣然 on 2/16/21.
//

#ifndef Patient_hpp
#define Patient_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "Blood.hpp"
#include "Date.hpp"
using namespace std;

class Patient{
protected :
    string name;
    
    //use vector for dynamic handling blood records
    vector<Blood> entries;
    
public :
    Patient( string );
    void addRecord(Blood);
    void print();//?
    void printReport();
};

#endif /* Patient_hpp */
