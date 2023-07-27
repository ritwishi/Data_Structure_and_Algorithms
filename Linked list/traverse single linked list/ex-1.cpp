#include <bits/stdc++.h>
using namespace std;

void fun(int *ptr)
{
    *ptr = 10;
}

int main()
{
    int x = 20;
    int *ptr;
    ptr = &x;

    fun(ptr);
    cout << (*ptr) << "\n";
}