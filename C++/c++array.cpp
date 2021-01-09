#include<iostream>
#include<climits>
using namespace std;

linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    // Finding max and min in array 
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int maxNo=INT_MIN;
    // int minNo=INT_MAX;
    // for(int i=0;i<n;i++){
    //     maxNo=max(maxNo,arr[i]);
    //     minNo=min(minNo,arr[i]);
    // }
    // cout<<maxNo<<" "<<minNo<<endl;

    // Finding sum of each element in array
    // int n;
    // int sum =0;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=1;i<=n;i++){
    //     sum+=arr[i];
    // }
    // cout<<sum;
    
    // Searching an element in an array
    
    // linear search
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int key;
    // cin>>key;
    // cout<<linearSearch(arr,n,key)<<endl;

    // Binary search
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int key;
    // cin>>key;
    // cout<<binarySearch(arr,n,key)<<endl;

    // Sorting in array

    // Selecion sort
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<=n;i++){
    //     for(int j=i+1;j<=n;j++){
    //         if(arr[i]>arr[j]){
    //             int temp =arr[j];
    //             arr[j]=arr[i];
    //             arr[i]=temp;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // Bubble sort
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int c=1;
    // while(c<n){
    //     for(int i=0;i<n-c;i++){
    //         if(arr[i]>arr[i+1]){
    //             int temp=arr[i+1];
    //             arr[i+1]=arr[i];
    //             arr[i]=temp;
    //         }
    //     }
    //     c++;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // Insertion sort
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int c=arr[i];
        int j=i-1;
        while(arr[j]>c && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=c;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}