#include "/home/codeleaded/System/Static/Library/Files.h"
#include "/home/codeleaded/System/Static/Library/CSV.h"

int main(){
    CSV rx = CSV_New("./data/Data.csv");
    CSV_Print(&rx);
    CSV_Free(&rx);
    return 0;
}