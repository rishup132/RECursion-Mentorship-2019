import java.util.*;
class add
{
     
     public static void main(String[] args)
     {
     Scanner sc=new Scanner(System.in);
        int t=sc.nextInt(),n=0,s=0,r=0;String str="",st="";
        
    for(int k=1;k<=t;k++)
        {
            n=sc.nextInt();
            s=n%10;
            while(n>0)
            {
            	r=n%10;
            	n=n/10;
            	}
            System.out.println(r+s);
            
        }
    }
}
                    
            
            
