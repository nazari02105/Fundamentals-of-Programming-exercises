#include <stdio.h>

int aval_halghavi (int a);
int prime (int p);
int pow (int pp);
int tedad_maghsom_elayh_aval (int t);
int majmo_argham (int m);
int bakhsh2 (int ba);
int tedad_maghsom_elayh (int tt);
int zarb_argham (int za);
int majmo_moghsom_elayh_aval (int mmea);


int main()
{
    int tedad_sahm;
    scanf("%d", &tedad_sahm);
    float bishtarin_sod = -999999999.0;
    int kod_khas = 0;
    for (int a6 = 1; a6<=tedad_sahm; ++a6){
        int kod_saham, hajm_moamele, price, hajm_taghaza, hajm_arze, sod_hajm_moamele, sod_bakhs2, sod_nahaee;
        scanf("%d %d %d %d %d", &kod_saham, &hajm_moamele, &price, &hajm_taghaza, &hajm_arze);
        if (aval_halghavi(hajm_moamele) == 1){
            sod_hajm_moamele = majmo_argham(hajm_moamele);
        }
        if (aval_halghavi(hajm_moamele) == 0){
            sod_hajm_moamele = -1 * tedad_maghsom_elayh_aval(hajm_moamele);
        }
        int x = hajm_taghaza - hajm_arze;
        sod_bakhs2 = bakhsh2(x);
        sod_nahaee = sod_hajm_moamele + sod_bakhs2;
        printf("%d", sod_nahaee);
        printf("%%\n");
        if (((float)sod_nahaee/price) > bishtarin_sod){
            bishtarin_sod = (float)sod_nahaee/price;
            kod_khas = kod_saham;
        }
    }
    printf("Best option: %d", kod_khas);
    return 0;
}







//----------------------------------------------
int prime (int p)
{
    int count = 0;
    for (int i = 1; i<=p; ++i){
        if (p%i == 0){
            count += 1;
        }
    }
    if (count == 2){
        return 1;
    }
    else{
        return 0;
    }
}
//--------------------------------------------------


//---------------------------------------------------
int pow (int pp)
{
    int adadi_ke_bayad_zarb_shavad = 1;
    for (int j = 1; j<=pp; ++j){
        adadi_ke_bayad_zarb_shavad *= 10;
    }
    return adadi_ke_bayad_zarb_shavad;
}
//-----------------------------------------------------







//------------------------------------------------------
int aval_halghavi (int a)
{
    int a_copy = a;
    int counter = 0;
    while (a_copy > 0){
        counter += 1;
        a_copy /= 10;
    }
    int zarib = pow(counter-1);
    if (prime(a) == 0){
        return 0;
    }
    else{
        for (int k = 1; k<=counter-1; ++k){
            int yekan = a%10;
            a = (a/10) + (yekan*zarib);
            if (prime(a) == 0){
                return 0;
            }
        }
    }
    return 1;
}
//-------------------------------------------------------------





//-------------------------------------------------------------
int tedad_maghsom_elayh_aval (int t)
{
    int counter2 = 0;
    for (int a5 = 1; a5<=t; ++a5){
        if (t%a5 == 0){
            if (prime(a5) == 1){
                counter2 += 1;
            }
        }
    }
    return counter2;
}
//-------------------------------------------------------------





//-------------------------------------------------------------
int majmo_argham (int m)
{
    int counter3 = 0;
    while (m>0){
        counter3 += m%10;
        m /= 10;
    }
    return counter3;
}
//---------------------------------------------------------------





//---------------------------------------------------------------
int bakhsh2 (int ba)
{
    if (ba > 0){
        int tedad = tedad_maghsom_elayh(ba);
        if (ba%tedad == 0){
            return zarb_argham(ba);
        }
        else{
            return majmo_moghsom_elayh_aval(ba);
        }
    }
    if (ba < 0){
        ba = (-1) * ba;
        int tedad = tedad_maghsom_elayh(ba);
        if (ba%tedad == 0){
            return (-1) * zarb_argham(ba);
        }
        else{
            return (-1) * majmo_moghsom_elayh_aval(ba);
        }
    }
    if (ba == 0){
        return 0;
    }
}
//---------------------------------------------------------------






//----------------------------------------------------------------
int tedad_maghsom_elayh (int tt)
{
    int counter3 = 0;
    for (int a8 = 1; a8<=tt; ++a8){
        if (tt%a8 == 0){
            counter3 += 1;
        }
    }
    return counter3;
}
//-----------------------------------------------------------------






//------------------------------------------------------------------
int zarb_argham (int za)
{
    int zarb = 1;
    while (za>0){
        int yekan = za%10;
        zarb *= yekan;
        za /= 10;
    }
    return zarb;
}
//--------------------------------------------------------------------







//---------------------------------------------------------------------
int majmo_moghsom_elayh_aval (int mmea)
{
    int sum = 0;
    for (int a9 = 1; a9<=mmea; ++a9){
        if (mmea%a9 == 0){
            if (prime(a9) == 1){
                sum += a9;
            }
        }
    }
    return sum;
}
//----------------------------------------------------------------------
