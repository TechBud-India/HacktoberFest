#include<iostream>

using namespace std;


int linearSearch(int *a, int key, int n){
    int i;
    for(i = 0 ; i < n ; i++)
    {
        if(key == a[i])
            return i;   
    }
    return -1;
}

int binarySearch(int *a, int key, int n)
{
    int i, mid = n/2;
    for(i=0;;)
    {
        if(key == a[mid])
            return mid;
        else  if(key < a[mid])
        {
            
            mid = mid/2;

        }
    }
    
}
int main()
{
    string b= "gayretard";
    int length = 5 , key = 1, a[] = { 10, 120, 20, 11, 55, 23}, b[] = {3, 5, 11, 20, 32};
    cout<<"Required Index: "<<linearSearch(a,key,length);
    return 0;
}