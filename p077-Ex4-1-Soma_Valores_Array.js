const lista = [23, 59, 8, 137, 55, 83, 2];

const SomaRecursiva = (lista) => {
    if(lista.length === 1) return lista[0];
    return lista.pop() + SomaRecursiva(lista);
}

console.log(SomaRecursiva(lista));