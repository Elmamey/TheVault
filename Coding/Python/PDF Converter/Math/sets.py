U = {17, 11, 22, 21, 55, 50, 45, 66, 31}
A = {17, 11, 22, 21}
B = {55, 50, 45, 22, 21}

# Finding the complements of the Cartesian products
UA = {(u, a) for u in U for a in A}
UB = {(u, b) for u in U for b in B}
AU = {(a, u) for a in A for u in U}
BU = {(b, u) for b in B for u in U}

# Finding the complements
UA_complement = {(u, a) for u in U for a in A}.symmetric_difference(UA)
UB_complement = {(u, b) for u in U for b in B}.symmetric_difference(UB)
AU_complement = {(a, u) for a in A for u in U}.symmetric_difference(AU)
BU_complement = {(b, u) for b in B for u in U}.symmetric_difference(BU)

# Finding the intersection of complements
result = UA_complement.intersection(UB_complement, AU_complement, BU_complement)

print(result)
