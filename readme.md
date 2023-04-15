<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
</head>
<body>
    <h1>Sorteador de Nomes em C</h1>
    <p>Este é um simples programa em C que sorteia um nome entre os nomes digitados pelo usuário.</p>
    <h2>Instruções</h2>
    <ol>
        <li>Para utilizar, basta executar o programa em um compilador C.</li>
        <li>Digite a quantidade de nomes que deseja sortear.</li>
        <li>Digite os nomes.</li>
        <li>Então o programa sorteia um nome aleatoriamente dentre os citados e o exibe na tela</li>
    </ol>
    <h2>Estrutura do Código</h2>
    <p>O código é dividido em diferentes funções que são responsáveis por diferentes aspectos do programa.</p>
    <ul>
        <li>A função <code>quantidade()</code> solicita ao usuário que digite a quantidade de nomes a serem sorteados e armazena o valor na variável <code>qtd<code>.</li>
        <li>A função <code>nome()</code> é responsável por imprimir o tabuleiro do jogo. Ela recebe a matriz do jogo como parâmetro e a exibe na tela.</li>
        <li>A função <code>sortear()</code> é responsável pela jogada da máquina. Ela escolhe uma posição aleatória na matriz e faz a jogada.</li>
    </ul>
    <p>No <code>main()</code>, é declarada a variável <code>qtd<code> e a função <code>quantidade<code> é chamada para solicitar ao usuário a quantidade de nomes. A matriz <code>nomes<code> é declarada com tamanho máximo de 10 nomes e 20 caracteres cada. A função <code>>nome<code> é chamada para preencher a matriz com os nomes inseridos pelo usuário. Por fim, a função sortear é chamada para <code>sortear<code> um nome da lista.