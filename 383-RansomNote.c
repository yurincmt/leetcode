#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool canConstruct(char * ransomNote, char * magazine){
	char buffer[strlen(magazine)];
	strncpy(buffer, magazine, strlen(magazine) + 1);

	while(*ransomNote != '\0'){

		if( !strchr(buffer, *ransomNote) ){
			return false;
		}else {

			++ransomNote;
		}
	}return true;
}

int main(int argc, char const *argv[])
{

	return canConstruct("fihjjjjei", "hjibagacbhadfaefdjaeaebgi");
}