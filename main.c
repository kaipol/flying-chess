#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//头文件

//声明图形库区
SDL_Window *Window = NULL;     //声明窗口
SDL_Renderer *Renderer = NULL; //画笔or渲染器

SDL_Surface *MainBackGroundSurface = NULL; //图形区域
SDL_Texture *MainBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect MainBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *TypeBackGroundSurface = NULL; //图形区域
SDL_Texture *TypeBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect TypeBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *NumBackGroundSurface = NULL; //图形区域
SDL_Texture *NumBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect NumBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *TapBackGroundSurface = NULL; //图形区域
SDL_Texture *TapBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect TapBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *RuleBackGroundSurface = NULL; //图形区域
SDL_Texture *RuleBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect RuleBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *BulBackGroundSurface = NULL; //图形区域
SDL_Texture *BulBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect BulBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *YellowBackGroundSurface = NULL; //图形区域
SDL_Texture *YellowBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect YellowBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *GreenBackGroundSurface = NULL; //图形区域
SDL_Texture *GreenBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect GreenBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *RedBackGroundSurface = NULL; //图形区域
SDL_Texture *RedBackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect RedBackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *pp2BackGroundSurface = NULL; //图形区域
SDL_Texture *pp2BackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect pp2BackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *pp3BackGroundSurface = NULL; //图形区域
SDL_Texture *pp3BackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect pp3BackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *pp4BackGroundSurface = NULL; //图形区域
SDL_Texture *pp4BackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect pp4BackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *pc2BackGroundSurface = NULL; //图形区域
SDL_Texture *pc2BackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect pc2BackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *pc3BackGroundSurface = NULL; //图形区域
SDL_Texture *pc3BackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect pc3BackGroundRect;               //显示画笔图形信息，如长宽高

SDL_Surface *pc4BackGroundSurface = NULL; //图形区域
SDL_Texture *pc4BackGroundTexture = NULL; //画笔识别图形区域
SDL_Rect pc4BackGroundRect;               //显示画笔图形信息，如长宽高
//声明图形库区

//声明字体
/*
TTF_Font *nameFront=NULL;
SDL_Surface *nameSurface=NULL;
SDL_Texture *nameTexture=NULL;
SDL_Rect nameRect;
SDL_Color FrontColor={255,255,255,255};
 */
//声明字体

//函数声明
void load();                    //加载图片
void start();                   //开始游戏
void rule();                    //游戏规则
void quit();                    //退出游戏
void type_chose();              //游戏模式选择
void p_c_fight();               //人机对战
void p_p_fight();               //人人对战
void begin2();                  //进入棋盘 二人
void begin3();                  //进入棋盘 三人
void begin4();                  //进入棋盘 四人
void load_chess();              //初始棋子位置
void load_greenchess(int, int); //加载棋子
void load_yellowchess(int, int);
void load_redchess(int, int);
void load_bluechess(int, int);
void pp2(); // 2玩家名称
void pp3(); // 3玩家名称
void pp4(); // 4玩家名称
void pc2(); // 2电脑名称
void pc3(); // 3电脑名称
void pc4(); // 4电脑名称
int dice_point();
void startchess(char *); //起步
void reload(char *, int, int);
void moveyellow();
void movegreen();
void movered();
void moveblue();
int endgame();
//函数声明
struct yellow
{
    int yellow1[2]; // 0为X坐标，1为y坐标
    int yellow2[2];
    int yellow3[2];
    int yellow4[2];

} yellowplayer{{85, 68}, {163, 68}, {85, 145}, {163, 145}};
struct blue
{
    int blue1[2];
    int blue2[2];
    int blue3[2];
    int blue4[2];

} blueplayer{{800, 75}, {800, 145}, {875, 75}, {875, 145}};
struct red
{
    int red1[2];
    int red2[2];
    int red3[2];
    int red4[2];

} redplayer{{795, 710}, {795, 790}, {880, 710}, {880, 790}};
struct green
{
    int green1[2];
    int green2[2];
    int green3[2];
    int green4[2];

} greenplayer{{85, 710}, {85, 790}, {165, 710}, {165, 790}};
struct EndChess
{
    int endyellowchess;
    int endbluechess;
    int endredchess;
    int endgreenchess;
} EndChessNum{0, 0, 0, 0};
//主函数
#undef main
int main(int argc, char *argv[]) //主函数
{
    SDL_Init(SDL_INIT_VIDEO);                                                                                               //初始化库
    Window = SDL_CreateWindow("Flying chess", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1200, 900, SDL_WINDOW_SHOWN); //弹出窗口
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);                                                    //允许随意移动鼠标
    SDL_Event MainEvent;                                                                                                    //主事件
    load();                                                                                                                 //加载图片
    SDL_RenderClear(Renderer);                                                                                              //清空画笔
    SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect);                                             //复制画笔
    SDL_RenderPresent(Renderer);                                                                                            //刷新画笔
    while (SDL_WaitEvent(&MainEvent))
    {
        switch (MainEvent.type) //事件类型
        {
        case SDL_QUIT: //退出游戏
            quit();
        case SDL_MOUSEBUTTONUP: //鼠标互动 松开触发
            // function
            if (MainEvent.button.x > 400 && MainEvent.button.x < 570 && MainEvent.button.y > 300 && MainEvent.button.y < 470) //根据点击位置触发指令
            {
                start(); //游戏开始
            }
            if (MainEvent.button.x > 317 && MainEvent.button.x < 660 && MainEvent.button.y > 523 && MainEvent.button.y < 618) //根据点击位置触发指令
            {
                printf("This is rule!");
                rule();
                //弹出规则
            }
            if (MainEvent.button.x > 318 && MainEvent.button.x < 641 && MainEvent.button.y > 710 && MainEvent.button.y < 800) //根据点击位置触发指令
            {
                quit(); //游戏结束
            }
            printf("(%d,%d)\n", MainEvent.button.x, MainEvent.button.y); //在命令行打印鼠标坐标
            break;
        default:
            break;
        }
    }

    quit(); //退出游戏
}
//主函数

//函数区
void load() //加载图片
{
    MainBackGroundSurface = IMG_Load("menu.png");                                          //("/*图片文件名*/")//菜单界面
    MainBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, MainBackGroundSurface); //将画笔放在窗口上
    MainBackGroundRect.x = 0;                                                              //同下
    MainBackGroundRect.y = 0;                                                              //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    MainBackGroundRect.w = 1000;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    MainBackGroundRect.h = 900;                                                            //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    TypeBackGroundSurface = IMG_Load("type_chose.png");                                    //("/*图片文件名*/")//游戏模式选择
    TypeBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, TypeBackGroundSurface); //将画笔放在窗口上
    TypeBackGroundRect.x = 0;                                                              //同下
    TypeBackGroundRect.y = 0;                                                              //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    TypeBackGroundRect.w = 1000;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    TypeBackGroundRect.h = 900;                                                            //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    NumBackGroundSurface = IMG_Load("num_chose.png");                                    //("/*图片文件名*/")//人数选择
    NumBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, NumBackGroundSurface); //将画笔放在窗口上
    NumBackGroundRect.x = 0;                                                             //同下
    NumBackGroundRect.y = 0;                                                             //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    NumBackGroundRect.w = 1000;                                                          //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    NumBackGroundRect.h = 900;                                                           //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    TapBackGroundSurface = IMG_Load("chess tap.png");                                    //("/*图片文件名*/")//人数选择
    TapBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, TapBackGroundSurface); //将画笔放在窗口上
    TapBackGroundRect.x = 0;                                                             //同下
    TapBackGroundRect.y = 0;                                                             //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    TapBackGroundRect.w = 1000;                                                          //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    TapBackGroundRect.h = 900;                                                           //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    RuleBackGroundSurface = IMG_Load("rule.png");                                          //("/*图片文件名*/")//规则界面
    RuleBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, RuleBackGroundSurface); //将画笔放在窗口上
    RuleBackGroundRect.x = 0;                                                              //同下
    RuleBackGroundRect.y = 0;                                                              //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    RuleBackGroundRect.w = 1000;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    RuleBackGroundRect.h = 900;                                                            //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    BulBackGroundSurface = IMG_Load("blue.png");                                         //("/*图片文件名*/")//规则界面
    BulBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, BulBackGroundSurface); //将画笔放在窗口上
    BulBackGroundRect.x = 0;                                                             //同下
    BulBackGroundRect.y = 0;                                                             //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    BulBackGroundRect.w = 50;                                                            //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    BulBackGroundRect.h = 50;                                                            //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    YellowBackGroundSurface = IMG_Load("yellow.png");                                          //("/*图片文件名*/")//规则界面
    YellowBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, YellowBackGroundSurface); //将画笔放在窗口上
    YellowBackGroundRect.x = 0;                                                                //同下
    YellowBackGroundRect.y = 0;                                                                //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    YellowBackGroundRect.w = 50;                                                               //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    YellowBackGroundRect.h = 50;                                                               //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    GreenBackGroundSurface = IMG_Load("green.png");                                          //("/*图片文件名*/")//规则界面
    GreenBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, GreenBackGroundSurface); //将画笔放在窗口上
    GreenBackGroundRect.x = 0;                                                               //同下
    GreenBackGroundRect.y = 0;                                                               //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    GreenBackGroundRect.w = 50;                                                              //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    GreenBackGroundRect.h = 50;                                                              //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    RedBackGroundSurface = IMG_Load("red.png");                                          //("/*图片文件名*/")//规则界面
    RedBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, RedBackGroundSurface); //将画笔放在窗口上
    RedBackGroundRect.x = 0;                                                             //同下
    RedBackGroundRect.y = 0;                                                             //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    RedBackGroundRect.w = 50;                                                            //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    RedBackGroundRect.h = 50;                                                            //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pp2BackGroundSurface = IMG_Load("pp2.png");                                          //("/*图片文件名*/")//规则界面
    pp2BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pp2BackGroundSurface); //将画笔放在窗口上
    pp2BackGroundRect.x = 155;                                                           //同下
    pp2BackGroundRect.y = 230;                                                           //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pp2BackGroundRect.w = 690;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pp2BackGroundRect.h = 530;                                                           //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pp3BackGroundSurface = IMG_Load("pp3.png");                                          //("/*图片文件名*/")//规则界面
    pp3BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pp3BackGroundSurface); //将画笔放在窗口上
    pp3BackGroundRect.x = 155;                                                           //同下
    pp3BackGroundRect.y = 230;                                                           //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pp3BackGroundRect.w = 690;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pp3BackGroundRect.h = 530;                                                           //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pp4BackGroundSurface = IMG_Load("pp4.png");                                          //("/*图片文件名*/")//规则界面
    pp4BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pp4BackGroundSurface); //将画笔放在窗口上
    pp4BackGroundRect.x = 155;                                                           //同下
    pp4BackGroundRect.y = 230;                                                           //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pp4BackGroundRect.w = 690;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pp4BackGroundRect.h = 530;                                                           //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pc2BackGroundSurface = IMG_Load("pc2.png");                                          //("/*图片文件名*/")//规则界面
    pc2BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pc2BackGroundSurface); //将画笔放在窗口上
    pc2BackGroundRect.x = 155;                                                           //同下
    pc2BackGroundRect.y = 230;                                                           //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pc2BackGroundRect.w = 690;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pc2BackGroundRect.h = 530;                                                           //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pc3BackGroundSurface = IMG_Load("pc3.png");                                          //("/*图片文件名*/")//规则界面
    pc3BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pc3BackGroundSurface); //将画笔放在窗口上
    pc3BackGroundRect.x = 155;                                                           //同下
    pc3BackGroundRect.y = 230;                                                           //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pc3BackGroundRect.w = 690;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pc3BackGroundRect.h = 530;                                                           //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pc4BackGroundSurface = IMG_Load("pc4.png");                                          //("/*图片文件名*/")//规则界面
    pc4BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pc4BackGroundSurface); //将画笔放在窗口上
    pc4BackGroundRect.x = 155;                                                           //同下
    pc4BackGroundRect.y = 230;                                                           //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pc4BackGroundRect.w = 690;                                                           //数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pc4BackGroundRect.h = 530;                                                           //数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高
}
void load_yellowchess(int x, int y)
{
    YellowBackGroundRect.x = x;                                                     //同下
    YellowBackGroundRect.y = y;                                                     //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    SDL_RenderCopy(Renderer, YellowBackGroundTexture, NULL, &YellowBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                                    //刷新画笔 打印人数界面
}
void load_bluechess(int x, int y)
{
    BulBackGroundRect.x = x;                                                  //同下
    BulBackGroundRect.y = y;                                                  //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    SDL_RenderCopy(Renderer, BulBackGroundTexture, NULL, &BulBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔 打印人数界面
}
void load_greenchess(int x, int y)
{

    GreenBackGroundRect.x = x;                                                    //同下
    GreenBackGroundRect.y = y;                                                    //加载图片起始点是以窗口x=0，y=0为坐标系开始的
    SDL_RenderCopy(Renderer, GreenBackGroundTexture, NULL, &GreenBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                                  //刷新画笔 打印人数界面
}
void load_redchess(int x, int y)
{
    RedBackGroundRect.x = x;
    RedBackGroundRect.y = y;
    SDL_RenderCopy(Renderer, RedBackGroundTexture, NULL, &RedBackGroundRect);
    SDL_RenderPresent(Renderer);
}
void start() //开始游戏
{
    printf("Game Start!\n");                                                    //测试*/
    SDL_RenderClear(Renderer);                                                  //清空画笔
    SDL_RenderCopy(Renderer, TypeBackGroundTexture, NULL, &TypeBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                                //刷新画笔 打印模式界面
    type_chose();
    // return;
    // other code
}
void rule() //游戏规则
{
    printf("This is rule!");
    SDL_RenderClear(Renderer);                                                  //清空画笔
    SDL_RenderCopy(Renderer, RuleBackGroundTexture, NULL, &RuleBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                                //刷新画笔
    SDL_Event RuleEvent;                                                        //主事件
    while (SDL_WaitEvent(&RuleEvent))
    {
        switch (RuleEvent.type) //事件类型
        {
        case SDL_MOUSEBUTTONUP: //鼠标互动 松开触发
            // function
            if (RuleEvent.button.x > 894 && RuleEvent.button.x < 996 && RuleEvent.button.y > 8 &&
                RuleEvent.button.y < 97) //根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                  //清空画笔
                SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect); //复制画笔
                SDL_RenderPresent(Renderer);                                                //刷新画笔
                goto t;
                // 返回上一层
            }
            break;
        default:
            break;
        }
    }
t:
    return;
}
void quit() //退出游戏
{
    SDL_FreeSurface(MainBackGroundSurface);
    SDL_FreeSurface(TypeBackGroundSurface);
    SDL_FreeSurface(NumBackGroundSurface);
    SDL_FreeSurface(TapBackGroundSurface);
    SDL_FreeSurface(YellowBackGroundSurface);
    SDL_FreeSurface(BulBackGroundSurface);
    SDL_FreeSurface(GreenBackGroundSurface);
    SDL_FreeSurface(RedBackGroundSurface);
    // SDL_FreeSurface(PlayBackGroundSurface);

    SDL_DestroyTexture(MainBackGroundTexture);
    SDL_DestroyTexture(TypeBackGroundTexture);
    SDL_DestroyTexture(NumBackGroundTexture);
    SDL_DestroyTexture(TapBackGroundTexture);
    SDL_DestroyTexture(YellowBackGroundTexture);
    SDL_DestroyTexture(BulBackGroundTexture);
    SDL_DestroyTexture(GreenBackGroundTexture);
    SDL_DestroyTexture(RedBackGroundTexture);
    // SDL_DestroyTexture(PlayBackGroundTexture);

    // TTF_CloseFont(ScoreFont);

    SDL_DestroyRenderer(Renderer); //清除画笔
    SDL_DestroyWindow(Window);     //清除窗口
    printf("Game Over!\n");
    SDL_Quit(); // return 0
}
void type_chose() //游戏模式
{
    printf("Chose Type!\n"); //测试*/
    SDL_Event TypeEvent;     //主事件
    while (SDL_WaitEvent(&TypeEvent))
    {
        switch (TypeEvent.type) //事件类型
        {
        case SDL_MOUSEBUTTONUP: //鼠标互动 松开触发
            // function
            if (TypeEvent.button.x > 334 && TypeEvent.button.x < 626 && TypeEvent.button.y > 394 &&
                TypeEvent.button.y < 486) //根据点击位置触发指令
            {
                printf("Chose Num!\n"); //测试*/
                p_c_fight();
                //人机
            }
            if (TypeEvent.button.x > 321 && TypeEvent.button.x < 627 && TypeEvent.button.y > 606 &&
                TypeEvent.button.y < 700) //根据点击位置触发指令
            {
                printf("Chose Num!\n"); //测试*/
                p_p_fight();
                //人人
            }
            if (TypeEvent.button.x > 894 && TypeEvent.button.x < 996 && TypeEvent.button.y > 8 &&
                TypeEvent.button.y < 97) //根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                  //清空画笔
                SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect); //复制画笔
                SDL_RenderPresent(Renderer);                                                //刷新画笔
                goto t;
                // 返回上一层
            }
            break;
        default:
            break;
        }
    }
t:
    return;
}
void p_c_fight() //人机大战
{
    SDL_RenderClear(Renderer);                                                //清空画笔
    SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔 打印人数界面
    SDL_Event p_c_fightEvent;                                                 //主事件
    while (SDL_WaitEvent(&p_c_fightEvent))
    {
        switch (p_c_fightEvent.type) //事件类型
        {
        case SDL_MOUSEBUTTONUP: //鼠标互动 松开触发
            // function
            if (p_c_fightEvent.button.x > 435 && p_c_fightEvent.button.x < 517 && p_c_fightEvent.button.y > 301 &&
                p_c_fightEvent.button.y < 385) //根据点击位置触发指令
            {
                printf("2");
                pc2(); // 2
            }
            if (p_c_fightEvent.button.x > 428 && p_c_fightEvent.button.x < 519 && p_c_fightEvent.button.y > 474 &&
                p_c_fightEvent.button.y < 556) //根据点击位置触发指令
            {
                printf("3");
                pc3(); // 3
            }
            if (p_c_fightEvent.button.x > 423 && p_c_fightEvent.button.x < 536 && p_c_fightEvent.button.y > 668 &&
                p_c_fightEvent.button.y < 764) //根据点击位置触发指令
            {
                printf("4");
                pc4(); // 4
            }
            if (p_c_fightEvent.button.x > 894 && p_c_fightEvent.button.x < 996 && p_c_fightEvent.button.y > 8 &&
                p_c_fightEvent.button.y < 97) //根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                  //清空画笔
                SDL_RenderCopy(Renderer, TypeBackGroundTexture, NULL, &TypeBackGroundRect); //复制画笔
                SDL_RenderPresent(Renderer);                                                //刷新画笔
                goto t;
                // 返回上一层
            }
            printf("(%d,%d)\n", p_c_fightEvent.button.x, p_c_fightEvent.button.y); //在命令行打印鼠标坐标
            break;
        default:
            break;
        }
    }
t:
    return;
}
void p_p_fight() //人人对战
{
    SDL_RenderClear(Renderer);                                                //清空画笔
    SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔 打印人数界面
    SDL_Event p_pEvent;                                                       //主事件
    while (SDL_WaitEvent(&p_pEvent))
    {
        switch (p_pEvent.type) //事件类型
        {
        case SDL_MOUSEBUTTONUP: //鼠标互动 松开触发
            // function
            if (p_pEvent.button.x > 435 && p_pEvent.button.x < 517 && p_pEvent.button.y > 301 &&
                p_pEvent.button.y < 385) //根据点击位置触发指令
            {
                printf("2");
                pp2(); // 2
            }
            if (p_pEvent.button.x > 428 && p_pEvent.button.x < 519 && p_pEvent.button.y > 474 &&
                p_pEvent.button.y < 556) //根据点击位置触发指令
            {
                printf("3");
                pp3(); // 3
            }
            if (p_pEvent.button.x > 423 && p_pEvent.button.x < 536 && p_pEvent.button.y > 668 &&
                p_pEvent.button.y < 764) //根据点击位置触发指令
            {
                printf("4");
                pp4(); // 4
            }
            if (p_pEvent.button.x > 894 && p_pEvent.button.x < 996 && p_pEvent.button.y > 8 &&
                p_pEvent.button.y < 97) //根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                  //清空画笔
                SDL_RenderCopy(Renderer, TypeBackGroundTexture, NULL, &TypeBackGroundRect); //复制画笔
                SDL_RenderPresent(Renderer);                                                //刷新画笔
                goto t;
                // 返回上一层
            }
            break;
        default:
            break;
        }
    }
t:
    return;
}
void begin2() //进入棋盘 二人
{
    SDL_RenderClear(Renderer);                                                //清空画笔
    SDL_RenderCopy(Renderer, TapBackGroundTexture, NULL, &TapBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔 打印人数界面
    load_chess();
    SDL_Event begin2Event; //主事件
    while (SDL_WaitEvent(&begin2Event))
    {
        switch (begin2Event.type) //事件类型
        {
        case SDL_MOUSEBUTTONUP: //鼠标互动 松开触发
            // function
            if (begin2Event.button.x > 960 && begin2Event.button.x < 1000 && begin2Event.button.y > 0 &&
                begin2Event.button.y < 50) //根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                //清空画笔
                SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); //复制画笔
                SDL_RenderPresent(Renderer);                                              //刷新画笔
                goto t;
                // 返回上一层
            }
            printf("(%d,%d)\n", begin2Event.button.x, begin2Event.button.y); //在命令行打印鼠标坐标
            break;
        default:
            break;
        }
        switch (endgame())
        {
        case 1:
            quit();
            break;
        case 2:
            quit();
            break;
        default:
            break;
        }
    }
t:
    return;
}
void begin3() //进入棋盘 三人
{
    SDL_RenderClear(Renderer);                                                //清空画笔
    SDL_RenderCopy(Renderer, TapBackGroundTexture, NULL, &TapBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔 打印人数界面
    load_chess();
    SDL_Event begin3Event; //主事件
    while (SDL_WaitEvent(&begin3Event))
    {
        switch (begin3Event.type) //事件类型
        {
        case SDL_MOUSEBUTTONUP: //鼠标互动 松开触发
            // function
            if (begin3Event.button.x > 960 && begin3Event.button.x < 1000 && begin3Event.button.y > 0 &&
                begin3Event.button.y < 50) //根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                //清空画笔
                SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); //复制画笔
                SDL_RenderPresent(Renderer);                                              //刷新画笔
                goto t;
                // 返回上一层
            }
            printf("(%d,%d)\n", begin3Event.button.x, begin3Event.button.y); //在命令行打印鼠标坐标
            break;
        default:
            break;
        }
        switch (endgame())
        {
        case 1:
            quit();
            break;
        case 2:
            quit();
            break;
        case 3:
            quit();
            break;
        default:
            break;
        }
    }
t:
    return;
}
void begin4() //进入棋盘 四人
{
    SDL_RenderClear(Renderer);                                                //清空画笔
    SDL_RenderCopy(Renderer, TapBackGroundTexture, NULL, &TapBackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔 打印人数界面
    load_chess();
    SDL_Event begin4Event; //主事件
    while (SDL_WaitEvent(&begin4Event))
    {
        switch (begin4Event.type) //事件类型
        {
        case SDL_MOUSEBUTTONUP: //鼠标互动 松开触发
            // function
            if (begin4Event.button.x > 960 && begin4Event.button.x < 1000 && begin4Event.button.y > 0 &&
                begin4Event.button.y < 50) //根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                //清空画笔
                SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); //复制画笔
                SDL_RenderPresent(Renderer);                                              //刷新画笔
                goto t;
                // 返回上一层
            }
            printf("(%d,%d)\n", begin4Event.button.x, begin4Event.button.y); //在命令行打印鼠标坐标
            break;
        default:
            break;
        }
        switch (endgame())
        {
        case 1:
            quit();
            break;
        case 2:
            quit();
            break;
        case 3:
            quit();
            break;
        case 4:
            quit();
            break;
        default:
            break;
        }
    }
t:
    return;
}
void load_chess() //加载棋子
{
    //黄色
    load_yellowchess(yellowplayer.yellow1[0], yellowplayer.yellow1[1]);
    load_yellowchess(yellowplayer.yellow2[0], yellowplayer.yellow2[1]);
    load_yellowchess(yellowplayer.yellow3[0], yellowplayer.yellow3[1]);
    load_yellowchess(yellowplayer.yellow4[0], yellowplayer.yellow4[1]);
    //黄色

    //蓝色

    load_bluechess(blueplayer.blue1[0], blueplayer.blue1[1]);
    load_bluechess(blueplayer.blue2[0], blueplayer.blue2[1]);
    load_bluechess(blueplayer.blue3[0], blueplayer.blue3[1]);
    load_bluechess(blueplayer.blue4[0], blueplayer.blue4[1]);
    //蓝色

    //绿色
    load_greenchess(greenplayer.green1[0], greenplayer.green1[1]);
    load_greenchess(greenplayer.green2[0], greenplayer.green2[1]);
    load_greenchess(greenplayer.green3[0], greenplayer.green3[1]);
    load_greenchess(greenplayer.green4[0], greenplayer.green4[1]);
    //绿色

    //红色
    load_redchess(redplayer.red1[0], redplayer.red1[1]);
    load_redchess(redplayer.red2[0], redplayer.red2[1]);
    load_redchess(redplayer.red3[0], redplayer.red3[1]);
    load_redchess(redplayer.red4[0], redplayer.red4[1]);
    //红色
}
void reload(const char name[10], int x, int y) //改变棋子位置并重新加载
{
    if (strcmp(name, "yellow1" == 0))
    {
        yellowplayer.yellow1[0] = x;
        yellowplayer.yellow1[1] = y;
    }
    else if (strcmp(name, "yellow2") == 0)
    {
        yellowplayer.yellow2[0] = x;
        yellowplayer.yellow2[1] = y;
    }
    else if (strcmp(name, "yellow3") == 0)
    {
        yellowplayer.yellow3[0] = x;
        yellowplayer.yellow3[1] = y;
    }
    else if (strcmp(name, "yellow4") == 0)
    {
        yellowplayer.yellow4[0] = x;
        yellowplayer.yellow4[1] = y;
    }
    else if (strcmp(name, "blue1") == 0)
    {
        blueplayer.blue1[0] = x;
        blueplayer.blue1[1] = y;
    }
    else if (strcmp(name, "blue2") == 0)
    {
        blueplayer.blue2[0] = x;
        blueplayer.blue2[1] = y;
    }
    else if (strcmp(name, "blue3") == 0)
    {
        blueplayer.blue3[0] = x;
        blueplayer.blue3[1] = y;
    }
    else if (!strcmp(name, "blue4"))
    {
        blueplayer.blue4[0] = x;
        blueplayer.blue4[1] = y;
    }
    else if (!strcmp(name, "green1"))
    {
        greenplayer.green1[0] = x;
        greenplayer.green1[1] = y;
    }
    else if (!strcmp(name, "green2"))
    {
        greenplayer.green2[0] = x;
        greenplayer.green2[1] = y;
    }
    else if (!strcmp(name, "green3"))
    {
        greenplayer.green3[0] = x;
        greenplayer.green3[1] = y;
    }
    else if (!strcmp(name, "green4"))
    {
        greenplayer.green4[0] = x;
        greenplayer.green4[1] = y;
    }
    else if (strcmp(name, "red1") == 0)
    {
        redplayer.red1[0] = x;
        redplayer.red1[1] = y;
    }
    else if (!strcmp(name, "red2"))
    {
        redplayer.red2[0] = x;
        redplayer.red2[1] = y;
    }
    else if (!strcmp(name, "red3"))
    {
        redplayer.red3[0] = x;
        redplayer.red3[1] = y;
    }
    else if (!strcmp(name, "red4"))
    {
        redplayer.red4[0] = x;
        redplayer.red4[1] = y;
    }
    load_chess();
}
void pp2() //人名2
{
    SDL_RenderCopy(Renderer, pp2BackGroundTexture, NULL, &pp2BackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔
    SDL_Event pp2Event;                                                       //主事件
    while (SDL_WaitEvent(&pp2Event))
    {
        switch (pp2Event.type) //事件类型
        {
        case SDL_QUIT: //退出游戏
            quit();
        case SDL_KEYDOWN:
            switch (pp2Event.key.keysym.sym)
            case SDLK_SPACE:
                goto t;
        default:
            break;
        }
    }
t:
    begin2();
}
void pp3() //人名3
{
    SDL_RenderCopy(Renderer, pp3BackGroundTexture, NULL, &pp3BackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔
    SDL_Event pp3Event;                                                       //主事件
    while (SDL_WaitEvent(&pp3Event))
    {
        switch (pp3Event.type) //事件类型
        {
        case SDL_QUIT: //退出游戏
            quit();
        case SDL_KEYDOWN:
            switch (pp3Event.key.keysym.sym)
            case SDLK_SPACE:
                goto t;
        default:
            break;
        }
    }
t:
    begin3();
}
void pp4() //人名4
{
    SDL_RenderCopy(Renderer, pp4BackGroundTexture, NULL, &pp4BackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔
    SDL_Event pp4Event;                                                       //主事件
    while (SDL_WaitEvent(&pp4Event))
    {
        switch (pp4Event.type) //事件类型
        {
        case SDL_QUIT: //退出游戏
            quit();
        case SDL_KEYDOWN:
            switch (pp4Event.key.keysym.sym)
            case SDLK_SPACE:
                goto t;
        default:
            break;
        }
    }
t:
    begin4();
}
void pc2() //电脑名2
{
    SDL_RenderCopy(Renderer, pc2BackGroundTexture, NULL, &pc2BackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔
    SDL_Event pc2Event;                                                       //主事件
    while (SDL_WaitEvent(&pc2Event))
    {
        switch (pc2Event.type) //事件类型
        {
        case SDL_QUIT: //退出游戏
            quit();
        case SDL_KEYDOWN:
            switch (pc2Event.key.keysym.sym)
            case SDLK_SPACE:
                goto t;
        default:
            break;
        }
    }
t:
    begin2();
}
void pc3() //电脑名3
{
    SDL_RenderCopy(Renderer, pc3BackGroundTexture, NULL, &pc3BackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔
    SDL_Event pc3Event;                                                       //主事件
    while (SDL_WaitEvent(&pc3Event))
    {
        switch (pc3Event.type) //事件类型
        {
        case SDL_QUIT: //退出游戏
            quit();
        case SDL_KEYDOWN:
            switch (pc3Event.key.keysym.sym)
            case SDLK_SPACE:
                goto t;
        default:
            break;
        }
    }
t:
    begin3();
}
void pc4() //电脑名4
{
    SDL_RenderCopy(Renderer, pc4BackGroundTexture, NULL, &pc4BackGroundRect); //复制画笔
    SDL_RenderPresent(Renderer);                                              //刷新画笔
    SDL_Event pc4Event;                                                       //主事件
    while (SDL_WaitEvent(&pc4Event))
    {
        switch (pc4Event.type) //事件类型
        {
        case SDL_QUIT: //退出游戏
            quit();
        case SDL_KEYDOWN:
            switch (pc4Event.key.keysym.sym)
            case SDLK_SPACE:
                goto t;
        default:
            break;
        }
    }
t:
    begin4();
}
int dice_point() //骰子
{
    srand((unsigned)time(NULL));
    return rand() % 6 + 1;
}
void startchess(char name[10])
{
}
void moveyellow()
{
    int result = dice_point();
    switch (SDL_Keysym)
    {
        case
    }
}
int endgame()
{
    if (EndChessNum.endyellowchess == 4)
        return 1; // 1为黄方胜
    else if (EndChessNum.endbluechess == 4)
        return 2; // 2为蓝方胜
    else if (EndChessNum.endgreenchess == 4)
        return 3; // 3为绿方胜
    else if (EndChessNum.endredchess == 4)
        return 4; // 4为红方胜
}

        //函数区

        //棋子大小 50x50