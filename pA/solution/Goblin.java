import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;

class Goblin {
    public static void main(String[] args) throws IOException {
		BufferedReader reader =new BufferedReader(new InputStreamReader(System.in));

		long n = Integer.parseInt(reader.readLine());
		long ans = 0;
		long a, b, c;
		String[] temp = reader.readLine().split(" ");
		for(int q=0; q<n; q++){
			a = Integer.parseInt(temp[q]);
			ans+=a;
		}
		n = Integer.parseInt(reader.readLine());
		for(int q=0; q<n; q++){
			String[] temp2 = reader.readLine().split(" ");
			a = Integer.parseInt(temp2[0]);
			b = Integer.parseInt(temp2[1]);
			c = Integer.parseInt(temp2[2]);
			ans+=((long)b - a + 1) * c;
			System.out.printf("%d\n", ans);
		}

		System.exit(0);
    }
}
