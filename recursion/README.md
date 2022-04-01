Um valor unsigned é um valor que não tem sinal.
Ao atribuirmos um valor com sinal, como por exemplo, -1, esse valor será salvo como complemento de 2
(1111 1111), que é o C2 para -1. Porém esse valor sem sinal, ou seja, unsigned, será lido como C1, e ao printar, será feito (2^32) que é igual à ffffffff.