#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <windows.h>

int main()
{
	printf("欢迎使用Xbot Helper\n本工具作者：Funoke【UTB频道：https://www.youtube.com/channel/UCX5ZTZjb6sYNOj67_4Uu_ww】\n本软件使用方法：\n1、输入脚本行数\n2、输入脚本数字部分\n3、处理完成\n现在输入脚本行数:");
    int n;
    scanf("%d", &n);
    n=n-2;
    int i = 1;
    int a[n];
    int b[n];
    int c[n];
    printf("现在输入脚本数字部分：\n");
    for (int k = 1; k <= n ; k++) {
        scanf("%d %d",&b[i],&a[i]);
        i = i + 1;
    }
    i = n;
    int j = n-1;
    while (i >= 1,j >= 1) {
        if (a[i] >= a[j]) {
            c[i] = 1;
            c[j] = 1;
            i = j;
            j = j-1;
        }
        else {
            c[i] = 1;
            c[j] = 0;
            i=i;
            j = j - 1;
        }
    }
    c[1]=1;
    i = 1;
    system("cls");
    for (int i=1;i<=n;i++){
    	if(c[i]==1){
			printf("%d %d\n",b[i],a[i]);
		}
	}
	system("pause");
}
