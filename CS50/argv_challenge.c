#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc < 2){
		printf("Not enough arguments\n");
		return 1;
	}else{
		for(int i = 0;i<argc;i++){
			do{
				i++;
			}while(i==0);
			for(int j=0, n=strlen(argv[i]);j<n;j++){
				printf("%c ", argv[i][j]);
			}
			printf("\n");
		}
	}
}
