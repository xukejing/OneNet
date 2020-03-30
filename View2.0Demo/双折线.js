var result = [];
var dataPoint = null;
//循环处理选中的数据源的数据点
for (var i = rootData.temp.length-500; i <  rootData.temp.length; i++) {
  // 从数据点中取出需要的数据，通过配置键值对使得数据格式符合要求
  dataPoint = {
    x: rootData.temp[i].at,
    y1:rootData.temp[i].value,
    y2:rootData.humi[i].value,  
  };
  // 将这个数据点添加进结果中
  result.push(dataPoint);
}
return result;
