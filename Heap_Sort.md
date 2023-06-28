# Heap Sort 
>
Heap sort é um algoritmo de ordenação baseado em comparação que utiliza uma estrutura de dados chamada heap (ou árvore binária de heap). A ideia por trás do heap sort é transformar a lista de elementos a serem ordenados em uma heap, em que o maior (ou menor, dependendo da ordem desejada) elemento está sempre na raiz da árvore. Em seguida, o algoritmo extrai esse elemento e o coloca na posição correta na lista ordenada. Esse processo é repetido até que todos os elementos estejam na lista ordenada.
>
O heap sort pode ser dividido em duas fases principais: construção da heap e extração dos elementos.
>
## 1. Construção da heap: 
   - A partir da lista de elementos, constrói-se uma heap usando a estrutura de árvore binária de heap.
   - Começa-se do último nó não folha até a raiz da árvore.
   - Para cada nó, verifica-se se ele obedece à propriedade de heap, ou seja, se ele é maior (ou menor) que seus filhos. Caso contrário, é realizada uma troca para manter a propriedade de heap.
   - Após a construção da heap, o maior (ou menor) elemento estará na raiz da árvore.
>
## 2. Extração dos elementos: 
   - O maior (ou menor) elemento é extraído da raiz da heap e colocado na posição correta na lista ordenada.
   - Em seguida, a propriedade de heap é restaurada para que o próximo maior (ou menor) elemento esteja na raiz.
   - O processo é repetido até que todos os elementos tenham sido extraídos e colocados na lista ordenada.
>
O heap sort tem uma complexidade de tempo média e pior caso de O(n log n), onde n é o número de elementos a serem ordenados. Ele é considerado um algoritmo eficiente e é frequentemente usado em situações em que a estabilidade não é uma preocupação, ou seja, quando elementos com chaves iguais podem ser reordenados durante o processo de ordenação.
>
Claro! Vou falar um pouco mais sobre o funcionamento detalhado do heap sort.
>
O heap sort utiliza a estrutura de dados chamada heap, que é uma árvore binária especial em que todos os níveis, exceto possivelmente o último, estão completamente preenchidos, e os nós são ordenados de acordo com uma propriedade específica. No caso do heap sort, a propriedade utilizada é a propriedade de heap, que pode ser uma heap máxima ou uma heap mínima.
>
Uma heap máxima é uma árvore em que cada nó pai tem um valor maior ou igual aos seus nós filhos, enquanto uma heap mínima é uma árvore em que cada nó pai tem um valor menor ou igual aos seus nós filhos. No heap sort, geralmente utilizamos a heap máxima para ordenar em ordem crescente e a heap mínima para ordenar em ordem decrescente.
>
O processo de construção da heap envolve transformar a lista de elementos em uma heap. Isso é feito percorrendo a lista de trás para frente (do último nó não folha até a raiz) e realizando a operação chamada "heapify" em cada nó. O "heapify" é o processo de verificar se um nó obedece à propriedade de heap e, caso contrário, realizar trocas com seus nós filhos para restaurar a propriedade.
>
Após a construção da heap, o maior (ou menor) elemento estará na raiz da árvore. Esse elemento é então extraído e colocado na posição correta na lista ordenada. A extração é realizada trocando a raiz com o último elemento da heap e reduzindo o tamanho da heap em 1. Em seguida, é aplicado o "heapify" na nova raiz para restaurar a propriedade de heap. Esse processo é repetido até que todos os elementos tenham sido extraídos e colocados na lista ordenada.
>
Uma característica interessante do heap sort é que ele é um algoritmo in-place, o que significa que ele não requer espaço adicional para realizar a ordenação, além do espaço ocupado pela lista de elementos. Isso é possível porque a estrutura de heap pode ser representada diretamente na lista.
>
Apesar de ter uma complexidade de tempo média e pior caso de O(n log n), o heap sort não é tão rápido quanto algoritmos como o quicksort em média. No entanto, ele possui uma vantagem importante: sua complexidade de tempo é sempre garantida, independentemente da distribuição inicial dos elementos. Isso faz com que o heap sort seja útil em situações em que a garantia de tempo de execução é mais importante do que o desempenho médio.
>
