#include<iostream>
using namespace std;

void swap(int ,int );
int main()
{
    int a,b;
    cout<<"\nEnter Two Number You Want To Swap \n";
    cin>>a>>b;
    cout<<"\nAfter Swapping Numbers Are Given below\n\n";
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
 int z;
 z=x;
 x=y;
 y=z;

 cout<<x<<"   "<<y<<" \n";
}
