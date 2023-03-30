package source.com.nehu.factor;

public class funfactor {

  public static void main(String[] args) {
    factor();
  }

  static void factor() {
    int n = 60;

    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        System.out.println(i);
      }
    }
  }
}
