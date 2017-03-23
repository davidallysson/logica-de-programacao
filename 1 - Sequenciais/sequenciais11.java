//Faça um programa que peça 2 números inteiros e um número real. Calcule e mostre:
//  - o produto do dobro do primeiro com metade do segundo
//  - a soma do triplo do primeiro com o terceiro
//  - o terceiro elevado ao cubo

import java.util.Scanner;

public class sequenciais11 {

  public static void main(String[] args) {
    System.out.println("Digite dois numeros inteiros: ");
    int n1 = new Scanner(System.in).nextInt();
    int n2 = new Scanner(System.in).nextInt();
    System.out.println("Digite um numero real: ");
    float n3 = new Scanner(System.in).nextFloat();
    System.out.printf("O produto do dobro do primeiro com metade do segundo eh: %.2f \n", (n1 * 2) * (n2 / 2.0));
    System.out.printf("A soma do triplo do primeiro com o terceiro eh: %.2f \n", (n1 * 3) + n3);
    System.out.printf("O terceiro elevado ao cubo eh: %.2f \n", Math.pow(n3, 3));
  }

}
