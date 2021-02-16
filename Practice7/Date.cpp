#include "Date.hpp"

int Date::getDay(){
    return this ->day;
}

int Date::getMonth(){
    return this -> month;
}

int Date::getYear(){
    return this -> year;
}

Date::Date( int d, int m, int y){
//Date::Date(const int d, const int m, const int y){

    this -> day = d;
    this -> month = m;
    this -> year = y;
}


void Date::print(){
    cout << day<<"/"<< month << "/" << year;
}
