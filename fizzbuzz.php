<?php
//fizzbuzz in php
//@rdar

$count = 0;

while($count <= 100){
    $fizz = $count % 3 == 0 ? 'fizz' : null;
    $buzz = $count % 5 == 0 ? 'buzz' : null;
    echo "{$count} {$fizz}{$buzz}\n";
    $count += 1;
}
