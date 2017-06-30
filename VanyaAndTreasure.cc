#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
void print(int *matrix,int n,int m);
int distanc(int m,int n, int p,int pointX, int pointY, int *arr, int *save);
int main(){
	int n;
	int m;
	int p;
	scanf("%d %d %d",&n,&m,&p);
	int arr[301][301];
	int save[301][301];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&arr[i][j]);
			save[i][j] = -1;
		}
	}
	
	int pointX;
	int pointY;
	for(int i = 1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(arr[i][j] == p){
				pointX = i;
				pointY = j;
				break;
			}
		}
	}
	
	int dist = distanc(m,n,p,pointX,pointY, (int*)arr, (int*)save);
	cout<<dist;
	return 0;
}

int distanc(int m,int n, int p,int pointX,int pointY, int* arr, int* save){
	
	int* pointCoordinate = (save + 301*pointX + pointY);
	if(*(pointCoordinate) != -1){
		return *pointCoordinate;
	}
	
	if(p == 1){
		*(save + m * pointX + pointY) = abs(pointX - 1) + abs(pointY - 1);
		return abs(pointX - 1) + abs(pointY - 1) ;
	}
	
	int minDist = 10000;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			int q = p-1;
			if(*(arr+ i*301 + j) == q){
				int dist = abs(pointX - i)+abs(pointY - j) + distanc(m,n,q,i,j,(int*)arr,(int*)save);
				minDist = min(dist, minDist);
			}
		}
	}
	*pointCoordinate = minDist;
	return minDist;
}

void print(int *matrix,int n,int m)
{
    int i, j;
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= m; ++j){
        	printf("%d ", *(matrix + i*301 + j));
        }
            
        printf("\n");
    }
}