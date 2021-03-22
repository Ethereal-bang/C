 



在最新的C标准中，main函数前的类型为int而不是void

main前面的int就是主函数的类型







## 数学函数

\#include<math.h>	// 包含数学函数的库

**次方**  **pow(x,y)**  (计算x的y次方）

**绝对值**   **fabs(x)**  (取x的绝对值）

...



## 良好习惯规范

**一个说明或一个语句占一行**

**当一句可执行语句结束的时候末尾需要有分号**

函数体内的语句要有明显缩进，**通常以按一下Tab键为一个缩进**



## 程序解释——注释

 多行注释： /* 注释内容 */ 

 单行注释： // 注释一行                                                   

编程时给**变量或者函数起的名字就是标识符**

可以是**字母(A～Z，a～z)**、**数字(0～9)**、**下划线_**组成的字符串，并且**第一个字符必须是字母或下划线**

标识符是**严格区分大小写**

不要使用中文。标识符**不能是C语言的关键字**

C语言中的 32 个关键字：

 int float double char short long signed unsigned

if else switch case default for while do

break continue return void const sizeof struct typedef

static extern auto register enum goto union volatile



## 变量及赋值



![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601130418488-7e56505c-6644-43ba-8e02-4c5e9610008e.jpeg)

变量名和标识符的命名规范完全相同

不允许连续赋值

变量的赋值分为**两种方式**：

1.**先声明再赋值** 

2.**声明的同时赋值**![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601130543548-f7bac600-2dc4-418b-98f5-6418b141e372.jpeg)





**const常量：**

*Eg：const  int  a = 10;*

*或* *int  const  a = 10;*

const VS define

从功能上说它们确实很像，但它们又有明显的不同：

define是预编译指令，而const是普通变量的定义。define定义的宏是在预处理阶段展开的，而const定义的只读变量是在编译运行阶段使用的。

const定义的是变量，而define定义的是常量。define定义的宏在编译后就不存在了，它不占用内存，因为它不是变量，系统只会给变量分配内存。但const定义的常变量本质上仍然是一个变量，具有变量的基本属性，有类型、占用存储单元。可以说，常变量是有名字的不变量，而常量是没有名字的。有名字就便于在程序中被引用，所以从使用的角度看，除了不能作为数组的长度，用const定义的常变量具有宏的优点，而且使用更方便。所以编程时在使用const和define都可以的情况下尽量使用常变量来取代宏。

const定义的是变量，而宏定义的是常量，所以const定义的对象有数据类型，而宏定义的对象没有数据类型。所以编译器可以对前者进行类型安全检查，而对后者只是机械地进行字符替换，没有类型安全检查。这样就很容易出问题，即“边际问题”或者说是“括号问题”。



\#include <stdio.h>

int main()

{

int age;

age=18;/*这里定义年龄*/

printf("我今年%d岁！\n", age);

return 0;

}

### 变量的作用域

#### 全局变量

使用情况：只读不写时

特点：

区别：定义的位置区分全局与局部

#### 局部变量

### 变量的生存期



## 数据类型![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601130791217-47a41ef7-28b0-449a-aae2-1636e2ddda8c.jpeg)

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601130835342-38966f3b-fab1-45e6-b445-b306cfd34620.jpeg)

**%u**无符号十进制整数

**%lu**无符号长整型

%d有符号十进制整数

%0无符号八进制

%x无符号十六进制整数

字符型无法与数值作比较

## 格式化输出语句

**printf("输出格式符"，输出项);**

**
**![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601165732911-e6683680-1d28-45b7-baa1-007382c51954.jpeg)

当输出语句中包含普通字符时，可以采用一下格式：

**printf("普通字符输出格式符", 输出项);**![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601165875216-e4c311b2-b92c-4cf2-b261-777cb3414c00.jpeg)

注：printf语句自己占一行

Eg.

%7.1f:总共占七个位置；保留一位小数

%-7f：向后共占七个位置

![IMG_20200930_145407.jpg](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601450195504-3d5ffbe8-690f-4aab-b5cf-88dc9f1b0f38.jpeg?x-oss-process=image%2Fresize%2Cw_1500)

**scanf**函数也是有**返回值**的,它返回的是正确输入到变量的个数

*if(scanf("%d",&year)==1)*来判断输入数据是否为d

## 常量

分为**直接常量和符号常量**

符号常量在使用之前必须先定义，其一般形式为：

 **#define 标识符 常量值
**

符号常量的标示符一般习惯使用大写字母，变量的标示符一般习惯使用小写字母，加以区


![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601166581043-3184262f-b21b-4775-ac28-eb079cb15a82.jpeg)

## 自动类型转换

自动转换发生在不同数据类型运算时字节小的可以向字节大的自动转换，但字节大的不能向字节小的自动转换

> \#include <stdio.h>
>
> int main()
>
> {
>
> char c = 'a';
>
> int n = c ;    //将c赋值给n
>
> float f =  c;   //将c赋值给f
>
> double d =c;    //将c赋值给d
>
> printf("%d\n",n);
>
> printf("%f\n",f);
>
> printf("%lf\n",d);
>
> return 0;
>
> }
>
> 运行结果
>
> 97
>
> 97.000000
>
> 97.000000

## 强制类型转换

一般形式为：

 **(数据类型) (表达式)**

转换后不会改变原数据的类型及变量值，只在本次运算中**临时性转换**

强制转换后的运算结果**不遵循四舍五入原则**

# 运算符号

+、-、*、/


![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601281519551-4a64587b-0e64-4cbe-b55b-063bc8210f71.jpeg)

除法运算中**两个数都是整数**的话，则**结果也为整数**

两数中**有一个为小数**，**结果则为小数**

**
**

**取余****运算**中**只适合用两个整数**进行取余运算

运算后的符号取决于被模数的符号

## 自增与自减运算符

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601282351052-a8a36233-99e6-4fe9-b789-630a9c3f27b7.jpeg)

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601282367487-030abec9-3ea3-497d-a6df-7e2517c8173a.jpeg)

运行结果![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601282396961-579a0703-b982-4d5b-9950-ce49a4f4e4bc.jpeg)

## 赋值运算符

**简单赋值运算符**和**复合赋值运算符**

复合赋值运算符就是在简单赋值符“=”之前加上其它运算符构成

**a += 5;这个算式就等价于a = a+5;** 将变量a和5相加之后再赋值给a

复合运算符中运算符和等号之间是不存在空格的

## 关系运算符![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601282737574-1d7a1a4b-491f-4b09-bcc2-c73821976511.jpeg)

关系表达式的值是“真”和“假”，在C程序用整数1和0表示

## 逻辑运算符![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601282889902-51b079df-888f-405f-adef-9e67ea0a5098.jpeg)

懒惰求值法&&和||

![IMG_20201021_144433.jpg](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1603262712407-a3ac0dfa-9387-40ad-99a3-de498d5df024.jpeg?x-oss-process=image%2Fresize%2Cw_1500)

## 三目运算符

三目运算符：“?:”，其格式为： **表达式1 ? 表达式2 : 表达式3;** 

执行过程是：

先判断表达式1的值是否为真，如果是真的话执行表达式2；如果是假的话执行表达式3

\#include <stdio.h>

int main()

{

//定义小编兜里的钱

double money =12    ;

//定义打车回家的费用

double cost =  11.5   ;

printf("小编能不能打车回家呢：");

//输出y小编就打车回家了，输出n小编就不能打车回家

printf("%c", money>=cost?'y':'n'            );

return 0;

}

执行结果为： 小编能不能打车回家呢：y

## 运算符优先级比较

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601283849137-016483d7-d8c4-42a6-a431-866b45885ed7.jpeg)

C语言中运算符中最高等级的为()

# 分支结构

## 分支结构之简单if语句

## 分支结构之简单if-else语句

## ![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601284403645-e24bb022-8d68-4c78-bbf1-09576ca06722.jpeg)

if()后面没有分号，直接写{}，else后面也没有分号，直接写{}

注：

表达式非0就输出

只有一个语句而不是语句块时可省略花括号

![IMG_20201021_145901.jpg](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1603263681908-3c72e3ba-9c6f-4260-80f4-879797bad19e.jpeg?x-oss-process=image%2Fresize%2Cw_1500)

## 分支结构之多重if-else语句

**依次判断表达式的值，当出现某个值为真时，则执行对应代码块，否则执行下一代码块**

当某一条件为真的时候，则不会向下执行该分支结构的其他语句


![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601285256652-9fda519c-8142-4710-a8f2-63ca680b88ae.jpeg)

关系运算符**：![IMG_20201021_143302.jpg](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1603262006489-96780410-a068-412a-846b-0de63ec6d5a6.jpeg?x-oss-process=image%2Fresize%2Cw_1500)**

## 分支结构之嵌套if-else语句

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601285392440-e7928596-f6f1-41f3-86ab-a2d234b38c6c.jpeg)

一般多分支分到else里面

![IMG_20201021_144223.jpg](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1603262582092-a0bbe19c-dd88-4f3d-9ce9-a59b0a6e3b41.jpeg?x-oss-process=image%2Fresize%2Cw_1500)

n为scanf的返回值，若输入year不为数字类型，则返回值为非1的数



## 分支结构之switch语句 

作用多分支选择

 Eg *#include<stdio.h>*

   *int main()*

   *{*

​     *int x;*

​     *printf("Enter n:");*

​     *scanf("%d",&x);*

​     *if(x==0)*

​       *printf("this number has no sign\n");*

​     *else*

​     *{*

​     *switch(x>0)*

​     *{*

​       *case 1:printf("+\n");*

​           *break;*

​       *case 0:printf("-\n");*

​           *break;*

​     *}*

​     *}*

   *}*

## 循环结构

## 循环结构之while循环

注意以下几点：

1、while语句中的**表达式一般是关系表达或逻辑表达式**，当表达式的值为假时不执行循环体，反之则循环体一直执行。

2、一定要记着**在循环体中改变循环变量的值**，否则会出现死循环（无休止的执行）。

3、循环体如果包括有一个以上的语句，则**必须用{}括起来**，组成复合语句。

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601286169630-ad79c9fb-1a5c-43ba-9e5b-a7a40b966225.jpeg)

## 循环结构之do-while循环

Eg：

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601986574851-56c5f601-f974-4610-b79f-e508910e4e8f.jpeg)

**do-while循环至少要执行一次循环语句**

**先执行再循环**

注意：使用do-while结构语句时，while括号后必须有**分号**

## 循环结构之for循环

特点：相对前两种循环结构语法更直接、简单

一般形式：

[![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1601987076079-4f9821ac-03e1-488b-882e-0c120735492c.jpeg)](http://img.mukewang.com/54890cf000013b1303130095.jpg)

执行过程

第一步：执行表达式1(**赋值**语句），对循环变量做初始化；

第二步：判断表达式2（**判断**语句，若其值为真（非0），则执行for循环体中执行代码块，然后向下执行；若其值为假（0），则结束循环；

第三步：执行表达式3**（步进值）**；

第四步：执行第二步；

第五步：循环结束，程序继续向下执行

注意for循环中的分号

图示

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602644319621-c922ed2b-a60e-4d1b-9ba3-51a80a4c8f80.jpeg)

Eg

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602644601327-85176f41-a0c3-4e0a-a20d-9e85d15ab2d1.jpeg)

注意

1、for循环中的“表达式1、2、3”均可可以缺省（缺少，省略），但分号(**;**)不能缺省。

2、省略“表达式1（**循环变量赋初值**）”，表示不对循环变量赋初始值

3、省略“表达式2(**循环条件**)”，不做其它处理，循环一直执行（死循环

4、省略“表达式3(**循环变量增量**)”，不做其他处理，循环一直执行（死循环）

（死循环可以使用后面即将讲到的**break**解决）

5、表达式1可以是设置循环变量的初值的赋值表达式，也可以是其他表达式

6、表达式1和表达式3可以是一个简单表达式也可以是多个表达式以逗号分割

eg

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602645023289-51ef8cd4-ce34-42c0-afcf-3b83573075f4.jpeg)运行结果![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602645066977-b08c13ed-c719-46f9-9161-14ebe55aa972.jpeg)



7、表达式2一般是关系表达式或逻辑表达式，但也可是数值表达式或字符表达式，只要其值非零，就执行循环体。

8、各表达式中的变量一定要在for循环之前定义

## 循环结构之三种循环比较

使用场合区别

1、在**知循环次数**的情况下更适合使用**for**循环；

2、在**不知循环次数**的情况下适合使用**while**或者**do-while**循环

如果**可能一次都不循环**应考虑使用**while**循环，如果**至少循环一****次**应考虑使用**do-while**循环

本质三种循环之间是可以相互**转换**的

eg

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602645387966-cccd2ec9-ebfd-4f7d-b4c6-5532f18fdc42.jpeg)

## 循环结构之多重循环

定义在循环结构的循环体中又出现循环结构

外层循环为父循环，内层循环为子循环，父循环一次，子循环需要全部执行完，直到跳出循环。父循环再进入下一次，子循环继续执行...

图解

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602647054433-8057347d-3c8e-4f7f-96ff-4914f7658bf9.jpeg)

注一个父循环可以有多个子循环

Eg


![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602647368862-f5dc5586-1565-40c1-ad06-02ffd2ec1e1b.jpeg)![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602647375305-0776d5cd-0d90-46f6-af68-5398de0686dc.jpeg)

## 结束语句之break语句

1、在没有**循环结构**的情况下，break不能用在单独的if-else语句中。

2、在多层循环中，一个break语句**只跳出当前循环**

**Eg**

**
**![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602647654358-f1460c77-8aa6-401e-bf39-fd8a246df532.jpeg)![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1602647709767-89feaf20-612b-4036-b920-c09715eaf3b2.jpeg)

## 结束语句之continue语句

作用**中断后继续**

break与continue的区别：break是跳出当前整个循环，continue结束本次循环开始下一次循环

## 分支结构之switch语句

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1604060317552-06b489ec-b635-45bb-bf96-c60a06e5ec9b.jpeg)

执行顺序


![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1604060355055-a4a96de3-ff11-477b-afe5-c2c8746c108d.jpeg)

注

**case**子句后如果没有**break**;会一直往后执行一直到遇到break;才会跳出switch语句

case后，允许有多个语句，{}可省

各case和default子句的先后顺序可以变动，而不会影响程序执行结果

default子句可以省略不用

Eg

![image.png](https://cdn.nlark.com/yuque/0/2020/png/2617721/1604060489954-018b91bd-7b28-4f48-9c3c-5f05130dcad1.png)

#  函数

自定义函数的一般形式：

![image](https://cdn.nlark.com/yuque/0/2020/jpeg/2617721/1607166647643-78d12bc7-e84a-49ef-88e6-e26dc497c326.jpeg)

位置

放在main函数后面的话，需要在main函数前声明自定义函数，

声明格式为：**[返回值数据类型说明] 函数名称（参数数据类型 参数）;       参数可省略**

## 函数调用

函数调用的一般形式为：

**函数名（参数）;** 

**注**

1、对**无参函数**调用的时候可以将[]包含的省略。

无参函数中输出的相对就比较固定

有参函数更为灵活

2、**[]中**可以是常数，变量或其它构造类型数据及表达式，各参数之间用逗号分隔。

函数内的参数与主函数无关，不通用

**多函数程序**

```
void main()//循环根据用户选择调用每一个函数
{ 
    int a[N];
    ……
    Read(a,N); //输入
    do{ 
        printf(“请输入：1－求和，2－排序，3－查找…… 0-退出”);
        scanf(“%d”,&choose);
        switch(choose)  //根据选择调用不同函数
        {
            case 1: //调用求和函数            
            case 2: //调用排序函数
            case 3: //调用查找函数　　　　　　
            ……
            case 0:
                printf("谢谢您的使用！再见！");               
                exit(0); //调用exit函数结束程序             
                break;  
        }   
    }while(1);//do-while结束
}
void Read(int a[], int n)　// 第一个函数定义{……}
int Average(int a[], int n)　　 // 第二个函数定义{……}
```

**
**

## 递归函数

定义

递归与迭代区别



# 数组

## 数组的定义和初始化

### 一维数组



 **`元素类型 数组名[元素个数]`** 

*`int score[5]`;  最大下标 5-1 （不一定有报错）*

元素个数即数组长度

定义时可适量大一些，实际可不用完



### 二维数组

**格式**：**`类型 数组名[第一维长度][第二维长度];`**

``` c
short matrix[3][4];
```

上式定义了`3` 行`4`列的短整型元素数组。



声明二维数组时，第一个长度可省略，但第二维长度不能够省略

``` c
short matrix[][4] = { {1, 2}, {2, 3, 4} };	// 其他元素默认初始化为 0
```



## 数组作函数实参

形参看似是一个数组，实则是一个变量——存储数组的**首地址**

实参传首地址的原因：只传一个地址比拷贝数组所有数据**效率更高**



**不需返回**该数组，因为函数中直接操作主函数内该数组



```c
#include<stdio.h>
#define N 4
//函数
float Average(int a[], int n) { //第一个实参传给函数的只是a数组的首地址；在参数位置 看似定义了数组实则定义了一个地址变量a
                                //n是传的数组长度
}

int main() {
    int num, a[N];
    // ...
    Avreage(a, num);	// 调用函数
}
```

**调用函数**时，只需传参数组名，不需长度声明

一维数组作函数参数时可省略长度声明



当形参被声明为**二维数组**时，可以省略数组第一维**长度声明**，但不能省略数组第二维的长度声明

``` c
// 函数功能：输入n个学生的学号和三门课的成绩
void  ReadScore(int score[][])

// 调用函数
ReadScore(score[][COURSE_N])	// 二维数组传参时必须传二维数组形式
```

不同于一维数组传参时传入首地址就可，（*如 `a`*）

## 数组的常见应用

[课件](https://docs.qq.com/slide/DRm9sU3luRktUdEhy?m_readonly=1&xiaolv_wy_tdoc_tid=393158239_1609308445363&tdsourcetag=s_qq_file_preview&scene=gAFfg4lAFfg40BFfg4BAFfg4Fbo2n1&_t=1609308716802)

### 统计：

求和，统计数量 等

### 求最值（下标）

### 查找

#### 顺序查找

```
//函数功能：用顺序查找法在具有n个元素的数组a中查找x,返回第一次出现的下标
int  Search( int a[], int n, int x) {
    int i;   
    for (i=0; i<n; i++) {
        if (a[i] == x) {
            return (i);//找到返回下标
        }
    }    
return (-1);//没找到返回-1}
```

#### 二分法查找

- - - 对数组排序  *此处以从小到大为例*
    - 先找到查找区域中点，

1. 1. 1. 中间值比目标值小：说明目标值在右半边
      2. ​                      大：                    左
      3. ​                      等：                    找到

```
//函数功能：用二分法在具有n个元素的数组a中查找x,返回第一次出现的下标
int BinSearch_( int a[],int n,int to_search) {
    int left=0,right=n-1,mid, find_i=-1;//标志变量   
    /*当还有区域没找，而且还未找到的时候循环查找*/
    while (left <= right&&find_i==-1) {
        mid = (left + right) / 2; /*求区域的中点*/
        if (to_search > a[mid]) { /*重新设定左边界*/
            left = mid + 1;
        }       
        else  if (to_search < a[mid]) { /*重新设定右边界*/ 
            right = mid - 1;
        }       　    
        else { /*找到，结束*/
            find_i=mid;
        }   
    }   
    return find_i;
}
```

### 排序

*下面均以 从小到大排序 为例*

#### 冒泡排序  

```
//函数功能：用冒泡法对有n个数组元素的数组a进行排序
void Sort_bubble(int a[],int n){
    int i,j,temp;
    for(i=1; i<n; i++)  /*冒泡法排序，i控制趟数*/
        for(j=0; j<n-i; j++)
            if(a[j]>a[j+1])   //前后两个元素比较、交换
            {
                temp=a[j]; a[j]=a[j+1];a[j+1]=temp; //俩俩交换
            }
}
```

解释  把每次外层循环比较出的最大值元素通过**若干次俩俩交换到后面**

每次内层循环(俩俩比较)的 终止下标 减少

- - 第1趟排序：比较a[0]和a[1]，不满足顺序交换，再比较a[1]和a[2]，不满足顺序交换，依此类推，直至a[n-2]和a[n-1]比较，不满足顺序交换，通过这一趟的两两比较**找到第****1****个最大的数放在****a[n-1]***最后一个***的位置**
  - ……  
  - 第i趟排序：比较a[0]和a[1]，不满足顺序交换，再比较a[1]和a[2]，不满足顺序交换，依此类推，直至a[n-i-1]和a[n-i]比较，不满足顺序交换，通过这一趟的两两比较找到第i个最大的数放在a[n-i]的位置
  - 直至第n-1趟

注排序函数不需返回值：因为根据形参a找到的数组和主函数中的数组是同一个数组，a[i]就是score[i],所以，对a进行排序，实际上就是对主函数中的score数组进行排序。因此不需要返回。



#### 交换排序

解释    起始元素与后面所有元素比较、交换

把每次外层循环比较得到的最小值元素通过**若干次俩俩交换到前面**

每次内层循环的 起始下标 增加

```
void Sort_Exchange (int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++) // i控制趟数
    {
        for(j=i+1; j<n; j++)
            if(a[i]>a[j]) //交换
            {
                temp=a[i]; a[i]=a[j]; a[j]=temp;
            }
    }
}
```

#### 选择排序

解释    先找到最小值下标，不忙交换  *区别于交换法：循环结构相似，交换次数更少*

```
void Sort_select(int a[],int n)
{
    int i,j,min_i,temp;
    for(i=0;i<n-1;i++)    // i控制趟数
    {
        min_i=i;    // 初始化最小元素下标
      for(j=i+1;j<n;j++)// 找到剩余元素里最小的
          if(a[j]<a[min_i]) //若从大到小排序，改成>
          {
              min_i=j;
          } 
      if(min_i! =i)      //交换
      {
          temp=a[min_i]; a[min_i]=a[i]; a[i]=temp;
      }
}
```



### 插入

#### 插入到特定位置

```
int Insert_to_pos(int a[],int n,int num,int pos)
{
    int i;
    if(pos>=n)
    {
        printf("wrong position");
    }
    else
    {  //从最后一个元素开始，到a[i]，所有元素向后移；
        for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];    
        a[pos]=num;
    }
    return n+1; 
}
```


/

#### 按顺序插入

```
int Insert_to_sortedarray(int a[],int n,int num)// (a已按从小到大排好) 
{
    int i;
    for(i=0;num>a[i]&&i<n;i++);
// 找到插入的位置i
    n=Insert_to_pos(a,n,num,i);
// 调用函数插入到a[i]所在的位置
    return n;
}
```

### 删除

```
// 函数功能：删除a数组中值为num的元素
int Delete_num(int a[], int n, int num) {
    int i, j, n;
    for(i = 0; i < n; i++) {
        if(a[i] == num) {
            // 从被找到元素的下一个开始从后往前移
            for(j = i; j < n-1; j++) {
                a[j] = a[j+1];
        }
    i--;    // 让下一次查找从这次的删除位置开始，以防连续俩个目标值元素的情况（重难点）
    n--;    // 每删除一个元素，数组长度-1
    }
}
```



# 指针

## 指针变量的定义和初始化

**指针变量**：存放变量的地址需要一种特殊类型的变量，这种特殊的数据类型就是 指针

**格式**：**`类型关键字 * 指针变量名 `**

```c
float *pa = NULL, *pb = NULL;
```

忘记指针初始化会给系统带来潜在危险，因此习惯上在定义指针变量的同时将其初始化为`NULL` 



也可直接初始化指向地址。

```c
int *pa = &a;
// 等价于

int *pa;
pa = &a;
```

上面俩种写法都初始化了指针变量`pa`，使其指向`a`

## 间接寻址运算符

通过指针变量间接存取它所指向的变量的访问方式称为：**间接寻址**



获取变量的地址需要使用**取地址运算符`&`**



指针运算符也称间接寻址运算符，即**`*`**。间接寻址运算符用来访问指针变量指向的变量的值



```c
int *pa = &a;
*pa = 9;
```

以上代码是修改指针变量`pa`所指向的变量的值，区别于初始化。

## 指针变量作函数参数

普通变量作函数参数是一种**按值调用**，形参就是实参的复印件，函数形参值的改变不能影响实参值



指针变量作函数参数，传给被调函数的值不是变量的值，而是变量的地址，称为 模拟按引用调用



以下是一个指针变量实现调换俩个变量的值的例子。

![image-20210308230554600](https://i.loli.net/2021/03/08/UxcRAX5f2zYE7aG.png)



# 字符串

## 字符数组初始化

<span style='font-size: 20px'>字符串常量</span>

推荐以下写法。

``` c
char a[30] = "I U.";
```

一般用字符串常量对字符数组初始化，系统会自动在末尾加**结束字符`\0`**



<span style = 'font-size: 20px'>单个输入</span>

``` c
char a[30] = {'I', '', 'U', '.'};
```

这种写法不会自动加`\0`，不易判断字符串结束位置。

## 字符串的输入输出

<span style='font-size: 19px'>输入</span>

``` c
#include<stdio.h>
int main() {
    int i, number = 0;
    char a[30];
    puts("please input a string:");
    gets(a);	// 一次性输入字符串，存入a数组
    for(i = 0; a[i] !=) {	// 统计
        if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] >= 'Z') {
            // ...
        }
    }
}
```

`scanf("%s", a);`实现输入，`a`前面不需要`&`，因为此时`a`是数组名，表示数组首地址。

要想输入带空格的字符串，只能用`gets()`



## 应用

<span style='font-size: 20px'>查找字符在字符串中出现的位置</span>

算法：

1. **定义**字符数组用来存储字符串
2. **查找**（写成函数）
3. **输出**查找结果

注意：查找，循环条件：`a[i] != '\0'`



<span style='font-size: 20px'>判断回文数</span>

算法：

![image-20210322091936098](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\image-20210322091936098.png)



循环条件`i < j && equal = 1`，`equal`初始化为 1，判断出不是回文则变为 0。

## 字符串有关库函数	==？==

在`<st4ring.h>`中定义了若干专门的字符串处理函数	

<span style = 'font-size: 19px'>strlen(字符串)</span>

返回字符串实际长度，即不包括`'\0'`的实际字符个数



<span style = 'font-size: 19px'>strcpy(目的字符串，源字符串)</span>



<span style = 'font-size: 19px'>strcat(str1，str2)</span>

把 `str2` 连到 `str1`后面。



<span style = 'font-size: 19px'>strcmp(字符串1， 字符串2)</span>

当出现第一对不相等的字符时，就由这两个字符决定所在字符串的大小
返回其ASCII码比较的结果值，  

+ 若`str1` < `str2`，返回值 < 0
+ 若`str1` > `str2`，返回值 > 0
+ 若`str1` = `str2`，返回值 = 0



注意：

+ 字符串不能直接整体复制
+ 字符串不能用关系运算符比较大小

以上可用库函数来实现。



## 二维数组存储多个字符串



