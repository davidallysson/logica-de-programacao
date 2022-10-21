//Escreva um programa que leia dois nomes e mostre o que contém maior quantidade de caracteres.

import java.util.Scanner;

public class condicoes6 {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Digite dois nomes: ");
    String nome1 = scan.nextLine();
    String nome2 = scan.nextLine();
    if (nome1.length() > nome2.length()) {
      System.out.println("O nome " + nome1 + " é maior");
    } else if (nome1.length() < nome2.length()) {
      System.out.println("O nome " + nome2 + " é maior");
    } else {
      System.out.println("Os nomes são do mesmo tamanho.");
    }
  }
}
