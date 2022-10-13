package java_question_lab2;
class OurStringBuilder
{
    String str;
    OurStringBuilder()
    {
        str="defaultString";
    }

    OurStringBuilder(String str)
    {
        this.str=str;
    }
    public String getStringValue() {
        return str;
    }

    public void setStringValue(String str) {
        this.str = str;
    }
    static OurStringBuilder appendStrings(OurStringBuilder str1,OurStringBuilder str2)
    {
        StringBuilder strr1=new StringBuilder(str1.str);
        StringBuilder strr2=new StringBuilder(str2.str);
        strr1.append(strr2);
        str1.str= strr1.toString();
        return str1;
    }
    int lengthOfString()
    {
        return this.str.length();
    }
    char characterAtPosition(int x)
    {
        return this.str.charAt(x);
    }
    static String toLowerCase(OurStringBuilder str)
    {
        return str.str.toLowerCase();
    }
    String substring(int a,int b)
    {
        return this.str.substring(a,b+1);
    }

}
public class ques4
{
    public static void main(String[] args)
    {
        // Create OurStringBuilder objects
        OurStringBuilder str1 = new OurStringBuilder("Deemed University");
        OurStringBuilder str2 =  new OurStringBuilder();
        str2.setStringValue("Vellore Institute of Technology");

        // Append two OurStringBuilder strings and return the resultant OurStringBuilder string
        OurStringBuilder appendedString = OurStringBuilder.appendStrings(str1,str2);
        System.out.println(appendedString); // displays the string value


        // Display the length of str1
        System.out.println("\nLength of string " +str1.getStringValue()+"is: "+ str1.lengthOfString());

        // Display character at index m
        System.out.println("\nCharacter at index 6: " + str2.characterAtPosition(6));

        // Display string as lowercase
        System.out.println("\nString to lower case: " + OurStringBuilder.toLowerCase(str1)); // str1 is displayed as lowercase

        // Display the substring of string from index i to j
        System.out.println("\nSubstring of string from index 3 to 7: " + str2.substring(3,7 ));

        // Display the strings
        System.out.println("\nDisplay strings: " + str1+" "+str2);

    }
}
