
class base
{
    public int x;
    base()
    {
        System.out.println("i am a constructor");
    }
    base(int a)
    {
        System.out.println("i am a overloaded constructor of base with value of a as:"+a);
    }
    public int getX()
    {
        return x;
    }

    public void setX(int x)
    {
        this.x = x;
    }
}

class derived extends base
{
    public  int y;
    derived()
    {
//        super(0);
        System.out.println("i am a derived constructor");
    }
    derived(int x,int y)
    {
        super(x);
        System.out.println("I am an overloaded constructor of derived with value of y as:"+y);
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}

class childofderived extends derived
{
    childofderived()
    {
        System.out.println("constructor of the childofderived class");
    }
    childofderived(int x,int y,int z)
    {
        super(x,y);
        System.out.println("I am an overloaded constructor of childofderived with value of z as:"+z);
    }
}

public class _36_OOPs
{
    public static void main(String[] args)
    {
//        derived d=new derived(4,14);
        childofderived c=new childofderived();
    }


}
