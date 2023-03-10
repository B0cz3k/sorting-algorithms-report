def selectionsort(tab:list)->list:
    for i in range(len(tab)):
        min = i
        for j in range(i,len(tab)):
            if tab[j]<tab[min]: min = j #search for smallest element from i to end

        tab[i],tab[min]= tab[min],tab[i] #place smallest element to the left
    return tab