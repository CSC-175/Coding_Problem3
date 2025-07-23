#include <iostream>
#include "./P4.cpp"
using namespace std;

int main() {
    int a[]={5,10};
    int b[]={2,4,6};
    int c[]={3,6,9,12};
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

