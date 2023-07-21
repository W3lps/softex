package contas;

public class PessoaFisica {

	public static void main(String[] args) {
		Conta cc1 = new Conta();
		cc1.setCliente("Robson Santos");
		cc1.setSaldo(130000);

		System.out.println("Cliente: " + cc1.getCliente());
		cc1.exibirSaldo();
		cc1.sacar(3000);
		
		Conta cc2 = new Conta();
		cc2.setCliente("Cinara Passos");
		cc2.setSaldo(25000);
		cc2.depositar(3000);

		System.out.println("Cliente: " + cc2.getCliente());
		cc2.exibirSaldo();
		
		System.out.println("_______________________________");
		cc1.transferir(cc2, 5000);
		
		System.out.println("_______________________________");
		System.out.println("Relatório: ");
		Conta gerente = new Conta();
		double relatorio = gerente.soma(cc1.getSaldo(), cc2.getSaldo());
		System.out.println("Saldo total das contas: " + relatorio);
	}

}
