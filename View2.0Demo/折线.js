var result = [];
var dataPoint = null;
//循环处理选中的数据源的数据点
for (var i = data.length-200; i < data.length; i++) {
  // 从数据点中取出需要的数据，通过配置键值对使得数据格式符合要求
  dataPoint = {
    x: data[i].at,
    y1: data[i].value, 
  };
  // 将这个数据点添加进结果中
  result.push(dataPoint);
}
return result;
