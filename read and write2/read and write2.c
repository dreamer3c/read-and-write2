//
//  read and write2.c
//  read and write2
//
//  Created by 20161104579 on 2017/6/15.
//  Copyright © 2017年 20161104579. All rights reserved.
//

#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("/Users/a20161104579/Library/Mobile Documents/com~apple~TextEdit/Documents/read and write2input.rtf","r");
    fp2=fopen("/Users/a20161104579/Library/Mobile Documents/com~apple~TextEdit/Documents/read and write2output.rtf","w");
    if(fp1==NULL)
    {
        printf("error");
        return 1;
    }
    else{
        ch=fgetc(fp1);
        while(ch!=EOF)
            {
                printf("%c",ch);
                fputc(ch,fp2);
                ch=fgetc(fp1);
            }
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}
