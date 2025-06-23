#include<iostream>
using namespace std;

int main(int n, char** z)
{
    char c='s';
    static int count=0;    //count retains its value b/w function call.
    cout<<"hello world!"<<endl;
    count++;
    if(count==10)
        exit(0);

    main(6,c);
    return 0;
}


