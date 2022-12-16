#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b,c;
	scanf("%d",&n);
	
	while(n--){
	    scanf("%d %d %d",&a,&b,&c);
	    if(a<=c&&c<b)
        printf("\nyes");
        else
        printf("\nno");
	}
	return 0;
}
