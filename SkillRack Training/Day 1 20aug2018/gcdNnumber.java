import java.util.Scanner;

class gcd {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int i, a = 0, b;
        int n = in.nextInt();
        for (i = 0; i < n; i++) {
            b = in.nextInt();
            a = hcf(a, b);
        }
        in.close();
        System.out.println(a);
    }

     public static int hcf(int a, int b) {
        return a == 0 ? b : hcf(b % a, a);
    }
}
