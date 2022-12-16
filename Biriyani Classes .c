#include <stdio.h>

int main(void) {
	int n,c,m;
	scanf("%d",&n);
	while(n--){
	    scanf("%d %d",&c,&m);
	    int o = c*m;
	    printf("%d\n",o);
	}
	return 0;
}

