
public class _32_methodOverloading
{

    static void change(int a)
    {
        a=56;
    }
    static void change2(int[] a)
    {
        a[0]=100;
    }

    static void foo()
    {
        System.out.println("Good Morning");
    }
    static void foo(int a) //method overloading
    {
        System.out.println("Good Morning "+a);
    }
    // method overloading cant be done by just changing the return type of the function
    public static void main(String[] args)
    {
//        _32_methodOverloading n=new _32_methodOverloading();
//        int[] marks={12,25,52,56,89};
//        int x=45;
//        change(x);
//        System.out.println("the value of x after the running the changes"+x);
//        change2(marks);
//        System.out.println("the value of marks after running the changes"+marks[0])
        foo();
        foo(400); // this is overloading

    }
}
