- [飞行棋制作过程说明](#飞行棋制作过程说明)
  - [注意](#注意)
  - [特点](#特点)
  - [编写以及编译](#编写以及编译)
  - [文件结构](#文件结构)
  - [代码优点](#代码优点)
  - [代码实现](#代码实现)

# 飞行棋制作过程说明 
## 注意
  **&emsp;&emsp;&ensp;窗口大小为1200*900注意可能会超出电脑屏幕**
## 特点 
-  **使用图形库SDL2实现图形化界面。(图片来自网络)**   
-  **拥有规则查看模式，PVE模式2-4人，PVP模式2-4人等选择**
-  **通过控制台输出当前所处模式及提示，当前骰子点数，点击坐标，以及当前棋子**  
 
## 编写以及编译  
- **使用[vscode](https://code.visualstudio.com/)编写**  
- **使用vscode的插件[code runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)编译生成exe。**
- **使用[GitHub](https://github.com/kaipol/flying-chess)进行代码托管**
- **过程：**
  - **在源文件中使用run code连接SDL**  
  - **code runner调用gcc编译生成exe文件** 
  - **将SDL有关dll放入Code文件中**  
 
## 文件结构
- **Code**  
  - [**include**](Code/include)**SDL的各种头文件**  
  - [**flyingchess.c**](Code/flyingchess.c)**主代码**
  - [**flyingchess.h**](Code/flyingchess.h)**头文件**  
  - **SDL.dll、SDL_image.dll：运行所需的SDL动态连接库**
- rsc  
  &emsp;&emsp;**所需的资源图片**  
 
## 代码优点
- **利用结构体储存棋子各种状态及坐标**  
- **将每个模块及模式封装为函数**  
- [**电脑棋子随机选择**](#电脑棋子随机选择 "实现过程") 
- [**棋子行走部分**](#棋子行走部分 "实现过程")   
- **通过字符串比较确定棋子目标，如函数`void reload(const char name[10], int x, int y)`**
- **通过逐帧加载棋子动画表现移动**
  
## 代码实现
-  <span id="电脑棋子随机选择">**电脑棋子随机选择--随机数加goto实现**<span>  
  **例子--蓝棋**
``` c++
            int dice = rand() % (4 - count1) + 1;  //count1为未出发棋子数
            while (1)//通过循环+判断跳过无法行走的棋子
            {
                switch (dice)
                {
                case 1:
                    if (StartedChess.BlueEndChess[0] == 1 || (StartedChess.BlueEndChess[0] == 0 && result == 6))
                    {
                        printf("blue1\n");
                        goto bluepc1;   //直接跳转到移动部分，省去点击
                        break;
                    }
                case 2:
                    if (StartedChess.BlueEndChess[1] == 1 || (StartedChess.BlueEndChess[1] == 0 && result == 6))
                    {
                        printf("blue2\n");
                        goto bluepc2;
                        break;
                    }
                case 3:
                    if (StartedChess.BlueEndChess[2] == 1 || (StartedChess.BlueEndChess[2] == 0 && result == 6))
                    {
                        printf("blue3\n");
                        goto bluepc3;
                        break;
                    }
                case 4:
                    if (StartedChess.BlueEndChess[3] == 1 || (StartedChess.BlueEndChess[3] == 0 && result == 6))
                    {
                        printf("blue4\n");
                        goto bluepc4;
                        break;
                    }
                }
                dice = 1;//回到第一个判断
            }
```  
- <span id="棋子行走部分">**棋子行走部分,利用状态判断实现**<span>
``` c++
if (result == 6 && StartedChess.BlueEndChess[0] == 0){}//投到六时的起步
if (StartedChess.BlueEndChess[0] == 1 && EndChessNum.BlueEndChess[0] == 0){}//在未到终点前的行走
else if (EndChessNum.BlueEndChess[0] == 1){}//终点前的棋子行走
```
