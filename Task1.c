#include <stdio.h>
int main(){
	int i,j,k;
	int count, hi_attendance, hi_attendance_student;
	int present_four_days = 0;
	int tot_p_in_class, hi_class;
	int attendance[2][3][4] = {
	{
		{1,1,0,1},
		{1,0,1,0},
		{1,1,1,1}
	},
	
	{
		{1,1,1,1},
		{0,0,1,0},
		{1,1,1,0}
	
	}
	
	};
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<4;k++){
				printf("%d", attendance[i][j][k]);
			}
			printf("  ");
		}
		printf("\n");
	}
	
	for(i=0; i<2; i++){
		hi_attendance =0;
		for(j=0; j<3; j++){
			count = 0;
			for(k=0; k<4; k++){
				if(attendance[i][j][k] == 1){
					count++;
				}
				}
				if (count > hi_attendance) {
    				hi_attendance = count;
    				hi_attendance_student = j + 1;
					}
					if (count == 4) {
    						present_four_days++;
					}
					printf("Student-%d was present %d days", j+1, count);
					printf("\n");
					
				}
				printf("\nhieghest attendance in class-%d : %d\n",i+1, hi_attendance);
					printf("\n high attendance student No. is %d", hi_attendance_student);
	
					printf("\n");
			}
			printf("No. of Students with all four day present is : %d", present_four_days);
			
			for(i = 0; i < 2; i++) {
    		tot_p_in_class = 0;
				for(j = 0; j < 3; j++) {
        			for(k = 0; k < 4; k++) {
            			if(attendance[i][j][k] == 1) {
               				 tot_p_in_class++;
            }
        }
    }

    if(tot_p_in_class > hi_attendance) {
        hi_attendance = tot_p_in_class;
        hi_class = i + 1;
    }
	}

		printf("\nClass with highest overall attendance: Class-%d\n", hi_class);
		printf("Total attendance: %d\n", hi_attendance);
		
}
	
 




