cat /etc/passwd | grep -v '^#' | sed -n '2~2p' | rev | cut -d: -f7 | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | paste -s -d, - | sed 's/,/, /g' | awk '{print $0 "."}' | tr -d '\n'
