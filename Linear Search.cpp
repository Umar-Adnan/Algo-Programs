#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter value at index "<<i<<": ";
        cin>>arr[i];
    }
    int target;
    cout<<"Enter value to search in the array: ";
    cin>>target;
    for(int i=0; i<n; i++){
		if(arr[i] == target){
		    cout<<"Value found at index "<<i<<endl;
		    return 1;
		}

    }
    

    return 0;
}
