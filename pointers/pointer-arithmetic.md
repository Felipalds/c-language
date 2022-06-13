# Aritmética de ponteiros

*p -> retorna o conteúdo armazenado no local apontado <br>
&x -> retorna o endereço da variável x <br>
se p aponta para o índice 0, p++ aponta para o indíce 1 (salta de acordo com o tipo base, int = 2 bytes, float = 4 bytes)

- podemos usar:
    - soma
    - subtração
- não podemos usar:
    - divisão
    - multiplicação

ele sempre caminha de acordo com o tamanho do tipo base. Se p += 10 e p aponta para um tipo int, então p caminhará 10*2 = 20 bytes

