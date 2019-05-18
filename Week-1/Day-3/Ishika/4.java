import java.util.*;
class leap
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        int t,y,i;
        t=sc.nextInt();
        for(i=1;i<=t;i++)
        {
            y=sc.nextInt();
            if(leap(y)==1)
                 System.out.println("It is a leap year.");
            else 
            {
                for(int j=1;j<=10;j++)
                {
                    y++;
                    if(leap(y)==1)
                    {
                        
                        System.out.println("Not a leap year. Suggested: "+y);
                        break;
                    }
                }
            }
        }
        
    }

    static int leap(int y)
    {
        if(y%400==0)
            return 1;
        else if(y%100 ==0)
            return 0;
        else if(y%4==0)
            return 1;
        else
            return 0;
    }
   
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

