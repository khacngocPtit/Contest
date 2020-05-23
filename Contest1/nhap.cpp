 #include<iostream>
#define MAX 1000000
using namespace std;
int a[MAX];
int n;// so bit nhi phan
int k;// so thu tu
int i;// so bit 0 lien tiep
int thutu =0;
int maxSubse0 = 0;
 bool isValid = true;

void solve(int j){//giai quyet truong hop bit thu i
    for(int v = 0;v<=1;v++){
    	    a[j] = v;	
	    if(v == 0){
		    maxSubse0++;
		    if(maxSubse0 >= i){
			    isValid = false;
		    }
	    }else{
		    maxSubse0 =0;
	    }
	    if(j ==(n-1)){
		    if(isValid){
			    thutu++;
			    if(thutu == k){
				        for(int v = 0; v < n; v++){
					    cout<<a[v]<<" ";
				    }cout<<endl;
			    }
		    }
	    }else{
		    solve(j+1);
	    }
	    //Reset stage
	    maxSubse0 = 0;
	    isValid = true;
    }
}		



 int main(){
    cin>>n;
    cin>>k;
    cin>>i;
    solve(0);
    return 0;
}
