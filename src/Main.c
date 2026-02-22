#include "/home/codeleaded/System/Static/Library/Files.h"
#include "/home/codeleaded/System/Static/Library/CSV.h"

int main(){
    CSV csv = CSV_New();
    CSV_DF(&csv,"./data/Data.csv");
    
    CSV_Print(&csv);
    CSV_Save(&csv,"./data/Out.csv");

    CSV_Table_Print(&csv);
    CSV_Table_Save(&csv,"./data/Out_Table.txt");

    CSV_Free(&csv);
    return 0;
}