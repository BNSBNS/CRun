# CRun

mimic a news paper delivery service

as simple as possible



### points  
uniform way to deal with generic pointers; therefore, we prefix their
names with an underscore and only use them to initialize local variables with the desired types and with the appropriate names.  

extern use all outside file  
static use withint file  , also retain value if re called/initialized again  

if using math.h need compile with gcc main.c -o ex -lm  

 ch = getc(fp); // get char from fileptr until EOF or criteria met  

 fgets - only used if certain data read cannot contain a null char, if not use getline  

 %zu counts how many chars in getline  

 ungetc -- int ungetc(int __c, FILE *__stream) Push a character back onto the input buffer of STREAM. This function is a possible cancellation point and therefore not marked with __THROW.  

 


### refresher notes  
gcc *.c -o main // compiles all .c files  

auto == local variable  

extern == external variable, even more then global var (ie, 2 diff file)  
extern must also be declare outside of anything (like global)  






### udemy  



### interesting error encounter  
stack smashing detected  
