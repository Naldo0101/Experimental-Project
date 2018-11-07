#include <stdio.h>
#include <math.h>


int main(){

int idade;   //Armagenar idade

printf("Digite sua idade:");
scanf("%i",&idade);  //pedir e ler idade

//condição de idade minima
if(idade < 18){

printf("Voce não tem idade suficiente para comprar bebidas alcoolicas");

}else{   //caso tenha idade suficiente as opções abaixo serão visiveis

int opcao;   //Armazenar opção escolhida pelo usuário

//menu De opções
printf("Menu:\n");
printf("1-Whisky\n");
printf("2-Voodka\n");
printf("3-Cerveja\n");
printf("4-Cachaça\n");
printf("\nEscolha uma das opcoes acima:");
scanf("%i",&opcao);   //apresentando e lendo opção

if(opcao <1 || opcao >4 ){

  //condicional de opção invalida(Invalidez)

printf("Opcao invalida\n");

}else if(opcao == 1){
//condicional sobre a opção 1 (Whisky)
int codigo;
int quantidade;

  printf("100-Whisky1 R$200\n");
  printf("101-Whisky2 R$150\n");
  printf("102-Whisky3 R$140\n");
  printf("\nDigite o codigo do produto:  ");
  scanf("%i",&codigo);
  printf("Agora digite a quantidade do produto:  ");
  scanf("%i",&quantidade);

if(quantidade <1){

//só sera executado se a quantidade for maio que 0

printf("quantidade Invalida\n");

}else  if (quantidade > 5 && quantidade < 50){
//desconto de 10% caso seja comprado mais de 5 produtos
float preco1 = quantidade*200;
float preco2 = quantidade*150;
float preco3 = quantidade*140;

float desconto1 = preco1-preco1*0.1;
float desconto2 = preco2-preco2*0.1;
float desconto3 = preco3-preco3*0.1;


switch(codigo){

case 100:printf("Voce comprou %i Whisky1 e pagara %f\n",quantidade,desconto1 );
break;

case 101:printf("Voce comprou %i Whisky2 e pagara %f\n",quantidade,desconto2 );
break;

case 102:printf("Voce comprou %i Whisky3 e pagara %f\n",quantidade,desconto3 );
break;
}

}else  if (quantidade > 50 && quantidade < 100){
//desconto de 30% caso seja comprado mais de 50 produtos
float preco1 = quantidade*200;
float preco2 = quantidade*150;
float preco3 = quantidade*140;

float desconto1 = preco1-preco1*0.3;
float desconto2 = preco2-preco2*0.3;
float desconto3 = preco3-preco3*0.3;

switch(codigo){

case 100:printf("Voce comprou %i Whisky1 e pagara %f\n",quantidade,desconto1 );
break;

case 101:printf("Voce comprou %i Whisky2 e pagara %f\n",quantidade,desconto2 );
break;

case 102:printf("Voce comprou %i Whisky3 e pagara %f\n",quantidade,desconto3 );
break;
}

}else if (quantidade > 100){

  float preco1 = quantidade*200;
  float preco2 = quantidade*150;
  float preco3 = quantidade*140;

  float desconto1 = preco1-preco1*0.35;
  float desconto2 = preco2-preco2*0.35;
  float desconto3 = preco3-preco3*0.35;

  switch(codigo){

  case 100:printf("Voce comprou %i Whisky1 e pagara %f\n",quantidade,desconto1 );
  break;

  case 101:printf("Voce comprou %i Whisky2 e pagara %f\n",quantidade,desconto2 );
  break;

  case 102:printf("Voce comprou %i Whisky3 e pagara %f\n",quantidade,desconto3 );
  break;

}

}else{

  float preco1 = quantidade*200;
  float preco2 = quantidade*150;
  float preco3 = quantidade*140;

    switch(codigo){

  case 100:printf("Voce comprou %i Whisky1 e pagara %f\n",quantidade,preco1 );
  break;

  case 101:printf("Voce comprou %i Whisky2 e pagara %f\n",quantidade,preco2 );
  break;

  case 102:printf("Voce comprou %i Whisky3 e pagara %f\n",quantidade,preco3);
  break;

  }

}

}else if(opcao == 2){
//condicional sobre a opção 1 (Whisky)
int codigo;
int quantidade;

  printf("200-Voodka1 R$60\n");
  printf("201-Voodka2 R$40\n");
  printf("202-Voodka3 R$30\n");
  printf("\nDigite o codigo do produto:  ");
  scanf("%i",&codigo);
  printf("Agora digite a quantidade do produto:  ");
  scanf("%i",&quantidade);

if(quantidade <1){

//só sera executado se a quantidade for maio que 0

printf("quantidade Invalida\n");

}else  if (quantidade > 5 && quantidade < 50){
//desconto de 10% caso seja comprado mais de 5 produtos
float preco1 = quantidade*60;
float preco2 = quantidade*40;
float preco3 = quantidade*30;

float desconto1 = preco1-preco1*0.1;
float desconto2 = preco2-preco2*0.1;
float desconto3 = preco3-preco3*0.1;


switch(codigo){

case 200:printf("Voce comprou %i Voodka1 e pagara %f\n",quantidade,desconto1 );
break;

case 201:printf("Voce comprou %i Voodka2 e pagara %f\n",quantidade,desconto2 );
break;

case 202:printf("Voce comprou %i Voodka3 e pagara %f\n",quantidade,desconto3 );
break;
}

}else  if (quantidade > 50 && quantidade < 100){
//desconto de 30% caso seja comprado mais de 50 produtos
float preco1 = quantidade*60;
float preco2 = quantidade*40;
float preco3 = quantidade*30;

float desconto1 = preco1-preco1*0.3;
float desconto2 = preco2-preco2*0.3;
float desconto3 = preco3-preco3*0.3;

switch(codigo){

case 200:printf("Voce comprou %i Voodka1 e pagara %f\n",quantidade,desconto1 );
break;

case 201:printf("Voce comprou %i Voodka2 e pagara %f\n",quantidade,desconto2 );
break;

case 202:printf("Voce comprou %i Voodka3 e pagara %f\n",quantidade,desconto3 );
break;
}

}else if (quantidade > 100){

  float preco1 = quantidade*60;
  float preco2 = quantidade*40;
  float preco3 = quantidade*30;

  float desconto1 = preco1-preco1*0.35;
  float desconto2 = preco2-preco2*0.35;
  float desconto3 = preco3-preco3*0.35;

  switch(codigo){

  case 200:printf("Voce comprou %i Voodka1 e pagara %f\n",quantidade,desconto1 );
  break;

  case 201:printf("Voce comprou %i Voodka2 e pagara %f\n",quantidade,desconto2 );
  break;

  case 202:printf("Voce comprou %i Voodka3 e pagara %f\n",quantidade,desconto3 );
  break;

}

}else{

  float preco1 = quantidade*60;
  float preco2 = quantidade*40;
  float preco3 = quantidade*30;

  switch(codigo){

  case 200:printf("Voce comprou %i Voodka1 e pagara %f\n",quantidade,preco1 );
  break;

  case 201:printf("Voce comprou %i Voodka2 e pagara %f\n",quantidade,preco2 );
  break;

  case 202:printf("Voce comprou %i Voodka3 e pagara %f\n",quantidade,preco3 );
  break;

  }


}

}else if(opcao == 3){
//condicional sobre a opção 1 (Whisky)
int codigo;
int quantidade;

  printf("300-Cerveja1 R$1.50\n");
  printf("301-Cerveja2 R$2.0\n");
  printf("302-Cerveja3 R$3.0\n");
  printf("\nDigite o codigo do produto:  ");
  scanf("%i",&codigo);
  printf("Agora digite a quantidade do produto:  ");
  scanf("%i",&quantidade);

if(quantidade <1){

//só sera executado se a quantidade for maio que 0

printf("quantidade Invalida\n");

}else  if (quantidade > 5 && quantidade < 50){
//desconto de 10% caso seja comprado mais de 5 produtos
float preco1 = quantidade*1.50;
float preco2 = quantidade*2.0;
float preco3 = quantidade*3.0;

float desconto1 = preco1-preco1*0.1;
float desconto2 = preco2-preco2*0.1;
float desconto3 = preco3-preco3*0.1;


switch(codigo){

case 300:printf("Voce comprou %i Cerveja1 e pagara %f\n",quantidade,desconto1 );
break;

case 301:printf("Voce comprou %i Cerveja2 e pagara %f\n",quantidade,desconto2 );
break;

case 302:printf("Voce comprou %i Cerveja3 e pagara %f\n",quantidade,desconto3 );
break;
}

}else  if (quantidade > 50 && quantidade < 100){
//desconto de 30% caso seja comprado mais de 50 produtos
float preco1 = quantidade*1.50;
float preco2 = quantidade*2.0;
float preco3 = quantidade*3.0;

float desconto1 = preco1-preco1*0.3;
float desconto2 = preco2-preco2*0.3;
float desconto3 = preco3-preco3*0.3;

switch(codigo){

case 300:printf("Voce comprou %i Cerveja1 e pagara %f\n",quantidade,desconto1 );
break;

case 301:printf("Voce comprou %i Cerveja2 e pagara %f\n",quantidade,desconto2 );
break;

case 302:printf("Voce comprou %i Cerveja3 e pagara %f\n",quantidade,desconto3 );
break;
}

}else if (quantidade > 100){

  float preco1 = quantidade*1.50;
  float preco2 = quantidade*2.0;
  float preco3 = quantidade*3.0;

  float desconto1 = preco1-preco1*0.35;
  float desconto2 = preco2-preco2*0.35;
  float desconto3 = preco3-preco3*0.35;

  switch(codigo){

  case 300:printf("Voce comprou %i Cerveja1 e pagara %f\n",quantidade,desconto1 );
  break;

  case 301:printf("Voce comprou %i Cerveja2 e pagara %f\n",quantidade,desconto2 );
  break;

  case 302:printf("Voce comprou %i Cerveja3 e pagara %f\n",quantidade,desconto3 );
  break;

}

}else{

  float preco1 = quantidade*1.50;
  float preco2 = quantidade*2.0;
  float preco3 = quantidade*3.0;

  switch(codigo){

  case 300:printf("Voce comprou %i Cerveja1 e pagara %f\n",quantidade,preco1 );
  break;

  case 301:printf("Voce comprou %i Cerveja2 e pagara %f\n",quantidade,preco2 );
  break;

  case 302:printf("Voce comprou %i Cerveja3 e pagara %f\n",quantidade,preco3 );
  break;

  }

}

}else if(opcao == 4){
//condicional sobre a opção 1 (Whisky)
int codigo;
int quantidade;

  printf("400-Cachaca1 R$8.0\n");
  printf("401-Cachaca2 R$20.0\n");
  printf("402-Cachaca3 R$22.0\n");
  printf("\nDigite o codigo do produto:  ");
  scanf("%i",&codigo);
  printf("Agora digite a quantidade do produto:  ");
  scanf("%i",&quantidade);

if(quantidade <1){

//só sera executado se a quantidade for maio que 0

printf("quantidade Invalida\n");

}else  if (quantidade > 5 && quantidade < 50){
//desconto de 10% caso seja comprado mais de 5 produtos
float preco1 = quantidade*8.0;
float preco2 = quantidade*20.0;
float preco3 = quantidade*22.0;

float desconto1 = preco1-preco1*0.1;
float desconto2 = preco2-preco2*0.1;
float desconto3 = preco3-preco3*0.1;


switch(codigo){

case 400:printf("Voce comprou %i Cachaca1 e pagara %f\n",quantidade,desconto1 );
break;

case 401:printf("Voce comprou %i Cachaca2 e pagara %f\n",quantidade,desconto2 );
break;

case 402:printf("Voce comprou %i Cachaca3 e pagara %f\n",quantidade,desconto3 );
break;
}

}else  if (quantidade > 50 && quantidade < 100){
//desconto de 30% caso seja comprado mais de 50 produtos
float preco1 = quantidade*8.0;
float preco2 = quantidade*20.0;
float preco3 = quantidade*22.0;

float desconto1 = preco1-preco1*0.3;
float desconto2 = preco2-preco2*0.3;
float desconto3 = preco3-preco3*0.3;

switch(codigo){

case 400:printf("Voce comprou %i Cachaca1 e pagara %f\n",quantidade,desconto1 );
break;

case 401:printf("Voce comprou %i Cachaca2 e pagara %f\n",quantidade,desconto2 );
break;

case 402:printf("Voce comprou %i Cachaca3 e pagara %f\n",quantidade,desconto3 );
break;
}

}else if (quantidade > 100){

  float preco1 = quantidade*8.0;
  float preco2 = quantidade*20.0;
  float preco3 = quantidade*22.0;

  float desconto1 = preco1-preco1*0.35;
  float desconto2 = preco2-preco2*0.35;
  float desconto3 = preco3-preco3*0.35;

  switch(codigo){

  case 400:printf("Voce comprou %i Cachaca1 e pagara %f\n",quantidade,desconto1 );
  break;

  case 401:printf("Voce comprou %i Cachaca2 e pagara %f\n",quantidade,desconto2 );
  break;

  case 402:printf("Voce comprou %i Cachaca3 e pagara %f\n",quantidade,desconto3 );
  break;

}

}else{

  float preco1 = quantidade*8.0;
  float preco2 = quantidade*20.0;
  float preco3 = quantidade*22.0;

  switch(codigo){

  case 400:printf("Voce comprou %i Cachaca1 e pagara %f\n",quantidade,preco1 );
  break;

  case 401:printf("Voce comprou %i Cachaca2 e pagara %f\n",quantidade,preco2);
  break;

  case 402:printf("Voce comprou %i Cachaca3 e pagara %f\n",quantidade,preco3 );
  break;

  }


}

}

}

}
