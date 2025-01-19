#include <iostream>
using namespace std;

int main() {
    cout<<"how many element"<<endl;
    int a;
    cin>>a;
    cout<<"enter the elements"<<endl;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<"reversed an array"<<endl;
    for(int i=a-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}