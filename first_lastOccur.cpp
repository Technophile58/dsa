
#include <iostream>
#include<vector>

using namespace std;
void firstOccur(int arr[],int n,int target,int &ansIndex){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            ansIndex=mid;
            e=mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        //bhul jata hu
        mid=s+(e-s)/2;
    }
}

void lastOccur(int arr[],int n,int target,int &ansIndex){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            ansIndex=mid;
            s=mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        //bhul jata hu
        mid=s+(e-s)/2;
    }
}
int main()
{
int arr[]={2,4,4,5,5,6,6,6,6,9};
int size=sizeof(arr)/sizeof(arr[0]);
int target=6;
int firstOccur_Index=-1;
int lastOccur_Index=-1;
firstOccur(arr,size,target,firstOccur_Index);
cout<<"First occurance of "<<target<<" is "<<firstOccur_Index<<endl;

lastOccur(arr,size,target,lastOccur_Index);
cout<<"last occurance of "<<target<<" is "<<lastOccur_Index<<endl;

int total_occur=(lastOccur_Index-firstOccur_Index)+1;
cout<<"Total occurance of "<<target<<" is "<<total_occur;

    return 0;
}