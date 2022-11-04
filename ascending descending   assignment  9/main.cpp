#include <iostream>

#include<bits/stdc++.h>
using namespace std;

void asc_dsc_func(int a[],int n)
{

sort(a,a+n);


  for(int i=0;i<n;i++){

   cout<<a[i]<<" "<<endl;

}

}


int main()
{
    int arr[]={1,12,22,7,64,25,31,4};
    int len = sizeof(arr) / sizeof(arr[0]);
    asc_dsc_func(arr,len);
    return 0;
}








