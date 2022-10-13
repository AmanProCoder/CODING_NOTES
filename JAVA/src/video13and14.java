import java.util.Locale;
import java.util.Scanner;

public class video13and14
{
    public static void main(String[] args)
    {
//        String name=new String("Harry");
//        String name1="aman";
//        System.out.print("the name is ");
//        System.out.printf(name1);
//        int a=6;
//        float b=7.0098f;
//        System.out.printf("the value of a is %d and value of b is %8.2f",a,b);
//        System.out.format("the value of a is %d and value of b is %f",a,b);
//        Scanner sc=new Scanner(System.in);
//        String st=sc.nextLine();
//        String are immutable in Java, we cant change its value, we can copy the string
        //METHODS IN THE STRING
        String name="Harry";
        System.out.println(name);
        int len=name.length();
        System.out.println(len);
        System.out.println(name.toUpperCase());
        String nonTrimmedSt="     harry      ";
        System.out.println(nonTrimmedSt.trim());
        System.out.println(name.substring(2));
        System.out.println(name.replace('r','p'));// replaces all the occurences
        System.out.println(name.replace("ry","ier"));// replaces all the occurence
        System.out.println(name.startsWith("har"));
        System.out.println(name.endsWith("har"));
        System.out.println(name.charAt(1));
        System.out.println(name.indexOf("r"));//returns the 1st index on which it is present
        System.out.println(name.indexOf("rr",3)); //returns -1 if the substring is not present
        System.out.println(name.lastIndexOf('r'));
        System.out.println(name.equalsIgnoreCase("harry"));





    }
}
