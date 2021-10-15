
#Controla as casas que brotarão novas celulas
def liver(dados):

    casasProsperas = dados['vizinhos']
    novaGeracaoCelulas = dados['posCelulaFututo']
    celulasAtuais = dados['posCelula']

    def deus(casa, celulasVivasAtuais):
        #pega uma casa e verifica quantas celulas vivas tem ao redor

        arredores = [
            [ casa[0] + 1, casa[1] ],
            [ casa[0] - 1, casa[1] ],
            [ casa[0], casa[1] + 1 ],
            [ casa[0], casa[1] - 1 ],
            [ casa[0] + 1, casa[1] + 1 ],
            [ casa[0] - 1, casa[1] - 1 ],
            [ casa[0] + 1, casa[1] - 1 ],
            [ casa[0] - 1, casa[1] + 1 ] 
        ]

        #quantos dos arredores possuem celulas vivas:
        contador = 0
        for i in arredores:
            if i in celulasVivasAtuais:
                contador += 1

        return contador

    for i in casasProsperas:
        if deus(i, celulasAtuais) == 3:
            novaGeracaoCelulas.append(i)

    return novaGeracaoCelulas


