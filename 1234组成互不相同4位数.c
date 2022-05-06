#include <stdio.h>
int main(void)
{
	int j,p,h,k;
	int nu=0;
	int lo;
	for(j=1;j<5;j++){
		for(p=1;p<5;p++){
			for(h=1;h<5;h++){
				for(k=1;k<5;k++){
					if(j!=p&&j!=h&&j!=k&&p!=h&&p!=k&&h!=k){
						nu=nu+1;
						lo=j*1000+p*100+h*10+k;
						printf("%d\n",lo);
						printf("\n");}}}}}
						printf("%d",nu);
						return 0;}
		
		