#include <iostream>
using namespace std;

int main()
{
    int i,n;
    int* a;
    a=new int [n];
    cin>>n;
    for (i=0; i<n; i++)
        cin>>a[i];
    for (i=0; i<n; i++)
        cout<<&a[i]<<endl;
    return 0;
}
