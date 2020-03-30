var i= rootData.accX.length-1;
var j= rootData.accY.length-1;
var k= rootData.accZ.length-1;
return [{
    indicator:[
        { name: 'x', max: 1.1, min:0 },
        { name: 'y', max: 1.1, min:0 },
        { name: 'z', max: 1.1, min:0 },
    ],
    data:[{
        value: [rootData.accX[i].value,rootData.accY[j].value,rootData.accZ[k].value],
        name: '加速度',
    }]
}]
