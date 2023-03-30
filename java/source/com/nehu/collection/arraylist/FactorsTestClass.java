package source.com.nehu.collection.arraylist;

import static org.junit.Assert.assertEquals;

import java.util.ArrayList;
import org.junit.Test;

public class FactorsTestClass {

  @Test
  public void testCase1() {
    ArrayList<Integer> testCase = new ArrayList<Integer>();
    testCase.add(1);
    testCase.add(2);
    testCase.add(5);
    testCase.add(10);

    assertEquals(testCase, new Factors().getFactors(10));
  }

  public void testCase2() {
    var testCase = new ArrayList<Integer>();
    testCase.add(1);
    testCase.add(2);
    testCase.add(4);
    testCase.add(5);
    testCase.add(10);
    testCase.add(20);

    assertEquals(testCase, new Factors().getFactors(20));
  }
}
