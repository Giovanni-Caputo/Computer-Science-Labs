abstract class Veiculo {
    protected String marca;

    public Veiculo(String marca) {
        this.marca = marca;
    }

    public abstract void ligar();
}

class Carro extends Veiculo {
    public Carro(String marca) {
        super(marca);
    }

    @Override
    public void ligar() {
        System.out.println("O carro da marca " + marca + " ligou.");
    }
}

public class VeiculoMain {
    public static void main(String[] args) {
        Veiculo carro = new Carro("Ford");
        carro.ligar();
    }
}
