#include<stdio.h>
#include<stdlib.h>

int main () {
	char *str ;
	str = (char *) malloc (20*sizeof(char)) ;
	int count = 0, counter = 0, IsItTrue = 1 ; ;
	scanf("%s", str) ;
	while(str[counter] != '\0') {
		if(str[counter] == '(' || str[counter] == '{' || str[counter] == '[') {
			count = count + 1 ; 
		}else{
			if(count == 0) { 	
			    	IsItTrue = 0 ;
				break;
       	   	        }else{
		 		count = count - 1 ;
			}
		}
		printf("%d\n",  count)  ;
		counter = counter +  1 ;
	} 
	free(str) ;
	if(count == 0 && IsItTrue == 1) { 
		printf("0\n") ;
	}else{
		printf("-1\n") ;
	}
	return 0 ;
}

