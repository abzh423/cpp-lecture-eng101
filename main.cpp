#include <iostream>

namespace mycode
{
    int test_one = 1;
    int test_two = 2;

    int floating_var = 100.10f;

    bool bool_var = static_cast<bool>(test_one);

    void foo()
    {
        std::cout << test_one << test_two << " foo" << std::endl;
    }

    typedef enum
    {
        ACTIVE,
        DISMISSED,
        BANED
    } AcademicStatus;

    typedef struct
    {
        int id;
        std::string name;
        AcademicStatus status;
    } MainStruct;

    int myArray[3] = {1, 2, 3};
    int myArray2[10] = {0};

    // better version of array for C++
    std::array<int, 3> array_three = {1, 2, 3};

}

int main()
{
    // programming is about breaking up a huge task on smaller parts
    // and then combining them together to get the final result
    // reusing the code is the key to programming, DRY - Don't Repeat Yourself
    // symantics is the meaning of the code
    // syntax is the structure of the code
    // the lower you can go, in other words closer to hardware hardware the better you can optimize the task
    // compiler makes an object file from the source code. Linker links all of the code in separate files.
    // linker gives you an executable
    // different kinds of volatile memory are there because of the price.
    // first is the preprocessing stage, where the compiler preprocesses the code and generates intermediate code
    // second is the compilation stage, where the compiler compiles the intermediate code to object code
    // third is the linking stage, where the linker links the object code to an executable

    std::cout << "There are " << 100 << " ways I love you." << std::endl;

    mycode::AcademicStatus Abulkhaiyr = mycode::AcademicStatus::ACTIVE;

    switch (Abulkhaiyr)
    {
    case mycode::ACTIVE:
        std::cout << "Abulkhaiyr is active" << std::endl;
        break;
    case mycode::DISMISSED:
        std::cout << "Abulkhaiyr is dismissed" << std::endl;
        break;
    case mycode::BANED:
        std::cout << "Abulkhaiyr is banned" << std::endl;
        break;
    default:
        std::cout << "Abulkhaiyr is unknown" << std::endl;
        break;
    }

    mycode::foo();

    return 0;
}