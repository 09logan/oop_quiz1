/*
 Program: Question 4 from quiz 1.
 Name : Bidur Banstola
 Roll: 0304
 Output: 44	
*/

#include<iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int* p;
    int* q;
    a = 3;
    p = &a;
    q = p;
    b = 4;
    *q = b;
    cout << *p <<" " << a;
}
