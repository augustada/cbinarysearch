#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

int main(){

int i,j,t, temp, a[]={5,8,7,1,9,10,13,6,2};

//SIRALAMA
for(j=0; j<9; j++){
for(i=0; i<8; i++){
	if(a[i]>a[i+1]){
	temp = a[i];
	a[i] = a[i+1];
	a[i+1] = temp;
	}
	
}
}
//YAZDIRMA
for(t=0; t<9; t++){
printf("%d ",a[t]);
}

//ARAMA ALGORİTMASI
int low=0,high=8,mid;
int ara=13;

while(low<=high){
	mid=(low+high)/2;
	
	if(ara==a[mid]){
		printf("\nAranan eleman=%d , Indisi=%d ",ara,mid);
		break;
	}
	else if(ara<a[mid]){
			high=mid-1;
		}
		
	else 
			low=mid+1;
		
		
}


}