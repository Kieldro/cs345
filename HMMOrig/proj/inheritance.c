Class Bar{
	int x;
	
	Bar(int a){
		x = a;
	}
	
	int getX(){
		return x;
	}
}

int main(){
	Bar b = create Bar(2);
	
//	int z;		// BUG this declaration after the class instance causes problems with the stack
	
	Bar.b.getX();
	println("b.x = ", 0);
	
	return 0;
}
