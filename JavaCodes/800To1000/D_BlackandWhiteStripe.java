

import java.io.*;
import java.util.*;

public class D_BlackandWhiteStripe {

    static Scanner sc = new Scanner(System.in);

    static void solve() {
        int n = sc.nextInt();
        int k = sc.nextInt();
        sc.nextLine(); 

        String s = sc.nextLine();

        int i = 0, j = k - 1;
        int countW = 0, countB = 0;
        for (int l = i; l <= j; l++) {
            if (s.charAt(l) == 'W')
                countW++;

            else
                countB++;
        }
        // char first = s.charAt(i);
        // char last = s.charAt(j);
        int min = 100000000;
        while (true) {
            min = Math.min(min, countW);
            if (s.charAt(i) == 'B')
                countB--;
            else
                countW--;

            i++;
            j++;
            if (j >= n)
                break;

            // if (last == 'B')
            // countB--;
            // else
            // countW--;

            // if (s.charAt(i) == 'B')
            //     countB++;
            // else
            //     countW++;
            if (s.charAt(j) == 'B')
                countB++;
            else
                countW++;

        }

        System.out.print(min);

    }

    public static void main(String[] args) {
        int t = sc.nextInt();

        while (t-- > 0) {
            solve();
            System.out.println();
        }
    }
}
