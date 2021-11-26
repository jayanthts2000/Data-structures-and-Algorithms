#include <iostream>
using namespace std;
/*
int main()
{
    int a;
    cout<<"Hello Coders"<<endl;
    cin>>a;

    return 0;
}
*/
/*

0 *
1 **
2 ***
3 ****
4 *****

*/
/*
int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= 5; j++)
        {
            if(i >= j)
                cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
*/

int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i + j >= 4)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
