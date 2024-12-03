//  Đề
//  main.cpp
//  nguyenminhtan.110118144.DA18TTB.cpp
#include <stdio.h>
const int max_ngay=31;
// sử dụng lệnh void khong tra ve gia tri nao
//Viết chương trình quản lý chi tiêu cá nhân trong một tháng, sử dụng mảng để lưu trữ thông tin chi tiêu theo ngày.
//1. cấu trúc chương trình
void nhapvaochitieu (double chitieu[], int &songay){
    do {
        printf("nhap so ngay trong thang: ");
        scanf("%d", &songay);
    } while (songay < 28 || songay > 31);
    
    for (int i=0 ; i < songay; i++ ) {
        do {
            printf("nhap chi tieu hang ngay vao %d: ", i+1 );
            scanf("%lf", &chitieu[i]);
            if (chitieu[i] < 0) {
                printf("chi tiêu bao nhiêu(không chi tiêu am ) : \n");
            }
        } while (chitieu[i] < 0);
    }
}
//2. hiện ngày chi tiêu
void hienthichitieu(const double chitieu[], int songay)
{
    printf("chi tieu tung ngay :\n");
    for(int i = 0; i < songay ; i++)
    {
        printf("ngay %d: %2lf\n", i + 1, chitieu[i]);
    }
}

//3. tính toán và thống kê . tổng số chi tiêu trong tháng . tính trung bình cho tiêu mỗi ngày. tìm ngày có chi tiêu cao nhât và thấp nhất .
int main() {
    int n;
    printf("Nhập số ngày trong tháng: ");
    scanf("%d", &n);
float chiTieu[n], tongchitieu = 0, trungbinh;
int maxDay = 0, minDay = 0;

// Nhập chi tiêu của từng ngày
for (int i = 0; i < n; i++) {
    printf("Nhập chi tiêu ngày thứ %d: ", i + 1);
    scanf("%f", &chitieu[i]);
    tongchitieu += chitieu[i];

    // Cập nhật ngày chi tiêu cao nhất và thấp nhất
    if (chitieu[i] > chitieu[maxDay]) {
        maxDay = i;
    }
    if (chitieu[i] < chitieu[minDay]) {
        minDay = i;
    }
}

// Tính trung bình chi tiêu
trungbinh = tongchitieu / n;

// In kết quả
printf("\nTổng chi tiêu trong tháng: %.2f\n", tongchitieu);
printf("Trung bình chi tiêu mỗi ngày: %.2f\n", trungbinh);
printf("Ngày chi tiêu cao nhất là ngày %d với chi tiêu %.2f\n", maxDay + 1, chitieu[maxDay]);
printf("Ngày chi tiêu thấp nhất là ngày %d với chi tiêu %.2f\n", minDay + 1, chitieu[minDay]);

return 0;
}
