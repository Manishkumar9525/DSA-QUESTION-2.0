#include<iostream>
#include<vector>
#include<set>
#include <unordered_map>
#include <algorithm>
using namespace std;


int FindLarge_Element(int arr[],int size){
    int largest=0;
    for(int i=0;i<size;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    return largest;
}

int main(){
 int arr[] = {1, 2, 4, 7, 7, 5};  
  int size=sizeof(arr)/sizeof(arr[0]);

  int large_element=FindLarge_Element(arr,size);
  cout<<"largest element is -> "<<large_element<<endl;
}
