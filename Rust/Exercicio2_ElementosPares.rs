/*# Retorne apenas os números pares de uma lista de números
# Exemplo:
#   Entrada: [9, 4, 7 , 2, 1]
#   Saída Experada: [4, 2]
*/

fn main() {
    let vet:[i64;5] = [9,4,7,2,1];

    for i in 0..5{
        if vet[i]%2==0{
            print!("{} ", vet[i]);
        }
    }

}
