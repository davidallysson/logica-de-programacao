//Faça um programa que peça as 4 notas bimestrais e mostre a média.

import java.util.Scanner;

public class sequenciais4 {

  public static void main(String[] args) {
    int n1, n2, n3, n4;
    Scanner s = new Scanner(System.in);
    System.out.println("Digite 4 notas: ");
    n1 = s.nextInt();
    n2 = s.nextInt();
    n3 = s.nextInt();
    n4 = s.nextInt();
    //ps: divida por "4.0", não "4". assim o compilador entenderá a operação como "real" e não como "inteira".
    float media = (n1 + n2 + n3 + n4) / 4.0F; //O 'F' é para afirmar que o "4.0" é float e não double.
    System.out.println("A media eh: " + media);
  }

}
