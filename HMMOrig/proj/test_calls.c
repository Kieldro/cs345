int main()
{
   object a;
   a = A(10);
   println("Function call: ", a);

   a = (\ x -> x + 1)(20);
   println("Direct Lambda call: ", a);

   (object, object) lambda = (\ x -> x + 10);
   a = lambda(20);
   println("Indirect Lambda call: ", a);
}

int A(int x)
{
    return x + 1;
}
