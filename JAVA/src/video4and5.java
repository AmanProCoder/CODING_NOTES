import java.util.*;
public class video4and5
{
    public static void main(String[] args)
    {
//        byte age =34;// 34 is a integer literal
//        System.out.println(age);
//        char ch='a';
//        float f1=5.6f; //by default it takes double thats why we are defining it explicitly
//        double d1=4.66; //we can use d or D with it( it doesnt matter much)
//        long age2=56666666666666666L;
//        boolean a=true;
//        String str="harry";
//        System.out.println(str);
        Scanner sc=new Scanner(System.in); //System.in means read input from keyboard
        System.out.print("enter no 1:");
        int a=sc.nextInt();
//        System.out.print("enter no 2:");
//        int b=sc.nextInt();
//        System.out.println("the sum of these no is: "+(a+b));
        System.out.println(sc.hasNextInt());
    }
}
