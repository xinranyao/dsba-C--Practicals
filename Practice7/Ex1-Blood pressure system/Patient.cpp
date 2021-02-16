//
//  Patient.cpp
//  P7 for submission
//
//  Created by 姚欣然 on 2/16/21.
//

#include "Patient.hpp"
#include "Blood.hpp"

Patient::Patient(string name){ //constructor
    this -> name = name;
    this -> entries = vector<Blood>();
}

void Patient::addRecord(Blood record){
    this -> entries.push_back(record); //use pushback to add in the end
}


void Patient :: printReport(){
    vector<Blood> highestAbnormal =vector<Blood>();
    int max = 140;
    double avgDiastolic = 0.0;
    
// detect highest abnormal systolic pressure
for(int i=0;i< this ->entries.size();i++){
    avgDiastolic+=entries[i].getDia();
    if ( entries [i]. getSys()>max){
        highestAbnormal.clear();
        highestAbnormal.push_back(entries[i]);
        max=entries[i].getSys(); // updates the max threshold
        
    }
    
    // if a the pressure is abnormal and equal to current highest add the records
    else if ( entries[i]. getSys()==max){ highestAbnormal.push_back(entries[i]);
    } }
    cout << "Blood Pressure Records for Patient " << this -> name << endl;
    
    if (highestAbnormal.size()==0)
    cout << "Result: No measurement was too high " << endl;
    
    else {
        cout << "THE ABNORMAL SYSTOLITIC PRESSURE OF THIS PATIENT: "<< endl;
    for(int i=0;i<highestAbnormal.size();i++){
        cout << '\n';highestAbnormal[i].print ();
    }
    }
    cout << "average diastolic pressure: " << avgDiastolic/entries.size() << endl; 
}

