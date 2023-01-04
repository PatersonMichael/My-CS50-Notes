#include <cs50.h>
#include <stdio.h>

int main(void){
    int numberOfScores = get_int("How many scores are there? ");

    int scores[numberOfScores];
    for(int i = 0; i < numberOfScores; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float)numberOfScores);
}