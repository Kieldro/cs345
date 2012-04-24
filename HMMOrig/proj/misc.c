/*
	Multiline test
	works
*/
int main () {
	int x = 0;
	
	// bracketless loops
	while(x == 0)
		x+=1;
	
	//ternary
	x = x==1 ? x-1 : x-2;
	
	println("x = ", x);
	
	return 0;
}
