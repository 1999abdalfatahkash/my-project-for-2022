#include <iostream>
using namespace std;


void arrange_fun(int abd[],int n)
{


char x;
cout<<"Enter the order if it is ascending or descending"<<endl;
cin>>x;
int temp;

for(int i=0;i<n;i++)
{
    cin>>abd[i];        // loop for input

}



if(x=='a')                     {
 for(int j=0;j<n;j++) {
    for(int i=0;i<n;i++)  {         //loop for Ascending order
  if(abd[i]<abd[i+1])
   {
     temp=abd[i];
     abd[i]=abd[i+1];
     abd[i+1]=temp;

    }
                           }
                    }            }






 if(x=='d')                   {
 for(int j=0;j<n;j++) {
   for(int i=0;i<n;i++) {


    if(abd[i]>abd[i+1])
     {
     temp=abd[i];
     abd[i]=abd[i+1];
     abd[i+1]=temp;
     }
                        }
                      }
                               }

                             //loop for descending order

    for(int i=0;i<n;i++)
{
    cout<<abd[i]<<"\t";
}
                        }

int main()
{  int n;
     int arr[n];

    cin>>n;
   cout<<"enter the elements of arrays:"<<endl;
   


   arrange_fun(arr,n);


    return 0;
}
