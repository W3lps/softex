package poo;

public class Jetta {

	public static void main(String[] args) {
		Carro jetta = new Carro();
		
		jetta.ano = 2022;
		jetta.cor = "Cinza";
		
		System.out.println("Carro Jetta");
		System.out.println("Ano :" + jetta.ano);
		System.out.println("Cor :" + jetta.cor);
		jetta.ligar();
		jetta.desligar();
	}
}
