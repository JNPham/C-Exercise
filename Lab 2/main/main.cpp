#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student stu[5]; 
    stu[0] = Student("Tom", 85);
    stu[1] = Student("Alice", 71);
    stu[2] = Student("Jack", 93);
    stu[3] = Student("Janet", 76);
    stu[4] = Student("John", 66); 

    stu[0].print();
    stu[1].print();
    stu[2].print();
    stu[3].print();
    stu[4].print();

    return 0;
}
