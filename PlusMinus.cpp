#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    float sum_positive = 0, sum_negative = 0, sum_zero = 0;
    
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i]>0){
       	 sum_positive += 1;
	   }else if(arr[arr_i]<0){
	   	 sum_negative += 1;
	   }else{
	   	 sum_zero += 1;
	   }
    }
    printf("%.6f",sum_positive/n);
    printf("\n");
    printf("%.6f",sum_negative/n);
    printf("\n");
    printf("%.6f",sum_zero/n);
    
    return 0;
}

