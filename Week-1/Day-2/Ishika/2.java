import java.util.*;
class sum
{
	 
	 public static void main(String[] args)
	 {
	 Scanner sc=new Scanner(System.in);
	 	int t=sc.nextInt(),n=0,s=0;
	 	for(int i=1;i<=t;i++)
	 	{
	 		n=sc.nextInt();s=0;
	 		while(n>0)
	 		{
	 			
	 			s=s+(n%10);
	 			n=n/10;
	 			}
	 			System.out.println(s);
	 			}
	 			}
	 			}
