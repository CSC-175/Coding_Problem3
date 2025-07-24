#include <iostream>
#include "../P3.cpp"
using namespace std;

int main() {
    int a[]={10};
    int b[]={15,25};
    int c[]={20,30,35,40};
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

