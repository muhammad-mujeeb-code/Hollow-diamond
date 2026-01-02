# Hollow-diamond
C++ code for hollow diamond.
#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter value of n: ";
    cin>>n;
    cout<<endl;

    for (int j = 0; j < n; j++)
        {
            cout<<" ";
        }
    cout<<"* "<<endl;
    

    for (int i = 0; i < n; i++)
    {
        if (i<6)
        {
        for (int j = 0; j < n-1-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 1; k++)
        {
            cout<<"* ";
        }
        for (int l = 0; l < i ; l++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < 1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        }

        else if (i>5)
        {
            for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 1; k++)
        {
            cout<<"* ";
        }
        for (int l = 0; l < n-1-i ; l++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < 1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
        }
    }

    for (int j = 0; j < n; j++)
        {
            cout<<" ";
        }
    cout<<"* "<<endl;

    return 0;
}
