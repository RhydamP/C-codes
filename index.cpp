#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,data;
    cin >>n ;
    int a[n];
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    cin >>data;
    int low=0;
    int high=n-1;
    int ceil=0;
    int floor=0;
    while(low<=high){
       int mid= (low+high)/2;
       if(data > a[mid]){
            low=mid+1;
            floor=a[mid];
       }
       else if(data < a[mid]){
           high=mid-1;
           ceil=a[mid];
       }
       else{
            floor=a[mid];
            ceil=a[mid];
           break;
       }
      
    }
     cout<< ceil << endl << floor;
    
}