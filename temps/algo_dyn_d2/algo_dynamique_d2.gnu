set terminal pngcairo size 1000, 600
set output 'algo_dynamique_d2.png'
set xlabel "confiture (g)"
set ylabel "temps (s)"
set title "ALGO DYNAMIQUE : Temps d'exécution en fonction de la Quantité de confiture et du Nombre de pots (d=2)"

set key on inside top left
plot "algo_dyn_d2_0.temps" using 1:3 with lines title "k=0" lc "pink" smooth bezier,\
"algo_dyn_d2_2.temps" using 1:3 with lines title "k=2" lc "green" smooth bezier,\
"algo_dyn_d2_4.temps" using 1:3 with lines title "k=4" lc "black" smooth bezier,\
"algo_dyn_d2_6.temps" using 1:3 with lines title "k=6" lc "gray" smooth bezier,\
"algo_dyn_d2_8.temps" using 1:3 with lines title "k=8" lc "red" smooth bezier,\
"algo_dyn_d2_10.temps" using 1:3 with lines title "k=10" lc "blue" smooth bezier
