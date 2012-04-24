int main () {
	int a;
	a = 2;
	
	a += 2+1*7;		// obey precedence
	
	println("a = ", a);
	a -= 1;
	println("a = ", a);
	
	return 0;
}
