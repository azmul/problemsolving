#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
char tab2[1024];
strncpy(tab2, time.c_str(), sizeof(tab2));
tab2[sizeof(tab2) - 1] = 0;
      int a = tab2[0]-'0';
	  int b = tab2[1]-'0';
	  
if(tab2[8] == 'P'){
	  

	if(a==0){
		tab2[0]='1';
		char c = (b+2)+'0';
		tab2[1] = c;
	}
	if(b==8){
		tab2[0]='2';
		tab2[1] = '0';
	}
	if(b==9){
		tab2[0]='2';
		tab2[1] = '1';
	}
	if(a==1 && b ==0){
		tab2[0]='2';
		tab2[1] = '2';
	}
	if(a==1 && b ==1){
		tab2[0]='2';
		tab2[1] = '3';
	}


		for(int i=0;i<8;i++)
				cout<<tab2[i];
	
}
if(tab2[8] == 'A'){
	if(a==1 && b ==2){
		tab2[0]='0';
		tab2[1] = '0';
	  }	
	  		for(int i=0;i<8;i++){
		cout<<tab2[i];
	}

}

    
    return 0;
}
