#include <iostream>
using namespace std;

void interleave(int *a, int aLength, int *b, int bLength, int *c, int cLength,
                int *interArr, int interArrLength );

int main() {
    int a[]={12,24,6,8,24,16,9,13,12,17,16,22,17,9,18};
    int b[]={1,2,3,4,5,1,2,6,7};
    int c[]={2,22,11,2,16,11};
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
