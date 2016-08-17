id -p $FT_USER | grep -v "uid" | cut -f 2- | sed 's/ /,/g' | tr -d '\n'
