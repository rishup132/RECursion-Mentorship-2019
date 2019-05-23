import java.io.IOException;
import java.io.InputStream;
import java.util.Arrays;                            
import java.util.InputMismatchException;

public class cipher

{

    void solve()throws IOException
    {        
        /**************** write your code here ***********************/ 

        int c=0,w=0;

        String s=ns();s=s.toLowerCase();int l=s.length();
        String st="";

        for(int i=0;i<=l/2;i++)
        {
            if(l/2-i-1>=0 && l/2+i<l && l%2==0)
            {
                char ch=s.charAt(l/2-i-1);
                char chr=s.charAt(l/2+i);
                st=st+ch+chr;
                
            }
            if(l%2!=0){
            if(c==0)
            st=st+s.charAt(l/2);
             if(l/2-i-1>=0 || l/2+i+1<l )
            {
                char ch=s.charAt(l/2+i+1);
                char chr=s.charAt(l/2-i-1);
                st=st+ch+chr;c++;
            }}
        }
        System.out.println(st);
        
    }

    public static void main(String[] args)throws IOException
    {
        new cipher().solve();
    }  
    private byte[] inbuf = new byte[1024];
    public int lenbuf = 0, ptrbuf = 0;    
    InputStream is=System.in;
    private int readByte() {
        if (lenbuf == -1) {
            throw new InputMismatchException();
        }
        if (ptrbuf >= lenbuf) {
            ptrbuf = 0;
            try {
                lenbuf = is.read(inbuf);
            } catch (IOException e) {
                throw new InputMismatchException();
            }
            if (lenbuf <= 0) {
                return -1;
            }
        }
        return inbuf[ptrbuf++];
    }

    private boolean isSpaceChar(int c) {
        return !(c >= 33 && c <= 126);
    }

    private int skip() {
        int b;
        while ((b = readByte()) != -1 && isSpaceChar(b));
        return b;
    }

    private double nd() {
        return Double.parseDouble(ns());
    }

    private char nc() {
        return (char) skip();
    }

    private String ns() {
        int b = skip();
        StringBuilder sb = new StringBuilder();
        while (!(isSpaceChar(b))) { // when nextLine, (isSpaceChar(b) && b != ' ')
            sb.appendCodePoint(b);
            b = readByte();
        }
        return sb.toString();
    }

    private char[] ns(int n) {
        char[] buf = new char[n];
        int b = skip(), p = 0;
        while (p < n && !(isSpaceChar(b))) {
            buf[p++] = (char) b;
            b = readByte();
        }
        return n == p ? buf : Arrays.copyOf(buf, p);
    }

    private char[][] nm(int n, int m) {
        char[][] map = new char[n][];
        for (int i = 0; i < n; i++) {
            map[i] = ns(m);
        }
        return map;
    }

    private long[] na(int n) {
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = ni();
        }
        return a;
    }

    private int ni() {
        int num = 0, b;
        boolean minus = false;
        while ((b = readByte()) != -1 && !((b >= '0' && b <= '9') || b == '-'));
        if (b == '-') {
            minus = true;
            b = readByte();
        }

        while (true) {
            if (b >= '0' && b <= '9') {
                num = num * 10 + (b - '0');
            } else {
                return minus ? -num : num;
            }
            b = readByte();
        }
    }

    private long nl() {
        long num = 0;
        int b; 
        boolean minus = false;
        while ((b = readByte()) != -1 && !((b >= '0' && b <= '9') || b == '-'));
        if (b == '-') {
            minus = true;
            b = readByte();
        }

        while (true) {
            if (b >= '0' && b <= '9') {
                num = num * 10 + (b - '0');
            } else {
                return minus ? -num : num;
            }
            b = readByte();
        }
    }

}
