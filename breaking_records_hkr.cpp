/*
 Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

Example

Scores are in the same order as the games played. She tabulates her results as follows:

                                     Count
    Game  Score  Minimum  Maximum   Min Max
     0      12     12       12       0   0
     1      24     12       24       0   1
     2      10     10       24       1   1
     3      24     10       24       1   1
Given the scores for a season, determine the number of times Maria breaks her records for most and least points scored during the season.

Function Description

Complete the breakingRecords function in the editor below.

breakingRecords has the following parameter(s):

int scores[n]: points scored per game
Returns

int[2]: An array with the numbers of times she broke her records. Index  is for breaking most points records, and index  is for breaking least points records.
Input Format

The first line contains an integer , the number of games.
The second line contains  space-separated integers describing the respective values of .

Constraints

Sample Input 0

9
10 5 20 20 4 5 2 25 1
Sample Output 0

2 4
 */


#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) {
    int mine=0;
    int maxe=0;
    
    
    int min=scores[0];
  
    int len=scores.size();
    int record=scores[0];
    for(int i=0;i<len;i++)
    {
        if(scores[i]>record)
        {
            record=scores[i];
            maxe++;
        }
        if ( scores[i]<min )
    
        {
            mine++;
           min=scores[i];
            
        }
        
       
        
        
    }
    
   return {maxe,mine};

}