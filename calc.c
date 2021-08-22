#include <stdio.h>

int main(){
    double v_usina, v_vista, v_30dias, v_juros, final;
    printf("Valor usina: ");
    scanf("%lf", &v_usina);
    v_vista = v_usina/3;
    v_30dias = (v_vista*2)*0.5;
    v_juros = v_30dias*0.5;
    final = v_vista+(v_30dias*2)+v_juros;
    printf("Usina: %lf\n", v_usina);
    printf("A vista: %lf\n", v_vista);
    printf("30 dias: %lf\n", v_30dias);
    printf("Juros: %lf\n", v_juros);
    printf("Final: %lf\n", final);
    return 0;
}