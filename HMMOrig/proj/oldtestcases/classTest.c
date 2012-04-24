// Added by Melissa Olson, Sriratana Sutasirisap and Tanmaya Godbole (MST) Spring 2011

Class Test{
  int myX;
  int myY;
  
  Test(int x, int y){
      myX = x;
      myY = y;
  }

  int fun (int match){
    println("The result from method fun() is: ");
    println(myX +myY + match);
    return myX + myY + match;
    
  }
   
}


int main() {
   int x = foo();
   println( "It worked!" );     //don't need to use variable y 
}

int foo(){
   int temp = 2;
   Test oneObj = create Test(7, 11);
   
   temp = Test.oneObj.fun(temp);
   return temp;
}





