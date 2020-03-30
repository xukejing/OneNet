var i= rootData.humi.length-1;
var opt=rootData.humi[i].value.toFixed(1); 
var str=opt.toString();
str+="%";
return [{
    graphic:[{
        text:str
    }],
    data:[
        { value: opt, name: '湿', color:"#1089E7"},
        { value: 100-opt, name: '干', color:"#333"}
    ]
}]
