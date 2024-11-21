#include<stdio.h>

int main() {
	float diemtoan, diemvan, diemanh, tongdiem, trungbinh;
	printf("Moi ban nhap vao diem toan la: ");
	scanf("%f", &diemtoan);
	printf("Moi ban nhap vao diem van la: ");
	scanf("%f", &diemvan);
	printf("Moi ban nhap vao diem anh la: ");
	scanf("%f", &diemanh);
	tongdiem = diemtoan + diemvan + diemanh;
	trungbinh = tongdiem / 3;
	printf("Tong diem cua ban la %.2f\n", tongdiem);
	printf("Diem trung binh cua ban la %.2f", trungbinh);
	return 0;
}
