function setup(){//設定只做一次
   createCanvas(400,200); 
}
function draw(){//畫圖每秒60
    let s = second();//0..59秒
    if( s%2==0) {
      background(49,45,50);
    }
    else{
      background(58,114,0);
    }
}
///(要注意大括號要加)
///網路搜尋Processing to p5.js converter，可把java語言轉乘P5
