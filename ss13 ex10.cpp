#include<stdio.h>
void addAllItem(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("Phan tu thu arr[%d] : ",i);
		scanf("%d", &arr[i]);
	}
}
void showItem(int arr[],int size){
 	for(int i=0;i<size;i++){
 		printf("Phan tu thu arr[%d] co gia tri %d \n",i,arr[i]);
	 }
 }
 
void addItem(int arr[], int size){
	int index, Item;
	printf("Moi ban nhap phan tu muon them vao : ");
	scanf("%d", &Item);
	printf("Moi ban nhap vi tri them vao : ");
	scanf("%d", &index);
	for(int i=size;i>index;i--){
		arr[i]=arr[i-1];
	}
	arr[index]=Item;
	for(int i=0;i<size+1;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
 
 void updateItem(int arr[],int size){
 	int index, Item;
 	printf("Moi ban nhap vi tri ban muon sua : ");
 	scanf("%d", &index);
 	printf("Moi ban nhap so thay doi : ");
 	scanf("%d", &Item);
 	arr[index]=Item;
 	for(int i=0;i<size;i++){
 		printf("%d\t",arr[i]);
	 }
 }
 
 void deleteItem(int arr[], int size){
 	int index;
 	printf("Moi ban nhap vi tri muon xoa : ");
 	scanf("%d", &index);
 	for(int i=index;i<size;i++){
 		arr[i]=arr[i+1];
	 }
	for(int i=0;i<size-1;i++){
		printf("%d\t",arr[i]);
	}
 }
 
 void tangdan(int arr[],int size){
 	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
}
}

  void giamdan(int arr[],int size){
 	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]<arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
 }
 
 void tuyentinh(int arr[], int size){
 	int x;
    printf("\nNhap so nguyen can tim: ");
    scanf("%d", &x);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            printf("\nVi tri cua so %d trong mang la : %d", x, i+1);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }
 }
 
 void nhiphan(int arr[], int size){
 	int l, r;
 	int y;
 	l = 0;
 	r = arr[size-1];
 	int mid=(l+r)/2;
 	printf("\n \nNhap so nguyen can tim: ");
    scanf("%d", &y);
 	while(l<=r){
 		if(arr[mid]==y){
 			printf("Gia tri ban can tim o vi tri : %d",mid);
 			break;
		 } else if(arr[mid]<y){
		 	l = mid +1;
		 } else {
		 	r = mid-1;
		 }
	 }
 }
 
 int main() {
 	int arr[100];
 	int size;
 	int choose;
 	
 	 do {
 	  printf("\n1.Them so luong phan tu va nhap gia tri : \n2.In ra gia tri cac phan tu dang quan ly \n3.Them mot phan tu vao vi tri chi dinh \n4.Sua mot phan tu o vi tri chi dinh \n5.Xoa mot phan tu o vi tri chi dinh \n6.Sap xep cac phan tu \n 1.Giam dan \n 2.Tang dan \n7.Tim kiem phan tu nhap vao \n 1.Tim kiem tuyen tinh \n 2.Tim kiem nhi phan \n8.Thoat \n");
	  printf("Moi ban chon case : ");
	  scanf("%d",&choose);
	  printf("\n \n \n");	
 	  switch(choose){
	    case 1: 
	      printf("Moi ban nhap so luong phan tu : ");
	      scanf("%d",&size);
	      addAllItem(arr,size);
	      printf("\n");
	      break;
	    case 2 :
	      printf("Moi ban nhap so luong phan tu : ");
	      scanf("%d",&size);
	      addAllItem(arr,size);
	      showItem(arr,size);
		  printf("\n");	
	      break;
		case 3 :
		  printf("Moi ban nhap so luong phan tu : ");
	      scanf("%d",&size);
	      addAllItem(arr,size);
		  addItem(arr,size);
		  printf("\n");
		  break;
		case 4 :
			printf("Moi ban nhap so luong phan tu : ");
	      scanf("%d",&size);
	      addAllItem(arr,size);
	      updateItem(arr,size);
	      printf("\n");
	    case 5 :
	    	printf("Moi ban nhap so luong phan tu : ");
	      scanf("%d",&size);
	      addAllItem(arr,size);
	      deleteItem(arr,size);
	      break;
	    case 6 :
	    	printf("Moi ban nhap so luong phan tu : ");
	      scanf("%d",&size);
	      addAllItem(arr,size);
	    	int select;
	    	printf("Moi ban chon : ");
	    	scanf("%d", &select);
	    	if(select==2){
	    		tangdan(arr,size);
			} else if(select==1){
				giamdan(arr,size);
			} else{
				printf("Sai dinh dang");
			}
			printf("\n");
			break;
		case 7 :
			printf("Moi ban nhap so luong phan tu : ");
	      scanf("%d",&size);
	      addAllItem(arr,size);
	      int select2;
	    	printf("Moi ban chon : ");
	    	scanf("%d", &select2);
	    	tangdan(arr,size);
	    	if(select2==2){
	    		nhiphan(arr,size);
			} else if(select2==1){
				tuyentinh(arr,size);
			} else{
				printf("Sai dinh dang");
			}
			printf("\n");
			break;
	    default:
	      break;
      }
	 }while(choose !=8);
	 	
	  	return 0;
	 
    }
