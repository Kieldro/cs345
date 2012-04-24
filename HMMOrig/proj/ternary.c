int main () {
	int x = 0;
	string s = "baz";
	
	x = true ? 1 : 2;
	println("x = ", x);
	
	x = false || true ? 1 : 2;		// obeys precedence
	println("OR = ", x);
	
	x = true && false ? 1 : 2 + 3;		// obeys precedence
	println("PLUS = ", x);
	
	s = true ? "foo" : "bar";		// type checked
	println("string = ", s);
	/*
	s = false ? 1 : "bar";		// invalid: types must match
	println("string/int = ", s);
	*/
	return 0;
}
