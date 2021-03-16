#include <stdio.h>

/* Isso é chamado de "Prototype" uma maneira de afirmar que essa função existe, mas que ela
   ainda não foi lida porque está mais embaixo no código. É uma forma inteligente e mais 
   legível de se codar */
void meow(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        meow();
    }

}

/* Bloco das Funções - Para maior legibilidade fica abaixo do main*/

/*  void = o que ela retorna
    meow = nome da função
    (void) = parâmetros ou entradas da função para possíveis resultados diferentes

    Como tanto o retorno quanto o parâmetro são "void", isso significa que é uma função de
    chamada default, ou seja sempre trará um mesmo resultado porém sem guardar o seu valor
*/
void meow(void)
{
    printf("meow\n");
}

