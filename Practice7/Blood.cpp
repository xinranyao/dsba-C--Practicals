#include "Blood.hpp"

Blood::Blood(const int sys, const int dia, const Date date): date(date){
    this ->sys = sys;
    this ->dia = dia;
}
    


int Blood::getSys(){
    return this -> sys;
}
int Blood::getDia(){
    return this -> dia;
}

Date Blood::getDate(){
    return this -> date;
}


void Blood::print(){
    cout<<"Systolic: " << sys <<", Diastolic: " << dia <<"" << date.getDay()<< "/" << date.getMonth() << "/" << date.getYear() << endl;
}
