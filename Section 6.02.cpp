// Textbook Question 34

#include <iostream>
using namespace std;

int cube(int num);

int main()
{
    int result;
    result = cube(4);
    cout << "The cube of 4 is " << result << endl;
    return 0;
}

int cube(int num)
{
    return num * num * num;
}







