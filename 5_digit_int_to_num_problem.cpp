#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
int num;
cout<<"\n\nEnter a 5 digit integer: ";
cin>>num;

if (num>99999 || num<9999){
    cout<<"\nEntered Integer should be a 5 digit number";
    return 0;
}

string word_num="";
int ten_thosand = num / 10000;
num = num % 10000;
int thousand = num / 1000;
num = num % 1000;
int hundredth = num / 100;
num = num % 100;
int tens = num / 10;
int unit = num % 10;

if (ten_thosand){
    if (ten_thosand==1){
        if (thousand==1){
            word_num+="eleven  ";
        }
        if (thousand==2){
            word_num+="twelve ";
        }
        if (thousand==3){
            word_num+="thirteen ";
        }
        if (thousand==4){
            word_num+="fourteen ";
        }
        if (thousand==5){
            word_num+="fifteen ";
        }
        if (thousand==6){
            word_num+="sixteen ";
        }
        if (thousand==7){
            word_num+="seventeen ";
            
        }
        if (thousand==8){
            word_num+="eighteen ";
            
        }
        if (thousand==9){
            word_num+="nighnteen ";
        }
        if (thousand==0){
            word_num+="ten thousand ";
        }

        
    }
    if (ten_thosand==2){
        word_num+="twenty ";
    }
    if (ten_thosand==3){
        word_num+="thirty ";
    }
    if (ten_thosand==4){
        word_num+="fourty ";
    }
    if (ten_thosand==5){
        word_num+="fifty ";
    }
    if (ten_thosand==6){
        word_num+="sixty ";
    }
    if (ten_thosand==7){
        word_num+="seventy ";
    }
    if (ten_thosand==8){
        word_num+="eighty ";
    }
    if (ten_thosand==9){
        word_num+="ninty ";
    }
}

if (thousand>0 && thousand!=1){
    if (thousand==1){
        word_num+="ten thousand ";
    }
    if (thousand==2){
        word_num+="twenty thousand ";
    }
    if (thousand==3){
        word_num+="thirty thousand ";
    }
    if (thousand==4){
        word_num+="fourty thousand ";
    }
    if (thousand==5){
        word_num+="fifty thousand ";
    }
    if (thousand==6){
        word_num+="sixty thousand ";
    }
    if (thousand==7){
        word_num+="seventy thousand ";
    }
    if (thousand==8){
        word_num+="eighty thousand ";
    }
    if (thousand==9){
        word_num+="ninty thousand ";
    }
}
else{
    word_num+="thousand ";
}



if (hundredth>0){
    if (hundredth==1){
        word_num+="one hundred ";
    }
    if (hundredth==2){
        word_num+="two hundred ";
    }
    if (hundredth==3){
        word_num+="three hundred ";
    }
    if (hundredth==4){
        word_num+="four hundred ";
    }
    if (hundredth==5){
        word_num+="five hundred ";
    }
    if (hundredth==6){
        word_num+="six hundred ";
    }
    if (hundredth==7){
        word_num+="seven hundred ";
    }
    if (hundredth==8){
        word_num+="eight hundred ";
    }
    if (hundredth==9){
        word_num+="nine hundred ";
    }
}

if (tens>0){
    if (tens==1 && unit==0){
        word_num+="ten ";
    }
    else if (tens==1){
        if (unit==1){
            word_num+="eleven ";
        }
        if (unit==2){
            word_num+="twelve ";
        }
        if (unit==3){
            word_num+="thirteen ";
        }
        if (unit==4){
            word_num+="fourteen ";
        }
        if (unit==5){
            word_num+="fifteen ";
        }
        if (unit==6){
            word_num+="sixteen ";
        }
        if (unit==7){
            word_num+="seventeen ";
            
        }
        if (unit==8){
            word_num+="eighteen ";
            
        }
        if (unit==9){
            word_num+="nighnteen ";
        }

    }
    if (tens==2){
        word_num+="twenty ";
    }
    if (tens==3){
        word_num+="thirty ";
    }
    if (tens==4){
        word_num+="fourty ";
    }
    if (tens==5){
        word_num+="fifty ";
    }
    if (tens==6){
        word_num+="sixty ";
    }
    if (tens==7){
        word_num+="seventy ";
    }
    if (tens==8){
        word_num+="eighty ";
    }
    if (tens==9){
        word_num+="ninety ";
    }
}

if (unit>0){
    if (unit==1){
        word_num+="one ";
    }

    if (unit==2){
        word_num+="two ";
    }
    if (unit==3){
        word_num+="three ";
    }
    if (unit==4){
        word_num+="four ";
    }
    if (unit==5){
        word_num+="five ";
    }
    if (unit==6){
        word_num+="six ";
    }
    if (unit==7){
        word_num+="seven ";
    }
    if (unit==8){
        word_num+="eight ";
    }
    if (unit==9){
        word_num+="nine ";
    }
}

cout<<"\nnumber in words is: "<<word_num;

return 0;
}