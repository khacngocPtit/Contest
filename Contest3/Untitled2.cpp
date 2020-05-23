#include<stdio.h>
#include<conio.h>
#define MAX 10
int main() {
    int loaitien[MAX] = {1000,500,200,100,50,20,10,5,2,1};
    int i,sotien,soto,count,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&sotien);  count = 0;
	    for(i=0;i<MAX;i++)
	    {
	           soto = sotien/loaitien[i];
	           if(soto!=0) {
	           		count = count + soto ;		  
				}
	           sotien = sotien%loaitien[i];  
	    }
	    printf("%d", count);
	    printf("\n");
	}  
    
    return 0;
}
