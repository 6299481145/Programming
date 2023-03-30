package source.com.nehu.factor;

import java.util.Scanner;

public class Primefactors {

  public static void main(String args[]) {
    int n;
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number : ");
    n = sc.nextInt();

    System.out.println("The factors of " + n + " are: ");
    for (int i = 2; i <= n; i++) {
      if (n % i == 0) {
        System.out.println(i);
        n = n / i;
      }
    }
  }
}
