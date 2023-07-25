package array;

public class Array1 {

	public static void main(String[] args) {
		String[] carros = {"ferrari", "fusca", "uno", "passati"};
		
		System.out.println("Tamanho do Array: " + carros.length);
		System.out.println("Carro: " + carros[3]);
		
		carros[2] = "jetta";
		
		System.out.println(carros[2]);
		
		for (int i = 0; i < carros.length; i ++) {
			System.out.println(carros[i]);
		}
		
	}

}
