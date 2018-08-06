
import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;


public class Main {

    public static int sum = 0;
    public static int ans = 0;
    public static void main(String[] args) throws IOException {
		Scanner in  = new Scanner(System.in);
        String ans = "";
        String str = "0123456789abcdef";
        int n = in.nextInt();
        if (n == 0)
            return;
        if (n < 0){
            n = (int)(Math.pow(2,32)+n);
        }
        while (n != 0){
            int temp = n % 16;
            ans += str.charAt(temp);
            n /= 16;
        }
        StringBuilder fans = new StringBuilder();
        fans.append(ans);
        fans = fans.reverse();
        System.out.print(fans);
    }
}