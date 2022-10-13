package java_question_lab2;
class VitInt
{
    int no;
    VitInt()
    {
        this.no=223;
    }
    VitInt(int no) {
        this.no = no;
    }
    public int getValue()
    {
        return no;
    }

    public void setValue(int no)
    {
        this.no = no;
    }
    static boolean isPrimeNumber(VitInt obj)
    {
        int counter=0;
        for(int i=1;i<=obj.no;i++)
        {
            if(obj.no%i==0)
                counter++;
        }
        if(counter==2)
            return true;
        else
            return false;
    }

    boolean isPrimeNumber()
    {
        int counter=0;
        for(int i=1;i<=this.no;i++)
        {
            if(this.no%i==0)
                counter++;
        }
        if(counter==2)
            return true;
        else
            return false;
    }

    boolean isDivisible()
    {
        if(this.no%5==0 || this.no%6==0)
            return true;
        else
            return false;
    }
    static boolean isDivisible(VitInt obj)
    {
        if(obj.no%5==0 || obj.no%6==0)
            return true;
        else
            return false;
    }

    boolean isMultiple()
    {
        if(this.no%3==0 || this.no%2==0)
            return true;
        else
            return false;
    }
    static boolean isMultiple(VitInt obj)
    {
        if(obj.no%3==0 || obj.no%2==0)
            return true;
        else
            return false;
    }
    static int parseStringToInteger(String n)
    {
        return Integer.parseInt(n);
    }
//    String toString()
//    {
//        return no.toString();
//    }

}


public class ques1
{
    public static void main(String[] args) {
        VitInt int1 = new VitInt(21);
        VitInt int2 = new VitInt();
        int2.setValue(29);
        VitInt int3 = new VitInt(566);
        VitInt int4 = new VitInt();
        int4.setValue(111);

        System.out.println("The number "+int1.getValue()+" is prime number:  "+int1.isPrimeNumber()); // Returns true or false based on int1 Object (int1 value) is prime number or not
        System.out.println("The number "+int3.getValue()+" is prime number:  "+VitInt.isPrimeNumber(int3)); // Returns true or false based on int3 Object (int3 value) is prime number or not


        System.out.println("The number "+int2.getValue()+" is Odd number:  "+int2.isDivisible()); // Returns true or false based on int2 Object (int2 value)  is divisible by either 5 or 6
        System.out.println("The number "+int4.getValue()+" is Even number:  "+VitInt.isDivisible(int4)); // Returns true or false based on int4 Object (int4 value) is divisible by either 5 or 6

        System.out.println("The number "+int1.getValue()+" is Odd number:  "+int1.isMultiple()); // Returns true or false based on int1 Object (int1 value) is multiple of either 3 or 2
        System.out.println("The number "+int3.getValue()+" is Even number:  "+VitInt.isMultiple(int3)); // Returns true or false based on int3 Object (int3 value) is multiple of either 3 or 2


        System.out.println("The integer value of the given string is: "+VitInt.parseStringToInteger("3456")); // Returns integer from string

        System.out.println("The integer is: "+int1); // displays the int1 value
        System.out.println("The integer is: "+int2);
        System.out.println("The integer is: "+int3);
        System.out.println("The integer is: "+int4);


    }
}
