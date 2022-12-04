#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL.h"
//头文件

//声明图形库区
SDL_Window *Window = NULL;//声明窗口
SDL_Renderer *Renderer=NULL;//画笔or渲染器

SDL_Surface  *MainBackGroundSurface=NULL;//图形区域
SDL_Texture *MainBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect MainBackGroundRect;//显示画笔图形信息，如长宽高

SDL_Surface  *TypeBackGroundSurface=NULL;//图形区域
SDL_Texture *TypeBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect TypeBackGroundRect;//显示画笔图形信息，如长宽高

SDL_Surface  *NumBackGroundSurface=NULL;//图形区域
SDL_Texture *NumBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect NumBackGroundRect;//显示画笔图形信息，如长宽高

SDL_Surface  *TapBackGroundSurface=NULL;//图形区域
SDL_Texture *TapBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect TapBackGroundRect;//显示画笔图形信息，如长宽高

SDL_Surface  *RuleBackGroundSurface=NULL;//图形区域
SDL_Texture *RuleBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect RuleBackGroundRect;//显示画笔图形信息，如长宽高

SDL_Surface *BulBackGroundSurface=NULL;//图形区域
SDL_Texture *BulBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect BulBackGroundRect;//显示画笔图形信息，如长宽高

SDL_Surface *YellowBackGroundSurface=NULL;//图形区域
SDL_Texture *YellowBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect YellowBackGroundRect;//显示画笔图形信息，如长宽高

SDL_Surface *GreenBackGroundSurface=NULL;//图形区域
SDL_Texture *GreenBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect GreenBackGroundRect;//显示画笔图形信息，如长宽高

SDL_Surface *RedBackGroundSurface=NULL;//图形区域
SDL_Texture *RedBackGroundTexture=NULL;//画笔识别图形区域
SDL_Rect RedBackGroundRect;//显示画笔图形信息，如长宽高
//声明图形库区

//函数声明
void load();//加载图片
void start();//开始游戏
void rule();//游戏规则
void quit();//退出游戏
void type_chose();//游戏模式选择
void p_c_fight();//人机对战
void p_p_fight();//人人对战
void begin2();//进入棋盘 二人
void begin3();//进入棋盘 三人
void begin4();//进入棋盘 四人
//函数声明



//主函数
int SDL_main(int argc,char*argv[])//主函数
{
    SDL_Init(SDL_INIT_VIDEO);//初始化库
    Window= SDL_CreateWindow("Flying chess",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1000,900,SDL_WINDOW_SHOWN);//弹出窗口
    Renderer= SDL_CreateRenderer(Window,-1, SDL_RENDERER_ACCELERATED);//允许随意移动鼠标
    SDL_Event MainEvent;//主事件
    load();//加载图片
    SDL_RenderClear(Renderer);//清空画笔
    SDL_RenderCopy(Renderer,MainBackGroundTexture,NULL,&MainBackGroundRect);//复制画笔
    SDL_RenderPresent(Renderer);//刷新画笔
    while(SDL_WaitEvent(&MainEvent))
    {
        switch(MainEvent.type)//事件类型
        {
            case SDL_QUIT://退出游戏
                quit();
            /*case SDL_KEYDOWN://键盘互动
                switch (MainEvent.key.keysym.sym)
                {
                    case SDLK_9://9=某个键位,自行查找并且替换
                    //调用某个函数

                    //other case.....
                    //other 函数function

                    default:
                        break;
                }
                break;*/
            /*case SDL_MOUSEBUTTONDOWN://鼠标互动 按下触发
                //function
                printf("(%d,%d)\n",MainEvent.button.x,MainEvent.button.y);//在命令行打印鼠标坐标
                break;*/
            case SDL_MOUSEBUTTONUP://鼠标互动 松开触发
                //function
                if(MainEvent.button.x>400&&MainEvent.button.x<570&&MainEvent.button.y>300&&MainEvent.button.y<470)//根据点击位置触发指令
                {
                    start();//游戏开始
                }
                if(MainEvent.button.x>317&&MainEvent.button.x<660&&MainEvent.button.y>523&&MainEvent.button.y<618)//根据点击位置触发指令
                {
                    printf("This is rule!");
                    rule();
                    //弹出规则
                }
                if(MainEvent.button.x>318&&MainEvent.button.x<641&&MainEvent.button.y>710&&MainEvent.button.y<800)//根据点击位置触发指令
                {
                    quit();//游戏结束
                }
                printf("(%d,%d)\n",MainEvent.button.x,MainEvent.button.y);//在命令行打印鼠标坐标
                break;
            default:
                break;
        }
    }

    quit();//退出游戏
}
//主函数



//函数区

void load()//加载图片
{
    MainBackGroundSurface= IMG_Load("menu.png");//("/*图片文件名*/")//菜单界面
    MainBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,MainBackGroundSurface);//将画笔放在窗口上
    MainBackGroundRect.x=0;//同下
    MainBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    MainBackGroundRect.w=1000;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    MainBackGroundRect.h=900;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    TypeBackGroundSurface= IMG_Load("type_chose.png");//("/*图片文件名*/")//游戏模式选择
    TypeBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,TypeBackGroundSurface);//将画笔放在窗口上
    TypeBackGroundRect.x=0;//同下
    TypeBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    TypeBackGroundRect.w=1000;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    TypeBackGroundRect.h=900;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    NumBackGroundSurface= IMG_Load("num_chose.png");//("/*图片文件名*/")//人数选择
    NumBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,NumBackGroundSurface);//将画笔放在窗口上
    NumBackGroundRect.x=0;//同下
    NumBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    NumBackGroundRect.w=1000;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    NumBackGroundRect.h=900;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    TapBackGroundSurface= IMG_Load("chess tap.png");//("/*图片文件名*/")//人数选择
    TapBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,TapBackGroundSurface);//将画笔放在窗口上
    TapBackGroundRect.x=0;//同下
    TapBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    TapBackGroundRect.w=1000;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    TapBackGroundRect.h=900;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    RuleBackGroundSurface= IMG_Load("rule.png");//("/*图片文件名*/")//规则界面
    RuleBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,RuleBackGroundSurface);//将画笔放在窗口上
    RuleBackGroundRect.x=0;//同下
    RuleBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    RuleBackGroundRect.w=1000;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    RuleBackGroundRect.h=900;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    BulBackGroundSurface= IMG_Load("blue.png");//("/*图片文件名*/")//规则界面
    BulBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,BulBackGroundSurface);//将画笔放在窗口上
    BulBackGroundRect.x=0;//同下
    BulBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    BulBackGroundRect.w=50;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    BulBackGroundRect.h=50;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    YellowBackGroundSurface= IMG_Load("yellow.png");//("/*图片文件名*/")//规则界面
    YellowBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,YellowBackGroundSurface);//将画笔放在窗口上
    YellowBackGroundRect.x=0;//同下
    YellowBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    YellowBackGroundRect.w=50;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    YellowBackGroundRect.h=50;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    GreenBackGroundSurface= IMG_Load("yellow.png");//("/*图片文件名*/")//规则界面
    GreenBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,GreenBackGroundSurface);//将画笔放在窗口上
    GreenBackGroundRect.x=0;//同下
    GreenBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    GreenBackGroundRect.w=50;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    GreenBackGroundRect.h=50;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    RedBackGroundSurface= IMG_Load("yellow.png");//("/*图片文件名*/")//规则界面
    RedBackGroundTexture= SDL_CreateTextureFromSurface(Renderer,RedBackGroundSurface);//将画笔放在窗口上
    RedBackGroundRect.x=0;//同下
    RedBackGroundRect.y=0;//加载图片起始点是以窗口x=0，y=0为坐标系开始的
    RedBackGroundRect.w=50;//数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    RedBackGroundRect.h=50;//数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高
}
void start()//开始游戏
{
    printf("Game Start!\n");//测试*/
    SDL_RenderClear(Renderer);//清空画笔
    SDL_RenderCopy(Renderer,TypeBackGroundTexture,NULL,&TypeBackGroundRect);//复制画笔
    SDL_RenderPresent(Renderer);//刷新画笔 打印模式界面
    type_chose();
    //return;
//other code
}
void rule()//游戏规则
{
    printf("This is rule!");
    SDL_RenderClear(Renderer);//清空画笔
    SDL_RenderCopy(Renderer,RuleBackGroundTexture,NULL,&RuleBackGroundRect);//复制画笔
    SDL_RenderPresent(Renderer);//刷新画笔
    SDL_Event RuleEvent;//主事件
    while(SDL_WaitEvent(&RuleEvent)) {
        switch (RuleEvent.type)//事件类型
        {
            case SDL_MOUSEBUTTONUP://鼠标互动 松开触发
                //function
                if (RuleEvent.button.x > 894 && RuleEvent.button.x < 996 && RuleEvent.button.y > 8 &&
                    RuleEvent.button.y < 97)//根据点击位置触发指令
                {
                    SDL_RenderClear(Renderer);//清空画笔
                    SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect);//复制画笔
                    SDL_RenderPresent(Renderer);//刷新画笔
                    goto t;
                    // 返回上一层
                }
                break;
            default:
                break;
        }
    }
    t: return;
}
void quit()//退出游戏
{
    SDL_FreeSurface(MainBackGroundSurface);
    SDL_FreeSurface(TypeBackGroundSurface);
    SDL_FreeSurface(NumBackGroundSurface);
    SDL_FreeSurface(TapBackGroundSurface);
    //SDL_FreeSurface(PlayBackGroundSurface);

    SDL_DestroyTexture(MainBackGroundTexture);
    SDL_DestroyTexture(TypeBackGroundTexture);
    SDL_DestroyTexture(NumBackGroundTexture);
    SDL_DestroyTexture(TapBackGroundTexture);
    //SDL_DestroyTexture(PlayBackGroundTexture);

    //TTF_CloseFont(ScoreFont);

    SDL_DestroyRenderer(Renderer);//清除画笔
    SDL_DestroyWindow(Window);//清除窗口
    printf("Game Over!\n");
    SDL_Quit();//return 0
}
void type_chose()//游戏模式
{
    printf("Chose Type!\n");//测试*/
    SDL_Event TypeEvent;//主事件
    while(SDL_WaitEvent(&TypeEvent)) {
        switch (TypeEvent.type)//事件类型
        {
            case SDL_MOUSEBUTTONUP://鼠标互动 松开触发
                //function
                if (TypeEvent.button.x > 334 && TypeEvent.button.x < 626 && TypeEvent.button.y > 394 &&
                    TypeEvent.button.y < 486)//根据点击位置触发指令
                {
                    printf("Chose Num!\n");//测试*/
                    p_c_fight();
                    //人机
                }
                if (TypeEvent.button.x > 321 && TypeEvent.button.x < 627 && TypeEvent.button.y > 606 &&
                    TypeEvent.button.y < 700)//根据点击位置触发指令
                {
                    printf("Chose Num!\n");//测试*/
                    p_p_fight();
                    //人人
                }
                if (TypeEvent.button.x > 894 && TypeEvent.button.x < 996 && TypeEvent.button.y > 8 &&
                    TypeEvent.button.y < 97)//根据点击位置触发指令
                {
                    SDL_RenderClear(Renderer);//清空画笔
                    SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect);//复制画笔
                    SDL_RenderPresent(Renderer);//刷新画笔
                    goto t;
                    // 返回上一层
                }
                break;
            default:
                break;
        }
    }
    t: return;
}
void p_c_fight()//人机大战
{
    SDL_RenderClear(Renderer);//清空画笔
    SDL_RenderCopy(Renderer,NumBackGroundTexture,NULL,&NumBackGroundRect);//复制画笔
    SDL_RenderPresent(Renderer);//刷新画笔 打印人数界面
    SDL_Event p_c_fightEvent;//主事件
    while(SDL_WaitEvent(&p_c_fightEvent)) {
        switch (p_c_fightEvent.type)//事件类型
        {
            case SDL_MOUSEBUTTONUP://鼠标互动 松开触发
                //function
                if (p_c_fightEvent.button.x > 435 && p_c_fightEvent.button.x < 517 && p_c_fightEvent.button.y > 301 &&
                        p_c_fightEvent.button.y < 385)//根据点击位置触发指令
                {
                    printf("2");
                    begin2();//2
                }
                if (p_c_fightEvent.button.x > 428 && p_c_fightEvent.button.x < 519 && p_c_fightEvent.button.y > 474 &&
                        p_c_fightEvent.button.y < 556)//根据点击位置触发指令
                {
                    printf("3");
                    begin3();//3
                }
                if (p_c_fightEvent.button.x > 423 && p_c_fightEvent.button.x < 536 && p_c_fightEvent.button.y > 668 &&
                    p_c_fightEvent.button.y < 764)//根据点击位置触发指令
                {
                    printf("4");
                    begin4();//4
                }
                if (p_c_fightEvent.button.x > 894 && p_c_fightEvent.button.x < 996 && p_c_fightEvent.button.y > 8 &&
                        p_c_fightEvent.button.y < 97)//根据点击位置触发指令
                {
                    SDL_RenderClear(Renderer);//清空画笔
                    SDL_RenderCopy(Renderer, TypeBackGroundTexture, NULL, &TypeBackGroundRect);//复制画笔
                    SDL_RenderPresent(Renderer);//刷新画笔
                    goto t;
                    // 返回上一层
                }
                printf("(%d,%d)\n",p_c_fightEvent.button.x,p_c_fightEvent.button.y);//在命令行打印鼠标坐标
                break;
            default:
                break;
        }
    }
    t:return;
}
void p_p_fight()//人人对战
{
    SDL_RenderClear(Renderer);//清空画笔
    SDL_RenderCopy(Renderer,NumBackGroundTexture,NULL,&NumBackGroundRect);//复制画笔
    SDL_RenderPresent(Renderer);//刷新画笔 打印人数界面
    SDL_Event p_pEvent;//主事件
    while(SDL_WaitEvent(&p_pEvent)) {
        switch (p_pEvent.type)//事件类型
        {
            case SDL_MOUSEBUTTONUP://鼠标互动 松开触发
                //function
                if (p_pEvent.button.x > 435 && p_pEvent.button.x < 517 && p_pEvent.button.y > 301 &&
                        p_pEvent.button.y < 385)//根据点击位置触发指令
                {
                    printf("2");
                    begin2();//2
                }
                if (p_pEvent.button.x > 428 && p_pEvent.button.x < 519 && p_pEvent.button.y > 474 &&
                        p_pEvent.button.y < 556)//根据点击位置触发指令
                {
                    printf("3");
                    begin3();//3
                }
                if (p_pEvent.button.x > 423 && p_pEvent.button.x < 536 && p_pEvent.button.y > 668 &&
                        p_pEvent.button.y < 764)//根据点击位置触发指令
                {
                    printf("4");
                    begin4();//4
                }
                if (p_pEvent.button.x > 894 && p_pEvent.button.x < 996 && p_pEvent.button.y > 8 &&
                        p_pEvent.button.y < 97)//根据点击位置触发指令
                {
                    SDL_RenderClear(Renderer);//清空画笔
                    SDL_RenderCopy(Renderer, TypeBackGroundTexture, NULL, &TypeBackGroundRect);//复制画笔
                    SDL_RenderPresent(Renderer);//刷新画笔
                    goto t;
                    // 返回上一层
                }
                break;
            default:
                break;
        }
    }
    t:return;
}
void begin2()//进入棋盘 二人
{
    SDL_RenderClear(Renderer);//清空画笔
    SDL_RenderCopy(Renderer,TapBackGroundTexture,NULL,&TapBackGroundRect);//复制画笔
    SDL_RenderPresent(Renderer);//刷新画笔 打印人数界面
    SDL_Event begin2Event;//主事件
    while(SDL_WaitEvent(&begin2Event)) {
        switch (begin2Event.type)//事件类型
        {
            case SDL_MOUSEBUTTONUP://鼠标互动 松开触发
                //function
                if (begin2Event.button.x > 960 && begin2Event.button.x < 1000 && begin2Event.button.y > 0 &&
                        begin2Event.button.y < 50)//根据点击位置触发指令
                {
                    SDL_RenderClear(Renderer);//清空画笔
                    SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect);//复制画笔
                    SDL_RenderPresent(Renderer);//刷新画笔
                    goto t;
                    // 返回上一层
                }
                printf("(%d,%d)\n", begin2Event.button.x, begin2Event.button.y);//在命令行打印鼠标坐标
                break;
            default:
                break;
        }
    }
    t:return;
}
void begin3()//进入棋盘 三人
{
    SDL_RenderClear(Renderer);//清空画笔
    SDL_RenderCopy(Renderer,TapBackGroundTexture,NULL,&TapBackGroundRect);//复制画笔
    SDL_RenderPresent(Renderer);//刷新画笔 打印人数界面
    SDL_Event begin3Event;//主事件
    while(SDL_WaitEvent(&begin3Event)) {
        switch (begin3Event.type)//事件类型
        {
            case SDL_MOUSEBUTTONUP://鼠标互动 松开触发
                //function
                if (begin3Event.button.x > 960 && begin3Event.button.x < 1000 && begin3Event.button.y > 0 &&
                    begin3Event.button.y < 50)//根据点击位置触发指令
                {
                    SDL_RenderClear(Renderer);//清空画笔
                    SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect);//复制画笔
                    SDL_RenderPresent(Renderer);//刷新画笔
                    goto t;
                    // 返回上一层
                }
                printf("(%d,%d)\n", begin3Event.button.x, begin3Event.button.y);//在命令行打印鼠标坐标
                break;
            default:
                break;
        }
    }
    t:return;
}
void begin4()//进入棋盘 四人
{
    SDL_RenderClear(Renderer);//清空画笔
    SDL_RenderCopy(Renderer,TapBackGroundTexture,NULL,&TapBackGroundRect);//复制画笔
    SDL_RenderPresent(Renderer);//刷新画笔 打印人数界面
    SDL_Event begin4Event;//主事件
    while(SDL_WaitEvent(&begin4Event)) {
        switch (begin4Event.type)//事件类型
        {
            case SDL_MOUSEBUTTONUP://鼠标互动 松开触发
                //function
                if (begin4Event.button.x > 960 && begin4Event.button.x < 1000 && begin4Event.button.y > 0 &&
                    begin4Event.button.y < 50)//根据点击位置触发指令
                {
                    SDL_RenderClear(Renderer);//清空画笔
                    SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect);//复制画笔
                    SDL_RenderPresent(Renderer);//刷新画笔
                    goto t;
                    // 返回上一层
                }
                printf("(%d,%d)\n", begin4Event.button.x, begin4Event.button.y);//在命令行打印鼠标坐标
                break;
            default:
                break;
        }
    }
    t:return;
}
//函数区

//棋子大小 50x50