#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cin>>row>>column;
    for(int i=0; i<row; i++)
    {
        if(i%2==0)
        {
            for(int k=0; k<column; k++)
                cout<<'#';
            cout<<endl;
        }
        else if(i%4==1)
        {
            for(int k=1; k<column; k++)
                cout<<'.';
            cout<<'#'<<endl;
        }
        else if(i%4==3)
        {
            cout<<'#';
            for(int k=1; k<column; k++)
                cout<<'.';
            cout<<endl;
        }
    }
    return 0;
}
