DOCUMENTA��O DO PROGRAMA DE C�LCULO DA M�DIA DE IDADES

Este programa foi desenvolvido em linguagem C e tem o objetivo de calcular
a m�dia das idades fornecidas pelo usu�rio. O programa solicita a inser��o
de idades at� que seja digitado um n�mero negativo para encerrar a entrada
dos dados. Em seguida, ele calcula a m�dia das idades positivas fornecidas
pelo usu�rio.

TECNOLOGIAS UTILIZADAS:
Linguagem de programa��o C.
Foram utilizadas as bibliotecas <stdio.h> e <stdlib.h>, bem como <locale.h> 
para configurar o uso de caracteres espec�ficos da l�ngua portuguesa.

FUN��ES UTILIZADAS:
void limpar_buffer(): limpa o buffer do teclado para evitar problemas com 
caracteres indesejados.

MAIN FUNCTION:
int main(): fun��o principal que executa o programa. Ela utiliza um loop 
para receber as idades fornecidas pelo usu�rio, calcula a m�dia das idades
positivas e exibe o resultado na tela.

COMO UTILIZAR O PROGRAMA:
Ao executar o programa, voc� ver� a mensagem "======== M�DIA DE IDADES ========"
seguida por um pedido para digitar um n�mero. Insira as idades uma por uma e 
pressione Enter ap�s cada n�mero digitado. Continue fornecendo as idades at� 
que deseje parar. Para encerrar a entrada de idades, digite um n�mero negativo. 
O programa ent�o calcular� e exibir� a m�dia das idades positivas fornecidas.

OBSERVA��ES IMPORTANTES:
Caso as acentua��es, ou outros carecteres especiais, n�o aparecerem corretamente 
em seu VS Code, voc� precisar� alterar a codifica��o padr�o para "windows 1252" 
na op��o Encoding. (File > Preferences > Settings > Search Settings > Encoding)