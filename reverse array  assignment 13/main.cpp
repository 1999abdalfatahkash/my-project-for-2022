#include <iostream>
using namespace std;

 void rverse_array(int abd[],int n) {

 for(int i=0;i<n;i++)   {

   cin>>abd[i];

                        }
        for(int i=0;i<n;i++)   {

          cout<<abd[i]<<"\t";

                               }
          cout<<endl;
           cout<<endl;
            cout<<endl;

                       for(int i=n-1;i>=0;i--)   {

                cout<<abd[i]<<"\t";

                                              }


 }



int main()
{   int n;
    int arr[n];
    cin>>n;
    cout<<"enter of elements array:"<<endl;

    rverse_array(arr,n);
    return 0;
}
