package array;

import java.util.ArrayList;

public class ArrayL {

	public static void main(String[] args) {
		ArrayList<String> contatos = new ArrayList<>();
		
		contatos.add("José de Assis");
		contatos.add("9999999");
		contatos.add("ze@email.com");
		contatos.add("Maria Fernanda");
		contatos.add("5555555");
		contatos.add("maria@email.com");
		
		System.out.println(contatos);
		
		for (int i = 0; i < contatos.size(); i++) {
			System.out.println(contatos.get(i));
		}
		
	}

}
