class overloadandride
{
    public static void main(String args[])
    {
        cat c = new cat();
        dog d = new dog();
        owl o = new owl();
        o.bark();
        c.bark();
        d.bark();
    }
}
class dog
{
    public void bark()
    {
        System.out.println("Dog Bark");
    }
}
class cat extends dog
{
    public void bark()
    {
        System.out.println("Cat");
    }
}
class owl extends cat
{
    public void bark()
    {
        System.out.println("Owl");
    }
}