#include <iostream>
using namespace std ;
int main()
{
   int nums1[6]= {1,2,3,0,0,0};
   int nums2[3] = {2,5,6} ;
    int m=3; //nums1 elements before merging
   int n=3; //nums2 elements in merging
    for(int i=0;i<m;i++)
       {
          nums1[i]=nums1[i] ;
          cout<<nums1[i] <<" " ;
       }
       cout<<endl ;
       for(int i=0;i<n;i++)
       {
          nums1[i]=nums2[i] ;
          cout<<nums1[i]<<" " ;
       }
       cout <<endl ;
       int min ;
            for(int i=0;i<5;i++)
               {
                       min = i ;
                    for(int j= i+1;j<6;j++)
                            {
                               if(nums1[j]<nums1[min])
                                      min =j ;
                            }
                           swap(nums1[min],nums1[i]);
                }
       for(int i=0;i<6;i++)
       {
           cout<<nums1[i]<<" " ;
       }
    return 0 ;
}
