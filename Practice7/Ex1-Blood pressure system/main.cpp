//
//  main.cpp
//  P7 for submission
//
//  Created by 姚欣然 on 2/16/21.
//

#include <iostream>
#include <vector>
#include "Patient.hpp"
#include"Blood.hpp"
#include"Date.hpp"



int main(int argc, const char * argv[]) {
Patient mary = Patient("Mary");
    
    mary.addRecord(Blood(94,61,Date(2,5,2013)));
    mary.addRecord(Blood(97,65, Date(3,5,2013)));
    mary.addRecord(Blood(144,99, Date(4,5,2013)));
    mary.addRecord(Blood(123,88, Date(5,5,2013)));
    mary.addRecord(Blood(177,110, Date(6,5,2013)));
    mary.addRecord(Blood(145,89, Date(7,5,2013)));
    mary.printReport();




// test code with patients: Shawn and Andrew
Patient shawn = Patient("Shawn");
Patient andrew = Patient("Andrew");
    
    shawn.addRecord(Blood(139,87, Date(2,1,2021)));
    shawn.addRecord(Blood(140,100, Date(55,10,2020)));
    shawn.addRecord(Blood(142,88, Date(15,1,2021)));
    shawn.printReport();
    
    andrew.addRecord(Blood(141,88, Date(1,1,2021)));
    andrew.addRecord(Blood(123,70, Date(5,5,2020)));
    andrew.addRecord(Blood(167,93, Date(9,5,2020)));
    andrew.printReport();
return 0;
}
