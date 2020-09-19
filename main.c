#include <stdio.h>
#include <stdlib.h>
#define w 50


float dias (int day,int month,int year,int dc,int mc,int yc);
void edad (float tag);
void parto(int dins,int mins,int ains);
void inse(int dpar,int mpar,int apar);
int vusca_nom(char nombre_vaca[w],int p);
int vusca_chope(int num,int p);
void modificar(int borr);
void ingresar(int borr);
void borrar(int borr);
void mostrar(int mos);



struct dias
{
    int num_partos;

    int dia_i;
    int mes_i;          // inseminacion
    int anho_i;

    int leche_dias[220];        //produccion leche
    float prom_ledia;
    int total_le;

    int dia_f;
    int mes_f;          // parto
    int anho_f;
    float dias_abi;
    float di;
};

struct ternero
{
  int dia;
  int mes;
  int anho;//fecha de nacimiento año
  char sexo;
  char nombre[w];


};

struct registro
{
    char nombre[w];
    int chapeta;
    char raza [w];
    int day_vaca;
    int month_vaca;
    int year_vaca;


    struct   dias lactancia[w];

    struct  ternero num[w];

    float promhato;

};

struct finca
{
    char tierra[w];
    int d;
    int m;
    int y;
    struct registro vaca[w];
    float promtotal;
}hato;


int main()
{
         char e[w];  //este es el que lee los nombres del teclado para buscarlos
        int n,s,a,m;
        int i,j;    // contadores  inicial

        float y;        //funcion dias
        int q;
        char buscar[50];
        int k,x,r;
        int conta;              //busqueda
        conta=0;

        int hd,hm,ha; //calculo de dia de parto

        int p,le,di,ins;      // menu partos
        int dle;       //contador de dias de leche
        int sum=0;// acumalador de leche;
        int total;
        float pro;
        int cont=0; //acumalador de promedio

        int din,min,yein; //dias abiertos
        float abierto,ab;
        int zu;
            int mayor,menor;


    printf("\t\t\t Hato colombiano!\n");

    printf("\t\t nombre del hato lechero:");
    scanf("%s",&hato.tierra);

    printf("fecha de chequeo\n");
     printf("day ");
     scanf("%d",&hato.d);
      printf("month  ");
     scanf("%d",&hato.m);
      printf("year ");
     scanf("%d",&hato.y);
                                                                   //TAMAÑO DEL HATO
    printf("numero de vacas lecheras: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("%d-registro\n",i+1);
        printf("nombre ");
        scanf("%s",&hato.vaca[i].nombre);
        printf("chapeta ");
        scanf("%d",&hato.vaca[i].chapeta);
        printf("raza ");
        scanf("%s",&hato.vaca[i].raza);

        printf("fecha de nacimiento\n");
        printf("day ");
        scanf("%d",&hato.vaca[i].day_vaca);
        printf("month ");
        scanf("%d",&hato.vaca[i].month_vaca);
        printf("year ");
        scanf("%d",&hato.vaca[i].year_vaca);

         y=dias(hato.vaca[i].day_vaca,hato.vaca[i].month_vaca,hato.vaca[i].year_vaca,hato.d,hato.m,hato.y);

            edad(y);

    do
    {

    printf("\n1- HA TENIDO PARTOS\n2- INSEMINACION\n0-SALIR\n");
    scanf("%d",&q);

    switch(q)
    {
    case 1:
        {
            do
            {
                printf("\n3-Numero de partos\n4-fecha del ultimo parto.\n0-SALIR\n");
                scanf("%d",&p);
                switch(p)
                {
                case 3:
                    {
                        printf("ingrese el total de partos de la vaca hasta el momento\n");
                        scanf("%d",&hato.vaca[i].lactancia[i].num_partos);
                        break;
                    }
                case 4:
                    {
                         printf("\nfecha de parto\n");
                        printf("dia");
                        scanf("%d",&hato.vaca[i].lactancia[i].dia_f);
                        printf("mes");
                        scanf("%d",&hato.vaca[i].lactancia[i].mes_f);
                        printf("ahno");
                        scanf("%d",&hato.vaca[i].lactancia[i].anho_f);

                        di=dias(hato.vaca[i].lactancia[i].dia_f,hato.vaca[i].lactancia[i].mes_f,hato.vaca[i].lactancia[i].anho_f,hato.d,hato.m,hato.y);
                        hato.vaca[i].lactancia[i].di=di;

                        printf("\nDias de lactancia a la fecha de chequeo %d \n",di);
                        printf("\nProduccion de lactancia a la fecha de chequeo\n ");

                                                    for(dle=0,sum=0;dle<di;dle++)
                                                    {
                                                        printf("dia  %d : ",dle);
                                                        scanf("%d",&hato.vaca[i].lactancia[i].leche_dias[dle]);
                                                        sum=sum+hato.vaca[i].lactancia[i].leche_dias[dle];
                                                    }
                                                    zu=sum;

                                                    hato.vaca[i].lactancia[i].total_le=sum;
                                                    total=hato.vaca[i].lactancia[i].total_le;
                                                    hato.vaca[i].lactancia[i].prom_ledia=sum/di;
                                                    pro=hato.vaca[i].lactancia[i].prom_ledia;


                                                    printf("\nproduccion total en los dias  %d",zu);
                                                    printf("\nproduccion hasta el momento %d",total);
                                                    printf("\npromedio produccion diaria %f",pro);

                                                printf("\ndias abiertos\n");
                                                    printf("dias abiertos ");
                                                    inse(hato.vaca[i].lactancia[i].dia_f,hato.vaca[i].lactancia[i].mes_f,hato.vaca[i].lactancia[i].anho_f);
                                                printf("\nCalculo de dias abiertos a la fecha de chequeo\n");
                                                printf("\ndia");
                                                scanf("%d",&din);
                                    printf("\nmes");
                                    scanf("%d",&min);
                                    printf("\nahno");
                                    scanf("%d",&yein);
                                    abierto=dias(din,min,yein,hato.d,hato.m,hato.y);
                        printf("\nnumero de dias abiertos a la fecha de chequeo es de %f\n",abierto);
                        hato.vaca[i].lactancia[i].dias_abi=abierto;
                        ab=hato.vaca[i].lactancia[i].dias_abi;
                            break;
                    }


                }


            }
            while(p!=0);

        }

    case 2:
        {
            printf("fecha de inseminacion");
            printf("dia");
            scanf("%d",&hd);
            printf("mes");
            scanf("%d",&hm);
            printf("anho\n");
            scanf("%d",&ha);

            printf("\ncalculo del dia del parto\n");

            parto(hd,hm,ha);

            break;

        }


    }

    }
    while(q!=0);
    }

    for(i=0,hato.promtotal=0;i<n;i++)
    {

        hato.promtotal=hato.promtotal+hato.vaca[i].lactancia[i].prom_ledia;



    }

    hato.promtotal=hato.promtotal/n;


    for(i=0,menor=0,mayor=0;i<n;i++)
              {
                 if(hato.vaca[menor].lactancia[menor].prom_ledia>hato.vaca[i].lactancia[i].prom_ledia)
                 {
                     menor=i;
                 }
                 if(hato.vaca[mayor].lactancia[mayor].prom_ledia<hato.vaca[i].lactancia[i].prom_ledia)
                 {
                     mayor=i;
                 }

              }








    printf("nombre\t  chapeta\t  raza \tprom vaca \t prom hato");
    for(i=0;i<n;i++)
    {

        printf("\n%s\t %2d\t %s\t%4f\t %10f \n",hato.vaca[i].nombre[i],hato.vaca[i].chapeta,hato.vaca[i].raza,hato.vaca[i].lactancia[i].prom_ledia,hato.promtotal);



    }

    printf("vaca de mayor produccion fue %s con un promedio de %f ",hato.vaca[mayor].nombre,hato.vaca[mayor].lactancia[mayor].prom_ledia);
    printf("vaca de menor produccion fue %s con un promedio de %f ",hato.vaca[menor].nombre,hato.vaca[menor].lactancia[menor].prom_ledia);


---

        do
  {
     printf("\n\n\n\n\n\n\n \t\t\t obdervar los datos de alguna de las vacas marque     1  ");
     printf("\n \t\t\t modificar datos marque     2  ");
     printf("\n \t\t\t borrar una vaca marque     3  ");
     printf("\n \t\t\t Salir  0  ");
      scanf("%d",&a);
         switch (a)
         {

        case 0:
        break;

         case 1:
             printf("\n \t\t\t desea buscarla por nombre marque 1,\n \t\t\t para buscarla por chopeta marque 2");
             scanf("%d",&i);
             if(i==1)
             {
                 printf("\n \t\t\t introdusca el nombre  ");
                 fflush(stdin);
                  gets(e);
                 m=vusca_nom(e,n);
             }else{
                    printf("\n \t\t\t introdusca numero de chapeta  ");
                    scanf("%d",&s);
                    m=vusca_chope(s,n);
                  }
             if(m==-1)
             {
                 printf(" la Vaca no esta registrada ");
             }else{
             mostrar(m);
                  }
          break;

         case 2:
              printf("\n \t\t\t nombre marque 1,\n \t\t\t para buscarla por chopeta marque 2");
             scanf("%d",&i);
             if(i==1)
             {
                 printf("\n \t\t\t introdusca el nombre  ");
                 fflush(stdin);
                  gets(e);
                 m=vusca_nom(e,n);
             }else{
                    printf("\n \t\t\t introdusca numero de chopeta  ");
                    scanf("%d",&s);
                    m=vusca_chope(s,n);
                  }
            if(m==-1)
             {
                 printf(" la Vaca no esta registrada ");
             }else{
             modificar(m);
             }
          break;

         case 3:
              printf("\n \t\t\t nombre marque 1,\n \t\t\t para buscarla por chopeta marque 2");
             scanf("%d",&i);
             if(i==1)
             {
                 printf("\n \t\t\t introdusca el nombre  ");
                 fflush(stdin);
                  gets(e);
                 j=vusca_nom(e,n);
             }else{
                    printf("\n \t\t\t introdusca numero de chopeta  ");
                    scanf("%d",&s);
                    m=vusca_chope(s,n);
                  }
                  if(m==-1)
             {
                 printf(" la Vaca no esta registrada ");
             }else{
             borrar(m);
             }
            break;

         default:
            printf("\n \t introdujo un numero incorrecto ");
         }
  }while(a!=0);

    return 0;
}




float dias (int day,int month,int year,int dc,int mc,int yc)
{
    int yd,a,m,d,ye;


    yd=yc-year;

    a=yd*365;
    m=abs(mc-month);
    d=abs(dc-day);
    ye=abs(a-m-d);

    return ye;

}

void edad(float tag)
{
    int year,mest,dh,z;
    float b,c,mes,dd,bc;

    year=tag/365;
    b=tag/365;
    c=b-year;
    mes=c*12;
    mest=c*12;
    bc=mes-mest;
    dd=bc*31;
    dh=bc*31;
    z=dd-bc;

    printf("edad de la vaca es \n");
    printf("%d years %d months %d days",year,mest,z);

    if(year>1)
    {
        printf("\nla vaca tiene la edad necesaria para entrar en embarazo");

    }
    else
    {
        printf("Aun es una vaquilla\n");
    }
    if(year<0&&mest<0&&z<0)
    {
        printf("fecha invalida a la fecha de chequeo");
    }

}

void parto(int dins,int mins,int ains)
{
    int dia,mes,year;

    if(mins==1)
    {
        mes=mins+9;
        printf("\nla fecha estandar del parto es %d del mes %d del anho %d\n",dins,mes,ains);

    }
    if(mins==2)
    {
        mes=mins+9;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,ains);

    }
    if(mins==3)
    {
        mes=mins+9;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,ains);

    }
    if(mins==4)
    {
        mes=1;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mins==5)
    {
        mes=2;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mins==6)
    {
        mes=3;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mins==7)
    {
        mes=4;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mins==8)
    {
        mes=5;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mins==9)
    {
        mes=6;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mins==10)
    {
        mes=7;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mins==11)
    {
        mes=8;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mins==12)
    {
        mes=9;
        year=ains+1;
        printf("la fecha estandar del parto es %d del mes %d del anho %d",dins,mes,year);

    }

}

    void inse(int dins,int mpar,int ains)
    {
         int dia,mes,year;

    if(mpar==1)
    {
        mes=4;
        year=ains-1;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,ains);

    }
    if(mpar==2)
    {
        mes=5;
        year=ains-1;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,ains);

    }
    if(mpar==3)
    {
        mes=6;
        year=ains-1;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,ains);

    }
    if(mpar==4)
    {
        mes=7;
        year=ains-1;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mpar==5)
    {
        mes=8;
        year=ains-1;
        printf("la fecha inseminacion aproximada  es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mpar==6)
    {
        mes=9;
        year=ains-1;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mpar==7)
    {
        mes=10;
        year=ains-1;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mpar==8)
    {
        mes=11;
        year=ains-1;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mpar==9)
    {
        mes=12;
        year=ains-1;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mpar==10)
    {
        mes=1;
        year=ains;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mpar==11)
    {
        mes=2;
        year=ains;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,year);

    }
    if(mpar==12)
    {
        mes=3;
        year=ains;
        printf("la fecha inseminacion aproximada es %d del mes %d del anho %d",dins,mes,year);

    }


    }





int vusca_nom(char nombre_vaca[w],int p)
{
    int i,j,nu,q,m,c;
    m=strlen(nombre_vaca);
           for(i=0,j=-1;i<p;i++)
           {
               for(q=0,c=0;q<m;q++)
              {
                 if(nombre_vaca[q]==hato.vaca[i].nombre[q])
                 {
                     c++;
                     if(c==m)
                     {
                        j++;
                        nu=i;
                     }
                 }
              }
           -------}
               if(j==-1)
                 {
                     nu=j;
                 }
    return nu;
}

int vusca_chope(int num,int p)
{
    int i,nu,j;
           for(i=0,j=-1;i<p;i++)
              {
                 if(num==hato.vaca[i].chapeta)
                 {
                   nu=i;
                   j++;
                 }
              }
              if(j==-1)
              {
                  nu=j;
              }
    return nu;
}

void borrar(int borr)
{
    int i,c,j,s;
    printf("\n \t\t\t Datos de la vaca que deseas borrar ");
      mostrar(borr);

    printf("\n \t\t\t Seguro que quieres borrar esta vaca \n \t\t\t si es asi marque 1, si se retracto marque cualquier tecla  ");
    scanf("%d",&j);
    if(j==1)
    {
        for(i=0;i<w;i++)
           {
             hato.vaca[borr].nombre[i]='\0';
             hato.vaca[borr].raza[i]='\0';
           }
        hato.vaca[borr].chapeta=0;
        hato.vaca[borr].promhato=0;
        hato.vaca[borr].year_vaca=0;
        hato.vaca[borr].month_vaca=0;
        hato.vaca[borr].day_vaca=0;

         for(c=0;c<w;c++)
         {
             hato.vaca[borr].lactancia[c].anho_f=0;
             hato.vaca[borr].lactancia[c].mes_f=0;
             hato.vaca[borr].lactancia[c].dia_f=0;
             hato.vaca[borr].lactancia[c].dias_abi=0;
             hato.vaca[borr].lactancia[c].total_le=0;
             hato.vaca[borr].lactancia[c].prom_ledia=0;
             for(s=0;s<220;s++)
             {
             hato.vaca[borr].lactancia[c].leche_dias[s]=0;
             }
             hato.vaca[borr].lactancia[c].anho_i=0;
             hato.vaca[borr].lactancia[c].mes_i=0;
             hato.vaca[borr].lactancia[c].dia_i=0;
             hato.vaca[borr].lactancia[c].num_partos=0;
         }
    }
    system("cls");
}


void modificar(int borr)
{
    int i,m;
    do
    {
        system("cls");
printf("\n \t\t\t Vaca a modificar ");
        mostrar(borr);

printf("\n \t\t\t Que dato desea modificar \n\t nombre marque 1\n\t numero de chopeta marque 2 \n \t raza marque 3 \n \t numero de partos marque 4");
printf("\n \t produccion promedio dias de lactancia maruqe 5 \n \t si no desea modifiar mas datos marque 0 ");
    scanf("%d",&m);
    switch(m)
    {
    case 0:
    break;

   case 1:
       printf("\n \t antiguo nombre %s ",hato.vaca[borr].nombre);
        for(i=0;i<w;i++)
    {
    hato.vaca[borr].nombre[i]='\0';

    }
       printf("\n \t introdusca el nuevo nombre ");
       fflush(stdin);
        gets(hato.vaca[borr].nombre);
    break;

   case 2:
       printf("\n \t numero de chopeta actual %d ",hato.vaca[borr].chapeta);
       hato.vaca[borr].chapeta=0;
       printf("\n \t nuevo numero de chopeta ");
       scanf("%d",&hato.vaca[borr].chapeta);
    break;

   case 3:
        printf("\n \t raza actual %s ",hato.vaca[borr].raza);
         for(i=0;i<w;i++)
    {
    hato.vaca[borr].raza[i]='\0';
    }
        printf("\n \t nueva raza ");
        fflush(stdin);
        gets(hato.vaca[borr].raza);
    break;

   case 4:

        printf("\n \t numero de partos actuales %d ",hato.vaca[borr].lactancia[borr].num_partos);
        hato.vaca[borr].lactancia[borr].num_partos=0;

        printf("introdusca el nuevo dato ");
        scanf("%d",&hato.vaca[borr].lactancia[borr].num_partos);
        break;

   case 5:
        printf("\n \t  produccion promedio dias de lactancia actual %f ",hato.vaca[borr].lactancia[borr].prom_ledia);

        hato.vaca[borr].lactancia[borr].prom_ledia=0;
        printf("\n \t introdusca nuevo dato ");


        scanf("%f",&hato.vaca[borr].lactancia[borr].prom_ledia);
        break;

   default:
        printf(" opcion incorrecta ");
        break;

        }
    }while(m!=0);
}


void mostrar(int mos)
{
    system("cls");
  printf("\n \t nombre %s \t chopeta %d \n \t raza %s  ",hato.vaca[mos].nombre,hato.vaca[mos].chapeta,hato.vaca[mos].raza);
  printf("\n \t crias %d  \n \t dias de lactancia %f",hato.vaca[mos].lactancia[mos].num_partos,hato.vaca[mos].lactancia[mos].di);
  printf("\n \t dias abiertos %f \n \t produccion promedio de la vaca %f",hato.vaca[mos].lactancia[mos].dias_abi,hato.vaca[mos].lactancia[mos].prom_ledia);
}
