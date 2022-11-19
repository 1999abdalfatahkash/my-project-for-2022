#include <iostream>

using namespace std;

void swap(int&x,int&y)
{
   int z=x;
       x=y;
       y=z;


}


int main()

{ int x=20,y=30;
  swap(x,y);
  cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
    return 0;
}
