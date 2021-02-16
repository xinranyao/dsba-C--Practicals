#ifndef Blood_hpp
#define Blood_hpp

#include <stdio.h>
#include "Date.hpp"

class Blood{
protected :
    int sys; //store the blood data and test date
    int dia;
    Date date;
    
public :
    //Blood(const int, const int , const Date);
    Blood(int, int, Date);
    int getSys();
    int getDia();
    Date getDate();
    void print();
};


#endif /* Blood_hpp */
