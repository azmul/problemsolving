#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    long int arr[5];
    long int min,max;
    cin >> a >> b >> c >> d >> e;
    
    for(int i=0;i<5;i++){
    	switch(i){
    		case 0:
    		   arr[i] = b+c+d+e;break;
			case 1:
				arr[i] = a+c+d+e;break;
			case 2:
			    arr[i] = b+a+d+e;break;
			case 3:
				arr[i] = b+c+a+e;break;
			case 4:  
		    	arr[i] = b+c+d+a;break; 
		    default:
			    break;			
		}
 
	}
	min = arr[0];
	max = arr[0];
	
	for(int i=1;i<5;i++){
	   if(arr[i]<min){
	   	min = arr[i];
	   }
	    if(arr[i]>max){
	   	max = arr[i];
	   }
	}
	
	cout<<min<<" "<<max;
	
    
    return 0;
}
