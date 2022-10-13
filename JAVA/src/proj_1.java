import java.io.*;
import java.lang.String;
import java.util.*;
import java.lang.reflect.Field;
public class proj_1
{

    public static void main(String[] args)
    {
//        byte n;
        Scanner sc=new Scanner(System.in);
//        n=sc.nextByte();
//        long[] ar=new long[n];
//        for(int i=0;i<n;i++)
//        {
//            ar[i]=sc.nextLong();
//        }
//        for(long t:ar)
//        {
//            System.out.println(t+" can be fitted in:");
//            if(t>-129&&t<128)
//            {
//                System.out.println("* byte");
//            }
//            if(t>=-32768&&t<32767 ) {
//                System.out.println("* short");
//            }
//            if(t>=-Math.pow(2,31)&&t<Math.pow(2,31))
//            {
//                System.out.println("* int");
//            }
//            if(t>=-Math.pow(2,63)&&t<Math.pow(2,63))
//            {
//                System.out.println("* int");
//            }
//            }
        String a=sc.nextLine();
        String b="";
        char[] c=a.toCharArray();
        System.out.println(c);
        for (int i = c.length - 1; i >= 0; i--)
            b=b.concat(Character.toString(c[i]));
        System.out.println(b);
        if(a.equals(b))
            System.out.println("Yes");
        else
            System.out.println("No");


    }
}
