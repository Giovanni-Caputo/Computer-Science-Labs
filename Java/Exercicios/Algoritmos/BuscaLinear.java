public class BuscaLinear {
    public static int buscar(int[] numeros, int alvo) {
        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] == alvo) return i;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] valores = {10, 20, 30, 40};
        System.out.println("Indice: " + buscar(valores, 30));
    }
}
