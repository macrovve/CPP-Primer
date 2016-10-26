## Exercise 2.27

> 下面的哪些初始化是合法的？请说明原因

```cpp
    int i=-1,&r=0;              //非法 引用必须绑定在对象上，不是是字面值
    int *const p2=&i2;          //合法 const 指针
    const int i=-1,&r=0;        //合法 对常量的引用可以是字面值
    const int *const p3=&i2;    //合法 
    const int *p1=&i2;          //合法 
    const int &const r2;        //非法 const 引用不存在，引用不是对象。
    const int i2=i,&r=i;        //合法
```

## Exercise 2.28

> 说明下面的这些定义是什么意思，挑出其中不合法的。

```cpp
int i, *const cp;		//非法 const 指针cp必须初始化
int *p1, *const p2;		//非法 const 指针p2必须初始化
const int ic, &c=ic;	//非法 const 变量ic必须初始化
const int *const p3;	//非法 const 指针p3必须初始化
const int *p;			//合法 指向常量的指针
```

## Exercise 2.29

> 假设已有上一个练习中定义的那些变量，则下面的哪些语句是合法的？请说明原因。

```cpp
i=ic;			//合法 
p1=p3;			//非法 const 指针不能赋给普通指针
p1=&ic;			//非法 对常量地址只能用指向const 的指针
p3=&ic;			//非法 p3是const指针不能改变所指地址
p2=p1;			//非法 p2是const指针不能改变所指地址
ic=*p3;			//非法 ic是const变量，不能改变值
```



