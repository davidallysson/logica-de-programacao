//Faça um programa que peça dois números e imprima a soma.

import java.util.Scanner;

public class sequenciais3 {

  public static void main(String[] args) {
    System.out.println("Digite dois numeros: ");
    Scanner s = new Scanner(System.in);
    int n1 = s.nextInt();
    int n2 = s.nextInt();
    int soma = n1 + n2;
    System.out.printf("%d + %d = %d", n1, n2, soma);
  }

}
