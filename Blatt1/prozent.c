#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int hexToInt(char *s){
	
	char *hex = s;
	
	int dec = 0;
	int first = 0;
	int second = 0;
	
	
	if(isdigit(*hex)){
		first = *(hex++) - '0';
	}else if(isalpha(*hex)){
		first = *(hex++) - 'A' + 10;
	}
	
	if(isdigit(*hex)){
		second = *hex - '0';
	}else if(isalpha(*hex)){
		second = *hex - 'A' + 10;
	}
	
	//dec zusammenbauen
	dec += first;
	dec = dec << 4;
	dec += second; 
		
	
	
	return dec;
}

int main(void){
	
	printf("-->%d",hexToInt("2C"));
	
	return 0;
}


