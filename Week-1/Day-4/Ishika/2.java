import java.util.*;
class anagram
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();String a="",b="";
        for(int j=1;j<=t;j++)
        {
            a=sc.next().toUpperCase();
            b=sc.next().toUpperCase();
            int x[]=new int[26];int v=0;
            int y[]=new int[26];
            for(int i=0;i<a.length();i++)
            {
                int ch=a.charAt(i);
                x[ch-65]++;
            }
            for(int i=0;i<b.length();i++)
            {
                int ch=b.charAt(i);
                y[ch-65]++;
            }
            for(int i=0;i<26;i++)
            {

                v=v+(int)Math.abs(x[i]-y[i]);
            }
            System.out.println(v);
        }
    }

}
