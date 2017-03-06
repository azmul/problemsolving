#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i,j;
    cin >> n;
    for(i =1 ;i<=n;i++){

       for(j=n;j>=1;j--){
       	if(j<=i){
       		cout<<"#";
		   }
		else{
			cout<<" ";
		} 
	
	   
	   }
	   	cout<<"\n";  	
	   }
    return 0;
}
