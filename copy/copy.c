#include <stdio.h>
#include <stdlib.h>

void copiarString(char *copiarDaqui, char *colarAqui){
	
	while(*copiarDaqui != '\0'){
		*colarAqui = *copiarDaqui;
		++copiarDaqui;
		++colarAqui;
	}	
	
	*colarAqui = '\0';
}


int main(int argc, char *argv[]) {
	
	void copiarString(char *copiarDaqui, char *colarAqui);
	
	char string1[]="pao com mortadela";
	char string2[20];
	
	copiarString(string1, string2);
	printf("%s\n", string2);
	
	
	
	return 0;
}
