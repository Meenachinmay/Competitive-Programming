import javax.swing.text.html.HTMLDocument;
import java.awt.*;
import java.awt.desktop.SystemEventListener;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import static java.lang.System.in;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str = "!@#chinu(*,./^^";
        StringBuilder only_char = new StringBuilder(str.length());
        int[] index = new int[100];
        int k = 0;
        for (int i = 0; i < str.length(); i ++){
            if ((int)str.charAt(i) >= 65 && (int)str.charAt(i) <= 90 || (int)str.charAt(i) >= 97 && (int)str.charAt(i) <= 122){
                only_char.append(str.charAt(i));
                index[k++] = i;
            }
        }
        //HashMap<Integer,Character> hb = new HashMap<Integer, Character>();
        Pattern p = Pattern.compile("[a-zA-Z0-9]");
        Matcher match = p.matcher(str);
        while (match.find()){
            String s = match.group();
            str = str.replaceAll(s,"");
        }
        StringBuilder new_sb = new StringBuilder(str);
        //character removed only special are left
        only_char.reverse();
        for (int i = 0; i < k; i ++){
            new_sb.insert(index[i],only_char.charAt(i));
        }
        System.out.print(new_sb);
    }
}
