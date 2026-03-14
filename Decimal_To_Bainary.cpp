#include <iostream>
using namespace std;

int main()
{
    int no, a[100], i = 0, j;

    cout << "Enter a decimal no = ";
    cin >> no;
    if(no==0)
    {
        cout<<"0";
        
    }
     

    while (no > 0)
    {
        a[i] = no % 2;
        no = no / 2;
        i++;
    }
 

    for (j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }

    return 0;
}