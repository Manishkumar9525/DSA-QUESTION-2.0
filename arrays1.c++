#include<iostream>
#include<vector>
#include<set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// int FindLarge_Element(int arr[],int size){
//     int largest=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>largest) largest=arr[i];
//     }
//     return largest;
// }

// int FindSmallest_element(int arr[],int size){
//   int smallest=INT16_MAX;
//   for(int i=0;i<size;i++){
//      if(arr[i]<smallest) smallest=arr[i];
//   }
//   return smallest;
// }


// int second_largest(int arr[],int size){
//   int largest=INT16_MIN;
//   int sec_largest=INT16_MIN;

//  for(int i=0;i<size;i++){
//    if(arr[i]>largest){
//     sec_largest=largest;
//     largest=arr[i];
//    }else if(arr[i]<largest && arr[i]>sec_largest){
//     sec_largest=arr[i];
//    }
//  }
//  return sec_largest;

// }

// int second_smaller(int arr[],int size){
//   int smallest=INT16_MAX;
//   int sec_smallest=INT16_MAX;
//   for(int i=0;i<size;i++){
//     if(arr[i]<smallest){
//       sec_smallest=smallest;
//       smallest=arr[i];
//     }else if(sec_smallest > arr[i] && arr[i]!=smallest){
//       sec_smallest=arr[i]; 
//     }
//   }
//   return sec_smallest;
// }




// // Check if Array Is Sorted and Rotated

// bool Array_sortedOrRoteted(int arr[],int size){

//   int cnt=0;
//   for(int i=1;i<size;i++){
//     if(arr[i-1]>arr[i])cnt++;
//   }
//   if(arr[size-1]>arr[0])cnt++;
//   return cnt<=1;
// }


// int remove_duplicates(vector<int>&ans){
//   int s=ans.size();
//   int j=1;
//   for(int i=1;i<s;i++){
//      if(ans[i-1]!=ans[i]){
//       ans[j]=ans[i];
//       j++;
//      }
//   }
//  return j;
// }


// void Left_Rotate_the_Array_One(vector<int>&num){
//   int temp=num[0];
//   for(int i=1;i<num.size();i++){
//     num[i-1]=num[i];
//   }
//   num[num.size()-1]=temp;

// }

// void  reversedata(int s,int e,vector<int>&num){
//   while(s<e){
//     swap(num[s],num[e]);
//     s++;e--;
//   }

// }

// vector<int>Rotate_array_by_K_elements(vector<int>&num,int k){
//   int n=num.size();
//   k=k%n;
//   reversedata(0,k-1,num);
//   reversedata(k,n-1,num);
//   reversedata(0,n-1,num);
//   return num;
// }

// void Move_zero(vector<int>&num){
//   int j=0;
//   for(int i=0;i<num.size();i++){
//      if(num[i]!=0){
//       swap(num[j],num[i]);
//       j++;
//      }
//   }
  
// }

// bool Linear_search(int arr[],int size,int target){
//    for(int i=0;i<size;i++){
//     if(arr[i]==target){
//       return true;
//     }
//    }
//    return false;
// }

// vector<int>Unique_of_two_array(vector<int>num1,vector<int>num2){
//   int n1=num1.size();
//   int n2=num2.size();
//   vector<int>ans;
//   set<int>s;
//   for(int i=0;i<n1;i++){
//     s.insert(num1[i]);
//   }
//   for(int i=0;i<n2;i++){
//     s.insert(num2[i]);
//   }
//   for(int i:s){
//     ans.push_back(i);
//   }
//   return ans;
// }

vector<int>Unique_of_two_array(vector<int>num1,vector<int>num2){
  int n1=num1.size();
  int n2=num2.size();
  vector<int>ans;
  
  unordered_map<int,int> mp;
  for(int i=0;i<n1;i++){
    mp[num1[i]]++;
  }
   for(int i=0;i<n2;i++){
    mp[num2[i]]++;
  }
  
  for(auto i:mp){ 
      ans.push_back(i.first);
  }
  return ans;
}

int Find_missing_number(vector<int>&num){
  int ans=0;
  int s = num.size()+1;
  for(int i=1;i<=s;i++){
    ans=ans^i;
  }
  for(int i=0;i<s-1;i++){
    ans=ans^num[i];
  }
  return ans;
}

int Maximum_Consecutive_One(vector<int>&num){
  int cnt=0;
  int max=0;
  for(int i=0;i<num.size();i++){
    if(num[i]==1){
      cnt++;
      if(cnt>max)max=cnt;
    }else{
      cnt=0;
    }
  }
  return max;
}

int number_that_appears_once(int arr[],int s){
  int ans=0;
  for(int i=0;i<s;i++){
    ans=ans^arr[i];
  }
  return ans;
}

int main(){
//  int arr[] = {1, 2, 4, 7, 7, 5};  
//   int size=sizeof(arr)/sizeof(arr[0]);

//   int large_element=FindLarge_Element(arr,size);
//   cout<<"largest element is -> "<<large_element<<endl;

//   int Smallest_element=FindSmallest_element(arr,size);
//   cout<<"smallest element is -> "<<Smallest_element<<endl;

//   int sec_Largest=second_largest(arr,size);
//   cout<<"second largest -> "<<sec_Largest<<endl;

//   int sec_smallest=second_smaller(arr,size);
//   cout<<"second Smallest -> "<<sec_smallest<<endl;


// ==============Check if Array Is Sorted and Rotated

//  int arr[]={3,4,5,1,2};  //int arr[]={5,4,6,7,8}
//  int size=sizeof(arr)/sizeof(arr[0]);
//  bool result= Array_sortedOrRoteted(arr,size);
//  if(result){
//   cout<<"this array is shorted and rotated";
//  }else{
//    cout<<"this array is not shorted and rotated";
 //}

//===============Remove duplicates from Sorted array
//  vector<int>arr={1,1,2,2,2,3,3};
//  int k= remove_duplicates(arr);
//  cout<<"unique element = "<<k<<endl;
//  cout<<"array : ";
//  for(int i=0;i<k;i++){
//   cout<<arr[i]<<" ";
//  }
 
 //===============Left Rotate the Array by One 

// vector<int>arr={1, 2, 3, 4, 5};
// Left_Rotate_the_Array_One(arr);
// for(int i=0;i<arr.size();i++){
//   cout<<arr[i]<<" ";
// }

//================ Rotate array by K elements

// vector<int>num={1, 2, 3, 4, 5, 6, 7};
// int k=2;

// vector<int>answer=Rotate_array_by_K_elements(num,k);
// for(int num :answer){
//   cout<<num<<" ";
//}

// =========================Move all Zeros to the end of the array
 
// vector<int>num={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
//  Move_zero(num);
//  for(int i:num){
//   cout<<i<<" ";
//  }

//  ================ linear search
  // int arr[]={1,2,3,4,5};
  // int target=10;
  // int size=sizeof(arr)/sizeof(arr[0]);
  // cout<<Linear_search(arr,size,target);
  
// ======================== Union of Two Sorted Arrays

// vector<int>arr1={1,2,3,4,5}; vector<int>arr2={2,3,4,4,5};
 
// vector<int>ans=Unique_of_two_array(arr1,arr2);
//  for(int i:ans){
//   cout<<i<<" ";
//  }

//=======================Find the Missing Number

// vector<int>num={8, 2, 4, 5, 3, 7, 1};
// int ans=Find_missing_number(num);
// cout<<ans;
//========================Count Maximum Consecutive One's in the array

// vector<int>num={1, 1, 0, 1, 1, 1};
// int ans=Maximum_Consecutive_One(num);
// cout<<ans<<" ";


//==========================Find the number that appears once, and the other numbers twice

int arr[]={4,1,2,1,2};
int size=sizeof(arr)/sizeof(arr[0]);
int ans=number_that_appears_once(arr,size);
cout<<ans;



















































}
