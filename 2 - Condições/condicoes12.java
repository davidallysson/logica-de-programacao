//Brincadeira do ímpar ou par: escreva um programa que leia dois nomes e dois valores inteiros, que correspondem ao que cada um colocou, e informe quem ganhou o "impar ou par".

import java.util.Scanner;

public class condicoes12 {

  public static void main(String[] args) {
    System.out.println("Digite o nome do primeiro jogador: ");
    Scanner scan = new Scanner(System.in);
    String nome1 = scan.nextLine();
    System.out.println("Digite o nome do segundo jogador: ");
    String nome2 = scan.nextLine();
    System.out.println("Digite o numero de dedos do primeiro jogador: ");
    int mao1 = scan.nextInt();
    System.out.println("Digite o numero de dedos do segundo jogador: ");
    int mao2 = scan.nextInt();
    System.out.println( (mao1 + mao2) % 2 == 1 ? "Vencedor: " + nome1 : "Vencedor: " + nome2);
  }
}
