#include <stdbool.h> 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>
char * operationType(char ch){
switch(ch)
        {
case '<': return "Less than"; break;
case '>': return "Greater than"; break;
case '*': return "Multiplication"; break;
case '|': return "Bitwise OR"; break;
case '&': return "Bitwise AND"; break;
case '(': return "Left Parenthesis"; break;
case ')': return "Right Parenthesis"; break;
case '[': return "Left Bracket"; break;
case ']': return "Right Bracket"; break;
case '{': return "Left Brace"; break;
case '}': return "Right Brace"; break;
case '?': return "Conditional true"; break;
case ':': return "Conditional False"; break;
case '+': return "Addition"; break;
case '-': return "Subtraction"; break;
case ',': return "Comma"; break;
case '^': return "Bitwise XOR"; break;
case '!': return "Negate"; break;
case '=': return "Assignment"; break;
default:
                        return "Bad Token";
                        break;
        }
        return "Bad Token";
}

void operationLong(char* str){
if (strcmp(str, "->") == 0) {
printf("%s: \"%s\" \n","Structure pointer",str);
}
 else if (strcmp(str, ">>") == 0) {
 printf("%s: \"%s\" \n","shift right",str);
}
 else if (strcmp(str, "<<") == 0) {
 printf("%s: \"%s\" \n","shift leftt",str);
}
else if (strcmp(str, "++") == 0) {
 printf("%s: \"%s\" \n","increment",str);
}
else if (strcmp(str, "--") == 0) {
 printf("%s: \"%s\" \n","decrement",str);
}
else if (strcmp(str, "||") == 0) {
 printf("%s: \"%s\" \n","logical OR",str);
}
else if (strcmp(str, "&&") == 0) {
 printf("%s: \"%s\" \n","logical AND",str);
}
else if (strcmp(str, "==") == 0) {
 printf("%s: \"%s\" \n","Equality Test",str);
}
else if (strcmp(str, "!=") == 0) {
 printf("%s: \"%s\" \n","inequality test",str);
}
else if (strcmp(str, "<=") == 0) {
 printf("%s: \"%s\" \n","less than or equal test",str);
}
else if (strcmp(str, ">=") == 0) {
 printf("%s: \"%s\" \n","greater than or equal test",str);
}
else if (strcmp(str, "+=") == 0) {
 printf("%s: \"%s\" \n","plus equals",str);
}
else if (strcmp(str, "-=") == 0) {
 printf("%s: \"%s\" \n","minus equals",str);
}
else if (strcmp(str, "*=") == 0) {
 printf("%s: \"%s\" \n","times equals",str);
}
else if (strcmp(str, "/=") == 0) {
 printf("%s: \"%s\" \n","divide equals",str);
}
else if (strcmp(str, "%=") == 0) {
 printf("%s: \"%s\" \n","mod equals",str);
}
else if (strcmp(str, "&=") == 0) {
 printf("%s: \"%s\" \n","bitwise AND equals",str);
}
else if (strcmp(str, "^=") == 0) {
 printf("%s: \"%s\" \n","bitwise XOR equals",str);
}
else if (strcmp(str, "|=") == 0) {
 printf("%s: \"%s\" \n","bitwise OR equals",str);
}
else if (strcmp(str, ">>=") == 0) {
 printf("%s: \"%s\" \n","shift right equals",str);
}
else if (strcmp(str, "<<=") == 0) {
 printf("%s: \"%s\" \n","shift left equals",str);
}
int h = 0; 
int len = strlen(str); 
for(h = 0; h < len ; h++){
	printf("%s: \"%c\" \n" , operationType(str[h]), str[h]);
}
			
}
char* subString(char* str, int left, int right)
{
    int i;
    char* subStr = (char*)malloc( sizeof(char) * (right - left + 2));

    for (i = left; i <= right; i++)
        subStr[i - left] = str[i];
    subStr[right - left + 1] = '\0';
    return (subStr);
}



bool isFP(char* str)
{
    int i, len = strlen(str);

    if (len == 0)
        return (false);
    for (i = 0; i < len; i++) {
        if (str[i] == '.')
            return (true);
    }
    return (false);
}

bool isHexadecimal(char* str)
{
    int i, len = strlen(str);
  
    if (len == 0)
        return (false);
 
	if(str[0] == '0'&& (str[1] == 'x' || str[1] == 'X'))return (true);
 
    return (false);
}

bool isOctal(char* str)
{
    int i, len = strlen(str);

    if (len == 0)
        return (false);

	if(str[0] != '0')return (false);

    for (i = 1; i < len-1; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2'
            && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7')
            return (false);
    }
    return (true);
}

bool isInteger(char* str) 
{ 
    int i, len = strlen(str); 
  
    if (len == 0) 
        return (false); 
    for (i = 0; i < len; i++) { 
        if (str[i] != '0' && str[i] != '1' && str[i] != '2'
            && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8'
            && str[i] != '9') 
            return (false); 
    } 
    return (true); 
}



bool integerWord(char* str){
int i = 0;
int length = strlen(str);
	if(str[i] != '0' && str[i] != '1' && str[i] != '2'
            && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8'
            && str[i] != '9')
            return (false);

if(str[i + 1] == 'x' || str[i + 1] == 'X'){
return (false);
}

for(i = 1; i < length; i++){
if((str[i] < 'a' && str[i] > 'z') || (str[i] < 'A' && str[i] > 'Z') && (str[i] < '0' && str[i] > '9')){
return (false);
}
if(str[i] == '.'){
return (false);
}


}
return (true);
}




int integerSplit(char* str)
{
    int i;
    int len = strlen(str);
    int index = strlen(str);
    int left = 0;

 for (i = 0; i < len ; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2'
            && str[i] != '3' && str[i] != '4' && str[i] != '5'
            && str[i] != '6' && str[i] != '7' && str[i] != '8'
            && str[i] != '9')
		index--;
    } 

return (index);


}
bool isOperator(char ch){
    if (ch == '+' || ch == '-' || ch == '*' ||ch == '/' || ch == '>' || ch == '<' || ch == '='|| ch == '['|| ch == ']'|| ch == '|'|| ch == '('|| ch == ')'|| ch == '&'|| ch == '?'|| ch == ':'|| ch == ','|| ch == '^')
        return (true);
    return (false);
}




bool isWord(char* str){
int i = 0;
int length = strlen(str);
if((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')){
return (true);
}
else{ return (false);}


for(i = 0; i<length-1; i++){
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')|| (str[i] >= '0' && str[i] <= '9'))
        {
            continue;
        }
        else {
                return false;
        }

}
return true;
}


bool isDelim(char ch){
	if(isOperator(ch) == true){
	return (true);
	}
if (ch == ' '|| ch == '\t' || ch == '\v' || ch == '\f' || ch == '\r'|| ch == '['|| ch == ']'){
return(true);
} 
return(false);
}

void parse(char* str){
        int left = 0;
        int right = 0;
     	 int len = strlen(str);
        while(right<=len &&  left <= right) {

                if(isDelim(str[right]) == false){
                                right++;
                }
		    if(isDelim(str[right]) == true && left == right){
                        if (isOperator(str[right]) == true && isOperator(str[right + 1])== false){
                printf("%s: %c \n",operationType(str[right]), str[right]);
                        }
                        right++;
                        left = right ;
                        }
               if(isOperator(str[right]) == true && isOperator(str[right+1]) ==true  ){
               
		 char* subOp = subString(str, right, right + 1);
		operationLong(subOp);
		right++;
		right++;
                left = right;
		
                }


                 if ((isDelim(str[right]) == true && left != right)|| (right == len && left != right)) {
                        char* subStr = subString(str, left, right - 1);
		
                        if (isWord(subStr) == true){
                        printf("%s: \"%s\" \n","Word",subStr);
			}
			if (isOctal(subStr) == true){
                        printf("%s: \"%s\" \n","Octal",subStr);
                        }
			 else if (isInteger(subStr) == true){
                        printf("%s: \"%s\" \n","Integer",subStr);
                        }
			 else if (isHexadecimal(subStr) == true){
                        printf("%s: \"%s\" \n","Hexadecimal",subStr);
                        }
			else if(isFP(subStr) == true){
			printf("%s: \"%s\" \n","Floating Point",subStr);
		}
			else if(isOperator(subStr[0]) == true){
                        operationLong(subStr);
			}
			  if(integerWord(subStr) == true){

                        int start = 0;
                        int end = strlen(subStr);
                        int index = integerSplit(subStr);
                        char* substr2 = subString(subStr,start, index-1);
                        char* substr3 = subString(subStr,index, end);

			if(isInteger(substr2) == true && isWord(substr3)==true){
                        printf("%s: \"%s\" \n","Integer",substr2);
                        printf("%s: \"%s\" \n","Word",substr3);
			}

                        }
			left = right;
                }
                 
                        }

        return;
        }

int main(int argc, char *argv[]){
        char dam[255];
	if (argc < 2) {
 	printf("missing filename\n");
 	exit(1);
	}
	if (strlen(argv[1]) >= sizeof(dam)) {
 	printf("filename too long: %s\n", argv[1]);
 	exit(1);
 	}
	strcpy(dam, argv[1]);
		
       // printf("%s", dam);
       parse(dam);    
        //int test =strlen(dam);
       //printf("%d", test);    
return 0;

}
