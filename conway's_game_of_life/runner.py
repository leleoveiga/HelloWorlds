from killer import killer
from liver import liver
from tableConstructor import setScenario
from time import sleep

oscilator = [
    [2,2],
    [1,2],
    [3,2]
]

glider = [
    [3,2],
    [4,3],
    [2,4],
    [3,4],
    [4,4]
]

tetrisIni = [
    [2,1],
    [2,2],
    [2,3],
    [1,2]
]

tetrisCent = [
    [7,6],
    [7,7],
    [7,8],
    [6,7]
]

gliderGun = [
    [1,5],[2,5],[1,6],[2,6],
    [13,3],[14,3],[12,4],[16,4],[11,5],[17,5],[11,6],[11,7],[15,6],[17,6],[18,6],[17,7],[16,8],[14,9],[13,9],[12,8],
    [21,3],[21,4],[21,5],[22,3],[22,4],[22,5],[23,2],[23,6],[25,1],[25,2],[25,6],[25,7],
    [35,3],[35,4],[36,3],[36,4]
]

x = 60 #Quantidades de colunas do cenário
y = 24 #quantidade de linhas do cenário
celulasVivas = gliderGun #posições da primeira geração de células vivas

while True:
    out = setScenario(y, x, celulasVivas)
    out = killer(out)
    celulasVivas = liver(out)
    print("\x1b[2J\x1b[1;1H", end="")
    sleep(0.07)
