#include<stdio.h>
int main(){
	int choose,n;
	int arr[n];
	int chan=0;
	int le=0;
	do{
		printf("\n	MENU	\n");
		printf("1. Nhap so phan tu va gia tri cho chung\n");
		printf("2. In ra cac phan tu gia tri trong mang\n");
		printf("3. Dem cac so luong phan tu chan le trong mang\n");
		printf("4. Tim gia tri lon thu hai trong mang\n");
		printf("5. Them mot phan tu vao dau mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan\n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Binary search)\n");
		printf("9. In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
		printf("\ta. Neu khong co so nguyen nao thi hien thi ra la khong co so nguyen nao trong mang\n");
		printf("\tb. Neu co so nguyen to trong mang thi hien thi toan bo so nguyen to do va binh phuong chung len\n");
		printf("10. Sap xep mang theo thu tu giam dan\n");
		printf("11. Thoat\n");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				printf("Nhap vao so phan tu cua mang: ");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					printf("Nhap phan tu thu %d: ",i);
					scanf("%d",&arr[i]);
				}
				printf("Cac phan tu trong mang la: \n");
				for(int i=0;i<n;i++){
					printf("%d ",arr[i]);
				}
				break;
			case 2:
				printf("Cac phan tu gia tri trong mang la: ");
				for(int i=0;i<n;i++){
					printf("arr[%d]=%d ",i,arr[i]);
				}
				break;
			case 3:
				for(int i=0;i<n;i++){
					if(arr[i]%2==0){
						chan++;
					}else{
						le++;
					}
					printf("So luong phan tu chan la: ",chan);
					printf("So luong phan tu le la: ",le);
				}
				break;
			case 4:
				
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				for(int i=0;i<n-1;i++){
					for(int j=0;j<n-i-1;j++){
						if(arr[j]>arr[j+1]){
							int temp;
							temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
					}
				}
				for(int i=0;i<n;i++){
					printf("%d",arr[i]);
				}
				break;
			case 11:
				break;
		}
	}while(choose!=11);
	return 0;
}
