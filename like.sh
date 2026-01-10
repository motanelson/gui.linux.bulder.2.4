n="5"
m="10"
for a in {0..10}
do
    if ./like $a 5;
    then
        echo number
    else
        echo $a
    fi
done 
