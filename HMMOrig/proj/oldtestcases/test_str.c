int main()
{
    println("All the salesmen: ",
      [ (name, sal) | 
          (_, name, pos, _, _, sal, _) <- createEmp(), 
          pos == "SALESMAN" ]);
    
    println("People who alphabetically follow Martin: ",
      [ name | (_, name, _, _, _, _, _) <- createEmp(), name > "MARTIN"]);
}


list createEmp()
{
  return [ (7839, "KING", "PRESIDENT", 0, "17-NOV-81", 5000, 10),
            (7698, "BLAKE", "MANAGER", 7839, "01-MAY-81", 2850, 30),
            (7782, "CLARK", "MANAGER", 7839, "09-JUN-81", 2450, 10),
            (7566, "JONES", "MANAGER", 7839, "02-APR-81", 2975, 20),
            (7788, "SCOTT", "ANALYST", 7566, "09-DEC-82", 3000, 20),
            (7902, "FORD", "ANALYST", 7566, "03-DEC-81", 3000, 20),
            (7369, "SMITH", "CLERK", 7902, "17-DEC-80", 800, 20),
            (7499, "ALLEN", "SALESMAN", 7698, "20-FEB-81", 1600, 30),
            (7521, "WARD", "SALESMAN", 7698, "22-FEB-81", 1250, 30),
            (7654, "MARTIN", "SALESMAN", 7698, "28-SEP-81", 1250, 30),
            (7844, "TURNER", "SALESMAN", 7698, "08-SEP-81", 1500, 30),
            (7876, "ADAMS", "CLERK", 7788, "12-JAN-83", 1100, 20),
            (7900, "JAMES", "CLERK", 7698, "03-DEC-81", 950, 30),
            (7934, "MILLER", "CLERK", 7782, "23-JAN-82", 1300, 10) ];
}
