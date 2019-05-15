import java.util.*;
class palli
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        
        String st=sc.nextLine(),str="";
           for(int i=st.length()-1;i>=0;i--)
           
               str=str+st.charAt(i);
          if(str.equals(st)==true)    
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}
