#include <stdio.h>
#include <conio.h>
#define TRUE 1
#define FALSE 0
#define MAX 100
int n, k, count, C[MAX], Stop;
void Init(void){
int i;
scanf("%d", &n);
scanf("%d", &k);
for(i=1; i<=k; i++)
C[i]=i;
}
void Result(void){
int i;
for(i=1; i<=k; i++)
	printf("%d", C[i]);
printf(" ");
}
void Next_Combination(void){
int i,j;
i = k;
while(i>0 && C[i]==n-k+i)
i--;
if(i>0) {
C[i]= C[i]+1;
for(j=i+1; j<=k; j++)
C[j]=C[i]+j-i;
}
else Stop = TRUE;
}
void Combination(void){
Stop=FALSE;
while (!Stop){
Result();
Next_Combination();
}
}
int main(){
	int t; scanf("%d" , &t);
	while(t--){
		Init();Combination();
		printf("\n");
	}

}
