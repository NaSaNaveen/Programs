import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

class SMVEC
{
    public static void main(String args[])throws IOException
    {
        int a;
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String str = bufferedReader.readLine();
        String[] splStrings = str.split("[:,]");
        for(int i=0;i<splStrings.length;i++)
        {
            System.out.println(splStrings[i]);
        }
    }
}