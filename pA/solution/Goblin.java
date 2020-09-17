import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

class Goblin {
    public static void main(String[] args) {
		Scanner myInput = new Scanner( System.in );

		long n = myInput.nextLong();
		long ans = 0;
		long a, b, c;
		for(int q=0; q<n; q++){
			a = myInput.nextLong();
			ans+=a;
		}
		n = myInput.nextLong();
		for(int q=0; q<n; q++){
			a = myInput.nextLong();
			b = myInput.nextLong();
			c = myInput.nextLong();
			ans+=(b - a + 1) * c;
			System.out.printf("%d\n", ans);
		}

		System.exit(0);
    }
}
