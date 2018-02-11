#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void DreamBall(double V, double a, double K){
  if ((0 <= V) && ( V<=500000) && (0 <= a) && (a <= 90) && K > 1){
    double Vx, Vy, t;
    double g = 10.0;
    double pi = 3.1415926535;
    double answer = 0;
    double speed = (pow(V, 2));
    double movement = K * sin((a * pi) / 90);
    double kineticEnergy = g * (K - 1);
    answer = ((speed * movement)/(kineticEnergy));
    printf("%lf\n", answer);
  }

}

int main () {
    double V, a, K;
    printf("What would you like to calculate?: ");
    scanf("%lf %lf %lf", &V, &a, &K);
    DreamBall(V, a, K);
    return 0;
}
