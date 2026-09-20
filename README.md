void 3 functions outside of main
void advance(int, int)
void printLane(int, int)
bool isWinner(int, int)


create a constant int NUM_HORSES
create a constant int again TRACK_LENGTH, 15 long 


main:
    randomzation 
    make an array for the horses from 5 zeroes 
    set bool keepGoing to true
    

    while keepGoing: give keepGoing a function
        go through every horse in the array:
            advance the horse
            print the lane
            if horse won:
                set keepGoing false
        ask user for input for next turn
        


advance:
    given horseNum and array
    roll 0 or 1, put it in coin 
    add coin to horse's postion in array 


printLane:
    given horseNum and array
    create integer i in a for loop and initalize to 0, runs if i < TRACK_LENGTH; increment i:
        if i is equivalent to the current horse position:
            print horseNum
        else:
            print a period


isWinner:
    given horseNum and array
    result = false
    if horse position += TRACK_LENGTH:
        result = true
        print horseNum is the winner
    return result
        
