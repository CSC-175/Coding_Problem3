#include <iostream>
#include "./P4.cpp"
using namespace std;

int main() {
    int a[]={23,52,16};
    int b[]={9,10,42,89,15};
    int c[]={2,22};
    int element = sizeof(int);
    int sumSize = (sizeof(a)+sizeof(b)+sizeof(c))/element;
    int iArray[sumSize];

    interleave(a,sizeof(a)/element,b,sizeof(b)/element,c,sizeof(c)/element,iArray,sumSize);

    cout << "The interleaved array is: ";
    for (int i=0; i<sumSize; i++)
        cout << iArray[i] << " ";
    cout << endl;
    return 0;
}

