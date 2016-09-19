//
// Created by y50-70 on 9/19/2016.
//

#include "Test.h"
#include <iostream>

using namespace std;

// declaring the start number of Students
int Test::testNum = 1;

// Constructor
Test::Test(string course, string test, string date){
    this -> id = testNum;
    this -> cn = course;
    this -> tn = test;
    this -> dt = date;
    Test::testNum++;
}
Test::Test(){}

// Destructor
Test::~Test(){
    cout << this->cn << this->tn << " was destroyed" << endl;
}

// Test Info method
void Test::testInfo(){
    cout << "test id = " << this->id << ", course name = " << this->cn << ", test name = " << this->tn << ", date = " << this->dt << endl;
}

// Edit Test
void Test::editTest(string course, string test, string date) {
    this -> cn = course;
    this -> tn = test;
    this -> dt = date;
}
