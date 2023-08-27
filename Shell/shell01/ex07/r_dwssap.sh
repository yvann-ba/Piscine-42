cat /etc/passwd | cut -d ":" -f1-4,6-8 |sed -n 2~2p | cut -d: -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -sd ',' | sed 's/,/, /g' | sed 's/$/\./' | tr -d '\n'  
