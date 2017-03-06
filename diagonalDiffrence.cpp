#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int sum_a = 0 , sum_b=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int i =0; i<n;i++){
    	sum_a += a[i][i];
	}
	
	for(int j=0;j<n;j++){
		sum_b += a[j][n-j-1];
	}
	cout<<abs(sum_a-sum_b);
    return 0;
}
