#include <stdio.h>

int prob(){
    int choice;
    printf("========== PERTAMINA ==========\n\n");
	printf("1. PERTALITE      = Rp. 10,000\n");
	printf("2. PERTAMAX       = Rp. 13,350\n");
	printf("3. PERTAMAX GREEN = Rp. 14,900\n");
	printf("4. PERTAMAX TURBO = Rp. 15,350\n");
	printf("5. PERTAMINA DEX  = Rp. 16,200\n");
	printf("6. DEXLITE        = Rp. 15,550\n");
	printf("\n");
	printf("Pilih Bensin Anda (angka) = ");
	scanf("%d", &choice);
	printf("\n");
	printf("\n");
	return choice;
}

int conditionals(char bensin[], int harga_bensin, int jumlah_rupiah, int total_rupiah, int kembalian, double total_liter){
    printf("========== %s ==========\n", bensin);
	printf("BENSIN ANDA       = %s \n", bensin);
	printf("SATU LITER BENSIN = %i\n", harga_bensin);
	printf("Masukan Nominal Rupiah = Rp. ");
	scanf("%d", &total_rupiah);
	printf("Jumlah Uang Yang Diberikan = Rp. ");
	scanf("%d", &jumlah_rupiah);
	kembalian = jumlah_rupiah - total_rupiah;
	if (kembalian >= 0)
	{
		printf("Kembalian = Rp. %d\n", kembalian);	
	}
	printf("\n");
	total_liter = (double)total_rupiah/harga_bensin;
	printf("Total Liter Yang Dikeluarkan = %.4f\n", total_liter);
	printf("\n");
	printf("========== TERIMAKASIH ==========\n");
    return 0;
}
    int main(){
    int pertalite = 10000;
    int pertamax = 13350;
    int pertamax_green = 14900;
    int pertamax_turbo = 15350;
    int pertamina_dex = 16200;
    int dexlite = 15550;
    
    int case1 = prob();
    if (case1 == 1){
        conditionals("pertalite", pertalite, 0, 0, 0, 0);
    } if (case1 == 2){
        conditionals("pertamax", pertamax, 0, 0, 0, 0);
    } if (case1 == 3){
        conditionals("Pertamax Green", pertamax_green, 0, 0, 0, 0);
    } if (case1 == 4){
        conditionals("Pertamax Turbo", pertamax_turbo, 0, 0, 0, 0);
    } if (case1 == 5){
        conditionals("Pertamina Dex",pertamina_dex, 0, 0, 0, 0);
    } if (case1 == 6){
        conditionals("Dexlite", dexlite, 0, 0, 0, 0);
    }
    
}