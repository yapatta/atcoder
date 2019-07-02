<?php

//標準入力
$N = intval(trim(fgets(STDIN)));
$A = array_map("intval", explode(" ", trim(fgets(STDIN))));
$B = array_map("intval", explode(" ", trim(fgets(STDIN))));

$AB = array();
foreach(range(0,2) as $i){
		$AB[] = [$A[$i], $B[$i]]; 
}

//A → B
$dp = array();
for($i = 1; $i <= $N ;$i++){
		$dp[$i] = $i;
}

for($i = 1; $i <= $N;$i++){
		foreach($AB as list($a, $b) ){
				if($i >= $a){
						$dp[$i] = max($dp[$i], $dp[$i-$a]+$b);
				}
		}
}

$atob =  $dp[$N];

//B → A
unset($dp);
$dp = array();
for($i = 1; $i <= $atob ;$i++){
		$dp[$i] = $i;
}


for($i = 1; $i <= $atob;$i++){
		foreach($AB as list($a, $b)){
				if($i >= $b){
						$dp[$i] = max($dp[$i], $dp[$i-$b]+$a);
				}
		}
}

echo $dp[$atob] . PHP_EOL;
echo memory_get_usage(true);

