//
// Created by y50-70 on 9/19/2016.
//

#ifndef HAND_IN_3_1_TEST_H
#define HAND_IN_3_1_TEST_H

#include <iostream>


class Test {
private:
    // variables
    int id;
    string cn;  // course name
    string tn;  // test name
    string dt;


    static int testNum;

public:
    // getter methods
    int getId(){ return id; }
    string getCourseName(){ return cn; }
    string getTestName(){ return tn; }
    string getDateTime(){ return dt; }

    // setter methods
    void editTest(string, string, string);

    Test(string, string, string);
    Test();

    ~Test();

    // return the information about an object
    void testInfo();
};


#endif //HAND_IN_3_1_TEST_H
