/*1 QUESTION#1: Scoring an Over in Cricket (for loop)
The scorer at a university cricket match needs a program to summarise one over. An over always
has exactly 6 balls. For each ball, take the runs scored (0 to 6) as input. After the over, display:
▶ the total runs scored in the over,
▶ the number of boundaries (a ball on which 4 or 6 runs were scored), and
▶ the number of dot balls (a ball on which 0 runs were scored).
Sample run:
Ball 1 runs: 1
Ball 2 runs: 4
Ball 3 runs: 0
Ball 4 runs: 6
Ball 5 runs: 2
Ball 6 runs: 0
Total runs: 13
Boundaries: 2
Dot balls: 2 */


#include <stdio.h>
int main()
{
int ball, runs;
int total = 0, boundaries = 0, dots = 0;
for (ball = 1; ball <= 6; ball++)
  {
 printf("Ball %d runs: ", ball);
scanf("%d", &runs);
total = total + runs;
if (runs == 4 || runs == 6)
boundaries++;
if (runs == 0)
  dots++;
        }
  printf("\nTotal runs: %d\n", total);
  printf("Boundaries: %d\n", boundaries);
  printf("Dot balls: %d\n", dots);
return 0;
}