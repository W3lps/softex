package cursoJava;

public class Fundamentos {

	public static void main(String[] args) {
		String nome = "Welinton";
		int idade = 51;
		char sexo = 'M';
		double temperatura = 26.7;
		boolean arCondicionado = false;
		
		System.out.println("Uso de variáveis em Java: ");
		System.out.println("Nome: " + nome);
		System.out.println("Idade: " + idade);
		System.out.println("Sexo: " + sexo);
		System.out.println("Temperatura: " + temperatura);
		System.out.println("Ar condicionado: " + arCondicionado);
		System.out.println("_____________________________________________");
		System.out.println("");
		System.out.println("Operadores aritméticos e operações");
		double i = 10;
		System.out.println("I = " + i);
		System.out.println("I = " + i + " + 5 | i = " + (i+5));
		System.out.println("I = " + i + " - 5 | i = " + (i-5));
		System.out.println("I = " + i + " * 5 | i = " + (i*5));
		System.out.println("I = " + i + " / 5 | i = " + (i/5));
		System.out.println("I = " + i + " % 5 | i = " + (i%5));
		System.out.println("I += 5       | i = " + (i+=5));
		System.out.println("I -= 5       | i = " + (i-=5));
		System.out.println("I *= 5       | i = " + (i*=5));
		System.out.println("I /= 5       | i = " + (i/=5));
		i++;
		System.out.println("I ++         | i = " + i);
		i--;
		System.out.println("I --         | i = " + i);

	}

}
