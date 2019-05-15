import java.util.*;
class atm
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        double n=sc.nextDouble();double d=0.00; 
        if((n-t)>=0.50)
        {
            if(t%5==0)
            {
                d=n-t-0.50;
                System.out.println(d);
            }
            else
            System.out.println(n);
    }
    else
    System.out.println(n);
    }
}
                    
