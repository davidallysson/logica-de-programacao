//Faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

import java.util.Scanner;

public class sequenciais7 {

  public static void main(String[] args) {
    System.out.println("Digite o valor da lateral do quadrado: ");
    float lado = new Scanner(System.in).nextFloat();
    System.out.println("O dobro da area do quadrado eh de: " + ((lado * lado) * 2) );
  }

}
