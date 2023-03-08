const lista = [23, 59, 8, 137, 55, 83, 2];

const maiorDaLista = (lista) => {
    if(lista.length === 1) return lista[0];
    elemento = lista.pop();
    if(elemento>lista[lista.length-1]) lista[lista.length-1] = elemento;
    return maiorDaLista(lista)
}

console.log(maiorDaLista(lista));