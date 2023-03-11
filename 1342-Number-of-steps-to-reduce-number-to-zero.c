int numberOfSteps(int num){
	unsigned int count = 0;

	while(num){
		if(num % 2 != 0){
			--num;
		}
		num /= 2;
		++count;
	}return count;
}