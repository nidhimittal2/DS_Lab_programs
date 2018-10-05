import java.util.*;
class cmdlineoperators
{
public static void main(String x[])
{
int a=Integer.parseInt(x[0]);
int b=Integer.parseInt(x[2]);
char c =x[1].charAt(0);
if(c=='+')
{
  System.out.println("addition is "+(a+b));
}
else if(c=='*')
{
  System.out.println("product is "+(a*b));
}
else if(c=='-')
{
  System.out.println("ans is "+(a-b));
}
}
}
