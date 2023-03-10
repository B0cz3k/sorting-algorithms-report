def quicksort(tab:list)->list:
    if len(tab) <=1: return tab
    pivot = tab[-1]
    lower, higher = [],[]
    for e in tab[:-1]:
        if e <= pivot:lower.append(e)
        else: higher.append(e)
    return quicksort(lower)+[pivot]+quicksort(higher)