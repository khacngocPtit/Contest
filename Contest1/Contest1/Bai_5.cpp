#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100
#define TRUE 1
#define FALSE 0
int P[MAX],B[MAX], n;
void Init(){
int i;
scanf("%d", &n);
for(i=1; i<=n; i++)
B[i]=TRUE;
}
void Result(){
int i; 
for (i=1; i<=n; i++)
	printf("%d",P[i]);
printf(" ");	
}
void Try(int i){
int j;
for(j=1; j<=n;j++){
if(B[j]) {
P[i]=j;
B[j]=FALSE;
if(i==n) Result();
else Try(i+1);
B[j]=TRUE;
}
}
}
main(){
	int t; scanf("%d" , &t);
	while(t--){
		Init(); Try(1);
		printf("\n");
	}
}
