package source.com.nehu.collection.arraylist;

import java.util.ArrayList;

public class Factors {

  ArrayList<Integer> getFactors(int n) {
    ArrayList<Integer> list = new ArrayList<Integer>();
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        list.add(i);
      }
    }
    return list;
  }
}
