import java.util.*;
class stf
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        
        String st=sc.nextLine(),str="";
           for(int i=0;i<st.length();i++)
           {
               char ch=st.charAt(i);
               if(ch>=65 && ch<=90)
               str=str+(char)(ch+32);
               else if(ch>=97 && ch<=122)
               str=str+(char)(ch-32);
               else
               str=str+(char)ch;
        }
        System.out.println(str);
    }
}
