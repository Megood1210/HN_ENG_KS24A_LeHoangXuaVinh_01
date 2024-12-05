#include<stdio.h>
int main(){
	int choice,temp;
	int a;
	int number, post,val, newNumber;
	do{
		printf("MENU \n");
		printf("1.Nhap so phan tu va gia tri cho mang \n");
		printf("2.In ra gia tri cac phan tu trong mang \n");
		printf("3. Tim gia tri nho nhat và lon nhat trong mang \n");
		printf("4. In ra tong cua tat ca cac phan tu \n");
		printf("5. Them mot phan tu vao cuoi mang do nguoi dung nhap vao \n");
		printf("6. Xoa phan tu tai mot vi tri cu the \n");
		printf("7. Sap xep mag theo thu tu giam dan \n");
		printf("8. Tm kiem xem phan tu do có trong mang hay khong \n");
		printf("9. In ra toan bo so nguyen to trong mang");
		printf("10. Sap xep mang theo thu tu tang dan");
		printf("11. Thoat \n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu cua mang: \n");
				scanf("%d",a);
				int arr[a];
				printf("Nhap cac gia tri cua mang: \n");
				for(int i=0;i<a;i++)
					printf("Nhap gia tri thu %d: ",i + 1);
					scanf("%d", &arr[i]);
				}
				break;
			case 2:
				printf("In ra cac phan tu trong mang \n");
				for(int i=0;i<a;i++){
					printf("%d", &arr[i]);
				}
				break;
			case 3:
				int min = arr[0];
				int max = arr[0];
				for(int i=1;i<a;i++){
					if(arr[i]<min){
						min = arr[i];
					}
					if(arr[i]>max){
						max= arr[i];
					}
				}
				break;
			case 4:
				int sum=0;
				for(int i=0;i<a;i++){
					sum+=arr[i];
				}
				printf("Tong cua cac phan tu trong mang: %d\n",sum);	
				break;
			case 5:
				printf("Nhap phan tu muon them trong mang: \n");
				scanf("%d", &val);
				printf("Nhap vi tri muon them trong mang: \n");
				scanf("%d", &post);
				    if (post < 1 || post > number + 1) {
        				printf("Nhap vi tri muon them phan tu: ");
        				return 1;
    				}
   					 for (int i = number; i >= post; i--) {
        				arr[i] = arr[i - 1];
    				}
    				 arr[post - 1] = val;  
   					 number++;
    				 printf("Mang sau khi them phen tu la: \n");
    				 for (int i = 0; i < number; i++) {
        				 printf("%d ", arr[i]);
    				 }
    				 printf("\n");
				break;
			case 6:
				 printf("Nhap cho can sua: ");
    			scanf("%d", &post);
    			if (post < 1 || post > 5) {
        			printf("Nhap cho can sua: \n");
        			return 1;
    			}
				printf("Nhap phan tu moi: ");
    			scanf("%d", &newNumber);
    			arr[post - 1] = newNumber;
    			printf("Mang moi:\n");
    			for (int i = 0; i < 5; i++) {
        			printf("%d ", arr[i]);
    			}
    			printf("\n");
				break;
			case 7:
				for (int i = 0; i < n - 1; i++) {
        			for (int j = 0; j < n - i - 1; j++) {
            			if (arr[j] < arr[j + 1]) {
               			 int temp = arr[j];
                		arr[j] = arr[j + 1];
                		arr[j + 1] = temp;
            		}
        		}
    		}
    		
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
			}
	}while(choice!=11);
	
	return 0;
}
