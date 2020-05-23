#include<iostream>
using namespace std;
void bandau(int a[],int n){
	for(int i=0;i<n;i++ )
		a[i]=i+1;

};
void xuat( int a[],int n){
	for(int i=0;i<n;i++)
		cout<< a[i]; 
		cout<<" ";
};
void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
};
void sapxeptang(int a[],int b,int n){
	for (int i=b;i< n-1;i++){
		for (int j=n-1;j>i;j--){
			if( a[j]<a[j-1])
			swap(a[j],a[j-1]);
		}
	}
};

int main()
{
	int x,y=1;
	cin >>x;
	while(y<=x){
	
    bool t= true;
	int n;
	cin>> n;
	int a[100];
	bandau(a,n);
	xuat(a,n);
	while(t){
		int i;
     	for ( i=n-1;i>=0;i--){
     		
			if(i==0)
			t=false;
			if(a[i]>a[i-1]&&t){
		    break;
			};
       }
		for( int j=n-1;j>=i&&t;j--){
			if( a[j]>a[i-1]){
				swap(a[j],a[i-1]);
				sapxeptang(a,i,n);
				xuat(a,n);
			
				break;
			}
		}
			
		
	}
	y++;
	cout<<endl;}
	
	return 0;
}
