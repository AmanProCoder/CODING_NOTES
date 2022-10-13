package java_question_lab2;
class OurString
{
    String str;
    OurString()
    {
        str="defaultString";
    }
    OurString(String str)
    {
        this.str =str;
    }

    public String getStringValue() {
        return str;
    }

    public void setStringValue(String str) {
        this.str = str;
    }
    static int compareStrings(OurString str1,OurString str2)
    {
        int a=str1.str.compareTo(str2.str);
        if(a==0)
            return 0;
        else if (a>0)
            return 1;
        else
            return -1;
    }
    OurString substring(int x)
    {
        this.str=this.str.substring(3,this.str.length());
        return this;
    }
    OurString toUpperCase()
    {
        this.str=this.str.toUpperCase();
        return this;
    }
    static OurString getReverseString(OurString obj)
    {
        StringBuilder str1=new StringBuilder(obj.str);
        obj.str= (str1.reverse()).toString();
        return obj;
    }
}
public class ques3 {
    public static void main(String[] args)
    {
        // Create two OurString objects
        OurString str1 = new OurString("VIT Vellore");
        OurString str2 = new OurString();
        str2.setStringValue("Deemed University");

        /** Returns and prints an integer 1, 0, or -1 to indicate
         * whether string1 is greater than, equal to, or less than string2
         */
        System.out.println("The str1 and str2 are comparing: ");
        System.out.println(OurString.compareStrings(str1, str2));

        /**
         * Return a new OurString object that is a sub-string starting at begin
         * index and till end of the string
         */
        System.out.println("\nThe substring of str2 starting at index 3 is:");
        OurString substr = str2.substring(3);
        System.out.println(substr); // displays the substring value

        // Test toUpperCase()
        System.out.println(str1.getStringValue() + " str1 to upper case:"); // getStringValue() retuns the string value
        OurString lowerString = str1.toUpperCase();
        System.out.println(lowerString); // displays string value

        // Get and display reverse of a str2
        OurString revString = OurString.getReverseString(str2);
        System.out.println("The reverse of str2 is: " + revString ); // displays string value

        System.out.println("\nDisplay the strings: " + str1 + " " + str2);


    }
}
