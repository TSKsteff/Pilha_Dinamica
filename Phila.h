struct NOPilha{
    char letra;
    NOPilha *elo;
};
struct PILHA{
    NOPilha *topo, *comeco;
};

void Inicializar(PILHA &pi){
    pi.topo = NULL;
}

bool InserirPilha(PILHA &pi,char letra ){
    NOPilha *noP = new NOPilha;
    if(noP == NULL) return false;

    noP->letra = letra;
    noP->elo = NULL;
    if(pi.topo == NULL){
        pi.topo = noP;
        pi.comeco = noP;
        return true;
    }
    pi.topo->elo = noP;
    pi.topo = noP;

    return true;
}

void MostrarPhila(PILHA &pi){
    NOPilha *aux = pi.topo;
    cout<<aux->letra<<endl;
}

bool DeletarPhila(PILHA &pi){
    NOPilha *noP = pi.topo, *aux = pi.comeco;
    while(aux != NULL){
        if(aux->elo == noP){
            pi.topo = aux;
            aux->elo = NULL;
            return true;
        }aux = aux->elo;
    }
}