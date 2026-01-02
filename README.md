# Hollow-diamond
C++ code for hollow diamond.
<br>
#include <iostream>
<br>
using namespace std;
<br>
int main(){
<br>
    int n;
<br>
    cout<<"Enter value of n: ";
<br>
    cin>>n;
<br>
    cout<<endl;
<br>

    for (int j = 0; j < n; j++)
<br>
        {
<br>
            cout<<" ";
<br>
        }
              <br>
    cout<<"* "<<endl;
    <br>
    

    for (int i = 0; i < n; i++)<br>
    {<br>
        if (i<6)<br>
        {<br>
        for (int j = 0; j < n-1-i; j++)<br>
        {<br>
            cout<<" ";<br>
        }<br>
        for (int k = 0; k < 1; k++)<br>
        {<br>
            cout<<"* ";<br>
        }<br>
        for (int l = 0; l < i ; l++)<br>
        {<br>
            cout<<"  ";<br>
        }<br>
        for (int k = 0; k < 1; k++)<br>
        {<br>
            cout<<"* ";<br>
        }<br>
        cout<<endl;<br>
        }<br>

        else if (i>5)<br>
        {<br>
            for (int j = 0; j < i; j++)<br>
        {<br>
            cout<<" ";<br>
        }<br>
        for (int k = 0; k < 1; k++)<br>
        {<br>
            cout<<"* ";<br>
        }<br>
        for (int l = 0; l < n-1-i ; l++)<br>
        {<br>
            cout<<"  ";<br>
        }<br>
        for (int k = 0; k < 1; k++)<br>
        {<br>
            cout<<"* ";<br>
        }<br>
        cout<<endl;<br>
        }<br>
    }<br>

    for (int j = 0; j < n; j++)<br>
        {<br>
            cout<<" ";<br>
        }<br>
    cout<<"* "<<endl;<br>

    return 0;<br>
}
