package java_question_lab2;
class VitString
{
    String name;
    VitString()
    {
        this.name="defaultString";
    }
    VitString(String n)
    {
        this.name=n;
    }
    String getString()
    {
        return this.name;
    }
    void setString(String n)
    {
        this.name=n;
    }
    int length()
    {
        return this.name.length();
    }
    char charAt(int a)
    {
        return this.name.charAt(a);
    }
    VitString substring(int a,int b)
    {
        this.name=this.name.substring(a,b+1);
        return this;
    }
    VitString toLowerCase()
    {
        this.name=this.name.toLowerCase();
        return this;
    }
    static boolean equals(VitString a,VitString b)
    {
        return (a.name.equals(b.name));
    }


}
public class ques2
{
    public static void main(String[] args)
    {
        // Create two VitString objects
        VitString str = new VitString("Naga Raja");
        VitString str2 = new VitString();
        str2.setString("VIT University");

        // Display character at index 2 of VitString object
        System.out.println("\nCharacter at index 1 of VitString object 1 "+str.getString()+" is: " + str.charAt(2));

        // Display the length of VitString object
        System.out.println("\nLength of VitString object 2: " + str2.length());


        // Display a Substring from index m to n of VitString object
        System.out.println("\nSubstring from index 3 to 5 of VitString object 1: ");
        VitString substr = str.substring(3,5);
        int i;
        for (i = 0; i < substr.length(); i++) {
            System.out.print(substr.charAt(i));
        }
        System.out.println();

        // Get and Display VitString object as lowercase:"
        System.out.println("\nVitString object 1 to lowercase:");
        VitString lower = str.toLowerCase();
        System.out.println(lower.getString());
        System.out.print(str);	// Displays the str value as output

        System.out.println();

        // Test and returns either true or false based on two VitString objects 1 are equal or not
        System.out.println("\nVitString object 1 is equal to VitString object 2? " + VitString.equals(str,str2));




    }
}
