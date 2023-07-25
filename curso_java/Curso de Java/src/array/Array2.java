package array;

import java.util.Iterator;

public class Array2 {

	public static void main(String[] args) {
		String[][] agenda = {
			{"José", "9234", "professorjose@gmail.com"},
			{"Maria", "2142", "mariadiretora@gmail.com"},
			{"Fernando", "21243", "alunofernando@gmail.com"}
		};

	
		for(int i = 0; i < agenda.length ; i++) {
			for (int j = 0; j < agenda.length; i++) {
				System.out.println(agenda[i][j]);
			}
		}
	}
}
