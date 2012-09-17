
import random


ntry = 9999999

npart = 12

ntrue = 0

for t in range(1, ntry):
    rooms = [0,0,0,0]
    for p in range(npart):
        prob = random.uniform(0,1)
        if prob < 0.25:  
           rooms[0] += 1
        elif prob < 0.5: 
           rooms[1] += 1
        elif prob < 0.75: 
           rooms[2] += 1
        else:
            rooms[3] += 1

    if rooms[0]*rooms[1]*rooms[2]*rooms[3] == 0 :
        ntrue += 1

    calc = float(ntrue)/float(t)
    not_calc = 1 - calc
    print "%d / %d = %f %s -> %f" % (ntrue, t, calc, rooms, not_calc )

        

