#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--){
	    int m;
	    scanf("%d",&m);
	    if(m>=2000){
	        printf("\nYES");
	    }
	    else{
	        printf("\nNO");
	    }
	}
	return 0;
}
