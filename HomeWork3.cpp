// HomeWork3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int const a(5), b(2), c(3), d(4), e(40);

int main()
{
    // Task 1
    int comparison = 0;
    cout << a * (b + (static_cast <float>(c) / d )) << endl;
    
    // Task 2
    comparison = (c <= 21) ? (c - 21) : ((c - 21) * 2);
    cout << comparison << endl;
    cout << ((e <= 21) ? (e - 21) : ((e - 21) * 2)) << endl;
    
    // Task 3
    int arrayOfInt[3][3][3] = {0};
    arrayOfInt[1][1][1] = 123465;
    int* arrayPtr = &arrayOfInt[1][1][1];
    cout << *arrayPtr << endl;
    
    // Task 4
    extern const int ext_a, ext_b, ext_c, ext_d;
    cout << ext_a << ext_b << ext_c << ext_d << endl;
    cout << ext_a * (ext_b + (static_cast <float>(ext_c) / ext_d)) << endl;

    std::cout << "Hello World!\n";
}
