package main;

import java.io.*;
import java.util.List;
import java.util.Scanner;


public class Main {
    public static boolean pal(int num){
        String s = Integer.toString(num);
        StringBuilder sb = new StringBuilder(s);
        //String temp = sb.reverse().toString();
        if (s.equals(sb.reverse().toString()))
            return true;
        else return false;
    }

    public static void main(String[] args) throws IOException {
		Scanner in  = new Scanner(System.in);
            int n = in.nextInt();
            int[] piles = new int[n];
            for (int i = 0; i < n; i ++) {
                piles[i] = in.nextInt();
            }
            int alex = 0, lee = 0;
            for (int i = 0; i < n;) {
                if (i < n && n >= 0) {
                    alex += Math.max(piles[i], piles[n - 1 - i]);
                    ++i;
                    --n;
                    if (i < n && n >= 0) {
                        lee += Math.max(piles[i], piles[n - 1 - i]);
                    }
                }
            }
            if (alex > lee) {
                System.out.println("true");
            }else{
                System.out.println("false");
            }
        }
    }