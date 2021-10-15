
#parametros: quantY, quantX, posCelula

#quantY = nº de linhas
#quantX = numero de casas por linha
#posCelula = array de arrays, onde cada item representa as coordenadas de uma celula viva

def setScenario(quantY, quantX, posCelula):
    
    casa = [1, 1] #[x,y]
    #o primeiro loop, vai construir a primeira linha, o seguno a segunda e por ai vai

    while casa[1] <= quantY:

        linha = ''
        while casa[0] <= quantX:

            if casa in posCelula:
                caractere = 'O'
            else:
                caractere = '-'

            linha += caractere
            casa[0] += 1

        print(linha)
        casa[0], casa[1] = 1, casa[1] + 1

    retorno = {
        'posCelula': posCelula,
    }
    return retorno
