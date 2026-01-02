// #include <iostream>
// using namespace std;
// int main(){
//     int n=11, m;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-1-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 0; k <= i ; k++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i ; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 0; k < n-i; k++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
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