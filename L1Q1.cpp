#include <iostream>
using namespace std;
#define MAX 40
int N,a[MAX];
int sum(){
    int sum=0;
    for (int k = 0; k < (N-1); k++)
    {
        sum+=a[k];
    }
    return sum;
}
int checker(){
    return N*(N+1)/2-sum();
}
int main()
{
    cout<<"Enter the size of the array:"<<endl;
    cin>>N;
    cout<<"enter the elements"<<endl;
    for (int i = 0; i<(N-1); i++)
    {
        cin>>a[i];   
    }
    cout<<"Missing Element: "<<checker()<<endl;
    return 0;
}

