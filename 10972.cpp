//
//  10972.cpp
//  Baekjun
//
//  Created by Byeoli Choi on 2021/01/24.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, num;
    int arr[100001];
    int index = -1;
    
    cin>>n;
    
    for (int i=0; i<n; i++)
    {
        cin>>num;
        arr[i] = num;
    }
    
    for (int i=n-2; i>=0; i--)
    {
        if (arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }
    
    if (index==-1)
    {
        cout<<-1;
        return 0;
    }
    
    for (int i=n-1; i>=index; i--)
    {
        if (arr[index]<arr[i])
        {
            swap(arr[index], arr[i]);
            break;
        }
    }
    
    sort(arr+(index+1), arr+n);
    
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
