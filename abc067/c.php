<?php 
$N = intval(trim(fgets(STDIN)));
$tmp = trim(fgets(STDIN));
$a = array_map("intval", explode(" ", $tmp));

$l = 0;
$left = [];
$left[0] = 0;
foreach($a as $value){
    $l += $value;
    array_push($left, $l);
}

$r = 0;
$right = [];
$right[0] = 0;
$r_a = array_reverse($a);
foreach($r_a as $value){
    $r += $value;
    array_push($right, $r);
}
$right = array_reverse($right);

$ans = abs($right[1] - $left[1]);
for($i = 2;$i<count($right)-1;$i++){
    if($ans > abs($right[$i] - $left[$i])){
        $ans = abs($right[$i] - $left[$i]);
    }
}

echo $ans . PHP_EOL;