DOCUMENTAÇÃO DO PROGRAMA DE CÁLCULO DA MÉDIA DE IDADES

Este programa foi desenvolvido em linguagem C e tem o objetivo de calcular
a média das idades fornecidas pelo usuário. O programa solicita a inserção
de idades até que seja digitado um número negativo para encerrar a entrada
dos dados. Em seguida, ele calcula a média das idades positivas fornecidas
pelo usuário.

TECNOLOGIAS UTILIZADAS:
Linguagem de programação C.
Foram utilizadas as bibliotecas <stdio.h> e <stdlib.h>, bem como <locale.h> 
para configurar o uso de caracteres específicos da língua portuguesa.

FUNÇÕES UTILIZADAS:
void limpar_buffer(): limpa o buffer do teclado para evitar problemas com 
caracteres indesejados.

MAIN FUNCTION:
int main(): função principal que executa o programa. Ela utiliza um loop 
para receber as idades fornecidas pelo usuário, calcula a média das idades
positivas e exibe o resultado na tela.

COMO UTILIZAR O PROGRAMA:
Ao executar o programa, você verá a mensagem "======== MÉDIA DE IDADES ========"
seguida por um pedido para digitar um número. Insira as idades uma por uma e 
pressione Enter após cada número digitado. Continue fornecendo as idades até 
que deseje parar. Para encerrar a entrada de idades, digite um número negativo. 
O programa então calculará e exibirá a média das idades positivas fornecidas.

OBSERVAÇÕES IMPORTANTES:
Caso as acentuações, ou outros carecteres especiais, não aparecerem corretamente 
em seu VS Code, você precisará alterar a codificação padrão para "windows 1252" 
na opção Encoding. (File > Preferences > Settings > Search Settings > Encoding)