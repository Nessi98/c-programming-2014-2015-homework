#include<stdio.h>
#include<stdlib.h>

int main () {
	char *str ;
	str = (char *) malloc (20*sizeof(char)) ;
	int count = 0, counter = 0 ;
	scanf("%s", str) ;
	while(str[counter] != '\0') {
		if(str[counter] == '(' || str[counter] == '{' || str[counter] == '[' ) {
			count = count + 1 ; 
		}else{
			if(count == 0) {
				count = count - 1 ; 	
				break;
       	   	        }else{
		 		count = count - 1 ;
			}
		}
		counter = counter +  1 ;
	} 
	free(str) ;
	if(count == 0) { 
		printf("0\n") ;
	}else{
		printf("-1\n") ;
	}
	return 0 ;
}
