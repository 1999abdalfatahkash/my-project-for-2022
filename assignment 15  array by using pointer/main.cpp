#include <iostream>

using namespace std;

int main()
{
   int a[5];
    int *ptr;
    ptr=a;


    cout<<"enter the elements of array:"<<endl;

  for(int i=0;i<5;i++)
  {
      cin>>a[i];
  }


   cout<<endl;
     cout<<endl;

   cout<<"reverse array"<<endl;
     cout<<endl;

  ptr=ptr+4;
  for(int i=4;i>=0;i--)
  {
     cout<<*(ptr--)<<endl;
  }


    return 0;
}
