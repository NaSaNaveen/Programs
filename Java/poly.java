import java.util.Scanner;

class poly
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("...");
        drawShape ds = new drawShape();
        ds.draw();
        ds.draw(r);
        ds.draw(a,b);
    }
}
class drawShape
{
    public void draw()
    {
        System.out.println("No Parameter");
    }
    public void draw(int r)
    {
        System.out.println("Area of Circle = "+(22/7)*r*r+ " Sq.Units");
    }
    public void draw(int a,int b)
    {
        System.out.println("Area of two side polygon = "+(a*b)+ " Sq.Units");
    }
}