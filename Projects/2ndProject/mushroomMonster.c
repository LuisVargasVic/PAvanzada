#include<stdio.h>
int main(){
    FILE *fi;
    fi = fopen("input.txt","r");
    int t, n, ans1, ans2, max;
    int m[1000];
    fscanf(fi, "%d", &t);
    for(int i = 1;i <= t; i++){
        ans1 = 0;
        ans2 = 0;
        max = -1;
        fscanf(fi, "%d", &n);
        for(int j = 0; j < n; j++){	fscanf(fi, "%d", &m[j]); }
				//First question
        for(int j = 1; j < n; j++){
        		if(m[j] < m[j - 1]){
                ans1 += (m[j - 1] - m[j]);
								//printf("m[%d] = +%d\n", j, ans1);
            }
        }
				//Second question
				for(int j = 1; j < n; j++){
	          if(m[j - 1] - m[j] > max){
							max = m[j - 1] - m[j];
							//printf("m[%d - 1] - m[%d] = %d\n", j, j, max);
						 }
        }
				//printf("max = %d\n", max);
        if(max == -1){ ans2 = 0; }
        else{
            for(int j = 0; j < n - 1; j++){
                if(m[j] < max) {
									ans2 += m[j];
									//printf("m[%d] = +%d\n", j, ans2);
								}
                else{
									//printf("%d + max\n", ans2);
									ans2 += max;
									//printf("%d\n", ans2);
								}
            }
        }
        printf("Case #%d: %d %d\n", i, ans1, ans2);
    }
    return 0;
}
