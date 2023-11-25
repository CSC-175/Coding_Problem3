#include <iostream>
using namespace std;

void interleave(int *a, int aLength, int *b, int bLength, int *c, int cLength,
                int *interArr, int interArrLength );

int main() {
    int a[]={1,4};
    int b[]={ 2,5};
    int c[]={3,6};
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

