/*
# Dada uma lista de números, calcule:
#   - a soma de todos os números
#   - a média de todos os números
#   - O maior número
#   - o menor número
*/

use core::num;

fn main() {
    let numeros:[i64; 5] = [-2,3,-4,0,50];
    let mut maior = numeros[0];
    let mut menor:i64 = numeros[0];
    let mut soma:i64 = 0;
    let mut media: f64 = 0.0;
    let mut qtd:i64 = 0;
     for &num in &numeros{ //Pega o valor emprestado
            qtd = qtd+1;
                soma = soma+num;
            if menor>num{
                menor = num;
            }
            if maior < num{
                maior = num;
            }

     }
     media = soma as f64/ qtd as f64;
      println!("O menor valor é:{}\nO maior valor é:{}\nA soma é:{}\nA média é: {}", menor, maior, soma, media);
}