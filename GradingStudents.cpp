#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    
     int n;
    cin >> n;
    int a[n];
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        if(grade<38){
          a[a0]=grade;	
		}else{
		   int d = grade/5;
           int c = (d+1)*5;	
           if((c-grade)<3){
           	 a[a0]=c;
		   }else{
		   	a[a0]=grade;
		   }
		}
    }
    
    for(int j=0;j<n;j++){
    	cout<<a[j]<<"\n";
	}

    
    return 0;
}
