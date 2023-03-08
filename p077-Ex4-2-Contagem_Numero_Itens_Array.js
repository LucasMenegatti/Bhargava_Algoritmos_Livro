const lista = [23, 59, 8, 137, 55, 83, 2];

const tamanhoLista = (lista) => {
    // Caso Base
    if(lista[0] === undefined) return 0;
    // Caso Recursivo
    lista.pop();
    return  1 + tamanhoLista(lista);
}

console.log(tamanhoLista([...lista])); // Enviando uma cópia da lista (Assim a lista original não é destruída)