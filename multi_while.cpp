#include <iostream>
using namespace std;
int main()
{int i=1;
    while(i<=9)
       {cout << i << " ";
       int j=1;
       while(j<=i)
       {cout << j << "x" << i << "=" << j*i << " ";
       j++;} 
       cout << endl;
       i++;}
    return 0;}
