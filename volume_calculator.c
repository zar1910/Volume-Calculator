#include <stdio.h>
#include <stdlib.h>

int inputAngka(int, float*, float*, float*, int);
float hitungKubus(int, float*);
float hitungSilinder(int, float*, float*);
float hitungKerucut(int, float*, float*);

int main(int argc, char **argv){
    int menuAwal, token1=0, token2=0;
    float s, r, t;

    while (token1 != 1)
    {
        printf("=========================\n");
        printf("Program Penghitung Volume\n");
        printf("=========================\n");
        printf("1. Kubus\n");
        printf("2. Silinder\n");
        printf("3. Kerucut\n");
        printf("Pilih: ");
        scanf("%d", &menuAwal);

        if((token2 = inputAngka(menuAwal, &s, &r, &t, token2)) == 1){
            if(menuAwal >= 1 && menuAwal <= 3){
                fflush(stdin);
                printf("\nEror! Jenis Input yang dimasukkan salah.\n");
                system("PAUSE");
                system("cls");
            }
        }

        switch (menuAwal)
        {
            case 1:
                if (token2 != 1)
                {
                    hitungKubus(menuAwal, &s);
                    system("cls");
                    break;
                }
                else
                    break;
            case 2:
                if (token2 != 1)
                {
                    hitungSilinder(menuAwal, &r, &t);
                    system("cls");
                    break;
                }
                else
                    break;
            case 3:
                if (token2 != 1)
                {
                    hitungKerucut(menuAwal, &r, &t);
                    system("cls");
                    break;
                }
                else
                    break;
            default:
                printf("Input yang dimasukkan salah!\nProgram akan berhenti.\nTerima kasih sudah menggunakan program ini\n");
                token1 = 1;
                break;
        }
    }

    return 0;
}

int inputAngka(int menuAwal, float* sisi, float* radius, float* tinggi, int token2){
    float luasAlas;

    printf("Masukkan Angka yang dibutuhkan!\n");
    
    if(menuAwal == 1){
        printf("Sisi (Edges): ");
        if(scanf("%f", sisi) != 1 || *sisi < 0){
            return token2=1;
        }
    }
    else if (menuAwal == 2 || menuAwal == 3)
    {
        printf("Jari-jari Alas (Radius): ");
        if(scanf("%f", radius) != 1 || *radius < 0){
            return token2=1;
        }
        printf("Tinggi (Height): ");
        if(scanf("%f", tinggi) != 1 || *tinggi < 0){
            return token2=1;
        }
    }
}

float hitungKubus(int menuAwal, float* sisi){
    float kubus, s;

    kubus = *sisi * *sisi;

    printf("\nJenis Objek: Kubus");
    printf("\nParameter Objek: Sisi * Sisi = %.2f * %.2f", *sisi, *sisi);
    printf("\nVolume Objek: %.2f", kubus);
    printf("\n");
    system("PAUSE");
}

float hitungSilinder(int menuAwal, float* radius, float* tinggi){
    float silinder, luasAlas;

    luasAlas = 3.14 * (*radius * *radius);
    silinder = luasAlas * *tinggi;

    printf("\nJenis Objek: Silinder");
    printf("\nParameter Objek:");
    printf("\n- Luas Alas\t: %.2f", luasAlas);
    printf("\n- Tinggi\t: %.2f", *tinggi);
    printf("\nVolume Objek: %.2f", silinder);
    printf("\n");
    system("PAUSE");
}

float hitungKerucut(int menuAwal, float* radius, float* tinggi){
    float kerucut, luasAlas;

    luasAlas = 3.14 * (*radius * *radius);
    kerucut = (luasAlas * *tinggi) / 3;

    printf("\nJenis Objek: Kerucut");
    printf("\nParameter Objek:");
    printf("\n- Luas Alas\t: %.2f", luasAlas);
    printf("\n- Tinggi\t: %.2f", *tinggi);
    printf("\nVolume Objek: %.2f", kerucut);
    printf("\n");
    system("PAUSE");
}