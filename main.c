#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// 头文件

// 声明图形库区
SDL_Window *Window = NULL;     // 声明窗口
SDL_Renderer *Renderer = NULL; // 画笔or渲染器

SDL_Surface *MainBackGroundSurface = NULL; // 图形区域
SDL_Texture *MainBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect MainBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *TypeBackGroundSurface = NULL; // 图形区域
SDL_Texture *TypeBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect TypeBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *NumBackGroundSurface = NULL; // 图形区域
SDL_Texture *NumBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect NumBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *TapBackGroundSurface = NULL; // 图形区域
SDL_Texture *TapBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect TapBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *RuleBackGroundSurface = NULL; // 图形区域
SDL_Texture *RuleBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect RuleBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *BulBackGroundSurface = NULL; // 图形区域
SDL_Texture *BulBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect BulBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *YellowBackGroundSurface = NULL; // 图形区域
SDL_Texture *YellowBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect YellowBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *GreenBackGroundSurface = NULL; // 图形区域
SDL_Texture *GreenBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect GreenBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *RedBackGroundSurface = NULL; // 图形区域
SDL_Texture *RedBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect RedBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *pp2BackGroundSurface = NULL; // 图形区域
SDL_Texture *pp2BackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect pp2BackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *pp3BackGroundSurface = NULL; // 图形区域
SDL_Texture *pp3BackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect pp3BackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *pp4BackGroundSurface = NULL; // 图形区域
SDL_Texture *pp4BackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect pp4BackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *pc2BackGroundSurface = NULL; // 图形区域
SDL_Texture *pc2BackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect pc2BackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *pc3BackGroundSurface = NULL; // 图形区域
SDL_Texture *pc3BackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect pc3BackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *pc4BackGroundSurface = NULL; // 图形区域
SDL_Texture *pc4BackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect pc4BackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *oneBackGroundSurface = NULL; // 图形区域
SDL_Texture *oneBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect oneBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *twoBackGroundSurface = NULL; // 图形区域
SDL_Texture *twoBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect twoBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *threeBackGroundSurface = NULL; // 图形区域
SDL_Texture *threeBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect threeBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *fourBackGroundSurface = NULL; // 图形区域
SDL_Texture *fourBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect fourBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *fiveBackGroundSurface = NULL; // 图形区域
SDL_Texture *fiveBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect fiveBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *sixBackGroundSurface = NULL; // 图形区域
SDL_Texture *sixBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect sixBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *yellowplayBackGroundSurface = NULL; // 图形区域
SDL_Texture *yellowplayBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect yellowplayBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *greenplayBackGroundSurface = NULL; // 图形区域
SDL_Texture *greenplayBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect greenplayBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *blueplayBackGroundSurface = NULL; // 图形区域
SDL_Texture *blueplayBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect blueplayBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *redplayBackGroundSurface = NULL; // 图形区域
SDL_Texture *redplayBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect redplayBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *nowBackGroundSurface = NULL; // 图形区域
SDL_Texture *nowBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect nowBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *ywinBackGroundSurface = NULL; // 图形区域
SDL_Texture *ywinBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect ywinBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *bwinBackGroundSurface = NULL; // 图形区域
SDL_Texture *bwinBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect bwinBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *gwinBackGroundSurface = NULL; // 图形区域
SDL_Texture *gwinBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect gwinBackGroundRect;               // 显示画笔图形信息，如长宽高

SDL_Surface *rwinBackGroundSurface = NULL; // 图形区域
SDL_Texture *rwinBackGroundTexture = NULL; // 画笔识别图形区域
SDL_Rect rwinBackGroundRect;               // 显示画笔图形信息，如长宽高
// 声明图形库区
// 声明图形库区
// 声明字体
/*
TTF_Font *nameFront=NULL;
SDL_Surface *nameSurface=NULL;
SDL_Texture *nameTexture=NULL;
SDL_Rect nameRect;
SDL_Color FrontColor={255,255,255,255};
 */
// 声明字体

// 函数声明
void load();                    // 加载图片
void start();                   // 开始游戏
void rule();                    // 游戏规则
void quit();                    // 退出游戏
void type_chose();              // 游戏模式选择
void p_c_fight();               // 人机对战
void p_p_fight();               // 人人对战
void begin2(int);               // 进入棋盘 二人
void begin3();                  // 进入棋盘 三人
void begin4();                  // 进入棋盘 四人
void load_chess();              // 初始棋子位置
void load_greenchess(int, int); // 加载棋子
void load_yellowchess(int, int);
void load_redchess(int, int);
void load_bluechess(int, int);
void fly(int, const char *, int, int);
void firsttap(int, int, int);
void pp2(); // 2玩家名称
void pp3(); // 3玩家名称
void pp4(); // 4玩家名称
void pc2(); // 2电脑名称
void pc3(); // 3电脑名称
void pc4(); // 4电脑名称
int Dice_point(const char *);
void Load_dice(int, const char *);
void reload(const char *, int, int);
int CmpName(const char *);
void TurnChess(int, int);
void MoveChess(const char *, int, int, int);
void JudgeChess(int *, int *, int);
void EndJump(const char *, int *, int *, int);
int EndGame();
void originorder();
void cross();
void jump(char *);
void attack(char *, int, int); // 击飞棋子
void end();
void over();
// 函数声明
struct ChessPointNow
{
    int yellow1[2]; // 0为X坐标，1为y坐标
    int yellow2[2];
    int yellow3[2];
    int yellow4[2];

    int blue1[2];
    int blue2[2];
    int blue3[2];
    int blue4[2];

    int red1[2];
    int red2[2];
    int red3[2];
    int red4[2];

    int green1[2];
    int green2[2];
    int green3[2];
    int green4[2];

} ChessPointNow = {{85, 68}, {163, 68}, {85, 145}, {163, 145}, {800, 75}, {800, 145}, {875, 75}, {875, 145}, {795, 710}, {795, 790}, {880, 710}, {880, 790}, {85, 710}, {85, 790}, {165, 710}, {165, 790}};
struct StartedChess
{
    int YellowEndChess[4]; // 每个棋子是否出发状态判断
    int BlueEndChess[4];
    int RedEndChess[4];
    int GreenEndChess[4];
} StartedChess = {{0}, {0}, {0}, {0}};

struct EndChess
{
    int endyellowchess;    // 终点棋子个数判断
    int YellowEndChess[4]; // 进入最终跑道的状态
    int endbluechess;
    int BlueEndChess[4];
    int endredchess;
    int RedEndChess[4];
    int endgreenchess;
    int GreenEndChess[4];
} EndChessNum = {0, {0}, 0, {0}, 0, {0}, 0, {0}};
const struct YellowJumpPonint
{
    int LeftYellowPoint[5][2];   // 飞行点之前
    int TopYellowPoint[8][2];    // 飞行点之后
    int RightYellowPoint[1][2];  // 进终点
    int FlyingYellowPoint[1][2]; // 飞行点
    int EndYellowPoint[1][2];    // 终点
    int StartYellowPoint[1][2]   // 起飞点
} YellowPoint = {{{156, 280}, {315, 186}, {421, 92}, {633, 92}, {686, 280}},
                 {{845, 327}, {845, 515}, {686, 562}, {633, 750}, {421, 750}, {315, 656}, {156, 562}, {103, 424}},
                 {103, 421},
                 {686, 280},
                 {421, 421},
                 {20, 250}};
const struct BlueJumpPoint
{
    int LeftBluePoint[5][2];   // 飞行点之前
    int TopBluePoint[8][2];    // 飞行点之后
    int RightBluePoint[1][2];  // 进终点
    int FlyingBluePoint[1][2]; // 飞行点
    int EndBluePoint[1][2];    // 终点
    int StartBluePoint[1][2]   // 起飞点
} BluePoint = {{{633, 139}, {739, 280}, {845, 374}, {845, 562}, {633, 609}},
               {{580, 750}, {368, 750}, {315, 609}, {103, 562}, {103, 374}, {209, 280}, {315, 139}, {474, 92}},
               {{474, 92}},
               {{633, 609}},
               {{474, 374}},
               {{682, 16}}};
const struct RedJumpPoint
{
    int LeftRedPoint[5][2];   // 飞行点之前
    int TopRedPoint[8][2];    // 飞行点之后
    int RightRedPoint[1][2];  // 进终点
    int FlyingRedPoint[1][2]; // 飞行点
    int EndRedPoint[1][2];    // 终点
    int StartRedPoint[1][2]   // 起飞点
} RedPoint = {{{792, 562}, {632, 656}, {527, 750}, {315, 750}, {262, 562}},
              {{103, 515}, {103, 327}, {262, 280}, {315, 92}, {527, 92}, {633, 186}, {792, 280}, {845, 421}},
              {{845, 420}},
              {{262, 562}},
              {{527, 421}},
              {{929, 612}}};
const struct GreenJumpPoint
{
    int LeftGreenPoint[5][2];   // 飞行点之前
    int TopGreenPoint[8][2];    // 飞行点之后
    int RightGreenPoint[1][2];  // 进终点
    int FlyingGreenPoint[1][2]; // 飞行点
    int EndGreenPoint[1][2];    // 终点
    int StartYellowPoint[1][2]  // 起飞点
} GreenPoint = {{{315, 703}, {209, 562}, {103, 468}, {103, 280}, {315, 233}},
                {{368, 92}, {580, 92}, {633, 233}, {845, 280}, {845, 468}, {739, 562}, {633, 703}, {474, 750}},
                {{474, 750}},
                {{315, 233}},
                {{474, 468}},
                {{276, 837}}};
// 主函数
#undef main
int main(int argc, char *argv[]) // 主函数
{
    SDL_Init(SDL_INIT_VIDEO);                                                                                               // 初始化库
    Window = SDL_CreateWindow("Flying chess", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1200, 900, SDL_WINDOW_SHOWN); // 弹出窗口
    Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);                                                    // 允许随意移动鼠标
    SDL_Event MainEvent;                                                                                                    // 主事件
    load();                                                                                                                 // 加载图片
    SDL_RenderClear(Renderer);                                                                                              // 清空画笔
    SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect);                                             // 复制画笔
    SDL_RenderPresent(Renderer);                                                                                            // 刷新画笔
    while (SDL_WaitEvent(&MainEvent))
    {
        switch (MainEvent.type) // 事件类型
        {
        case SDL_QUIT: // 退出游戏
            quit();
        case SDL_MOUSEBUTTONUP: // 鼠标互动 松开触发
            // function
            if (MainEvent.button.x > 400 && MainEvent.button.x < 570 && MainEvent.button.y > 300 && MainEvent.button.y < 470) // 根据点击位置触发指令
            {
                start(); // 游戏开始
            }
            if (MainEvent.button.x > 317 && MainEvent.button.x < 660 && MainEvent.button.y > 523 && MainEvent.button.y < 618) // 根据点击位置触发指令
            {
                printf("This is rule!");
                rule();
                // 弹出规则
            }
            if (MainEvent.button.x > 318 && MainEvent.button.x < 641 && MainEvent.button.y > 710 && MainEvent.button.y < 800) // 根据点击位置触发指令
            {
                quit(); // 游戏结束
            }
            printf("(%d,%d)\n", MainEvent.button.x, MainEvent.button.y); // 在命令行打印鼠标坐标
            break;
        default:
            break;
        }
    }
    quit(); // 退出游戏
}
// 主函数

// 函数区
void load() // 加载图片
{
    MainBackGroundSurface = IMG_Load("menu.png");                                          //("/*图片文件名*/")//菜单界面
    MainBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, MainBackGroundSurface); // 将画笔放在窗口上
    MainBackGroundRect.x = 0;                                                              // 同下
    MainBackGroundRect.y = 0;                                                              // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    MainBackGroundRect.w = 1000;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    MainBackGroundRect.h = 900;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    TypeBackGroundSurface = IMG_Load("type_chose.png");                                    //("/*图片文件名*/")//游戏模式选择
    TypeBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, TypeBackGroundSurface); // 将画笔放在窗口上
    TypeBackGroundRect.x = 0;                                                              // 同下
    TypeBackGroundRect.y = 0;                                                              // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    TypeBackGroundRect.w = 1000;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    TypeBackGroundRect.h = 900;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    NumBackGroundSurface = IMG_Load("num_chose.png");                                    //("/*图片文件名*/")//人数选择
    NumBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, NumBackGroundSurface); // 将画笔放在窗口上
    NumBackGroundRect.x = 0;                                                             // 同下
    NumBackGroundRect.y = 0;                                                             // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    NumBackGroundRect.w = 1000;                                                          // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    NumBackGroundRect.h = 900;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    TapBackGroundSurface = IMG_Load("chess tap.png");                                    //("/*图片文件名*/")//人数选择
    TapBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, TapBackGroundSurface); // 将画笔放在窗口上
    TapBackGroundRect.x = 0;                                                             // 同下
    TapBackGroundRect.y = 0;                                                             // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    TapBackGroundRect.w = 1000;                                                          // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    TapBackGroundRect.h = 900;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    RuleBackGroundSurface = IMG_Load("rule.png");                                          //("/*图片文件名*/")//规则界面
    RuleBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, RuleBackGroundSurface); // 将画笔放在窗口上
    RuleBackGroundRect.x = 0;                                                              // 同下
    RuleBackGroundRect.y = 0;                                                              // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    RuleBackGroundRect.w = 1000;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    RuleBackGroundRect.h = 900;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    BulBackGroundSurface = IMG_Load("blue.png");                                         //("/*图片文件名*/")//规则界面
    BulBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, BulBackGroundSurface); // 将画笔放在窗口上
    BulBackGroundRect.x = 0;                                                             // 同下
    BulBackGroundRect.y = 0;                                                             // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    BulBackGroundRect.w = 50;                                                            // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    BulBackGroundRect.h = 50;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    YellowBackGroundSurface = IMG_Load("yellow.png");                                          //("/*图片文件名*/")//规则界面
    YellowBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, YellowBackGroundSurface); // 将画笔放在窗口上
    YellowBackGroundRect.x = 0;                                                                // 同下
    YellowBackGroundRect.y = 0;                                                                // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    YellowBackGroundRect.w = 50;                                                               // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    YellowBackGroundRect.h = 50;                                                               // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    GreenBackGroundSurface = IMG_Load("green.png");                                          //("/*图片文件名*/")//规则界面
    GreenBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, GreenBackGroundSurface); // 将画笔放在窗口上
    GreenBackGroundRect.x = 0;                                                               // 同下
    GreenBackGroundRect.y = 0;                                                               // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    GreenBackGroundRect.w = 50;                                                              // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    GreenBackGroundRect.h = 50;                                                              // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    RedBackGroundSurface = IMG_Load("red.png");                                          //("/*图片文件名*/")//规则界面
    RedBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, RedBackGroundSurface); // 将画笔放在窗口上
    RedBackGroundRect.x = 0;                                                             // 同下
    RedBackGroundRect.y = 0;                                                             // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    RedBackGroundRect.w = 50;                                                            // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    RedBackGroundRect.h = 50;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pp2BackGroundSurface = IMG_Load("pp2.png");                                          //("/*图片文件名*/")//规则界面
    pp2BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pp2BackGroundSurface); // 将画笔放在窗口上
    pp2BackGroundRect.x = 155;                                                           // 同下
    pp2BackGroundRect.y = 230;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pp2BackGroundRect.w = 690;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pp2BackGroundRect.h = 530;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pp3BackGroundSurface = IMG_Load("pp3.png");                                          //("/*图片文件名*/")//规则界面
    pp3BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pp3BackGroundSurface); // 将画笔放在窗口上
    pp3BackGroundRect.x = 155;                                                           // 同下
    pp3BackGroundRect.y = 230;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pp3BackGroundRect.w = 690;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pp3BackGroundRect.h = 530;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pp4BackGroundSurface = IMG_Load("pp4.png");                                          //("/*图片文件名*/")//规则界面
    pp4BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pp4BackGroundSurface); // 将画笔放在窗口上
    pp4BackGroundRect.x = 155;                                                           // 同下
    pp4BackGroundRect.y = 230;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pp4BackGroundRect.w = 690;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pp4BackGroundRect.h = 530;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pc2BackGroundSurface = IMG_Load("pc2.png");                                          //("/*图片文件名*/")//规则界面
    pc2BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pc2BackGroundSurface); // 将画笔放在窗口上
    pc2BackGroundRect.x = 155;                                                           // 同下
    pc2BackGroundRect.y = 230;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pc2BackGroundRect.w = 690;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pc2BackGroundRect.h = 530;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pc3BackGroundSurface = IMG_Load("pc3.png");                                          //("/*图片文件名*/")//规则界面
    pc3BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pc3BackGroundSurface); // 将画笔放在窗口上
    pc3BackGroundRect.x = 155;                                                           // 同下
    pc3BackGroundRect.y = 230;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pc3BackGroundRect.w = 690;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pc3BackGroundRect.h = 530;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    pc4BackGroundSurface = IMG_Load("pc4.png");                                          //("/*图片文件名*/")//规则界面
    pc4BackGroundTexture = SDL_CreateTextureFromSurface(Renderer, pc4BackGroundSurface); // 将画笔放在窗口上
    pc4BackGroundRect.x = 155;                                                           // 同下
    pc4BackGroundRect.y = 230;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    pc4BackGroundRect.w = 690;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    pc4BackGroundRect.h = 530;

    oneBackGroundSurface = IMG_Load("one.png");                                          //("/*图片文件名*/")//规则界面
    oneBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, oneBackGroundSurface); // 将画笔放在窗口上
    oneBackGroundRect.x = 1000;                                                          // 同下
    oneBackGroundRect.y = 400;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    oneBackGroundRect.w = 200;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    oneBackGroundRect.h = 200;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    twoBackGroundSurface = IMG_Load("two.png");                                          //("/*图片文件名*/")//规则界面
    twoBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, twoBackGroundSurface); // 将画笔放在窗口上
    twoBackGroundRect.x = 1000;                                                          // 同下
    twoBackGroundRect.y = 400;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    twoBackGroundRect.w = 200;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    twoBackGroundRect.h = 200;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    threeBackGroundSurface = IMG_Load("three.png");                                          //("/*图片文件名*/")//规则界面
    threeBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, threeBackGroundSurface); // 将画笔放在窗口上
    threeBackGroundRect.x = 1000;                                                            // 同下
    threeBackGroundRect.y = 400;                                                             // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    threeBackGroundRect.w = 200;                                                             // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    threeBackGroundRect.h = 200;                                                             // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    fourBackGroundSurface = IMG_Load("four.png");                                          //("/*图片文件名*/")//规则界面
    fourBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, fourBackGroundSurface); // 将画笔放在窗口上
    fourBackGroundRect.x = 1000;                                                           // 同下
    fourBackGroundRect.y = 400;                                                            // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    fourBackGroundRect.w = 200;                                                            // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    fourBackGroundRect.h = 200;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    fiveBackGroundSurface = IMG_Load("five.png");                                          //("/*图片文件名*/")//规则界面
    fiveBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, fiveBackGroundSurface); // 将画笔放在窗口上
    fiveBackGroundRect.x = 1000;                                                           // 同下
    fiveBackGroundRect.y = 400;                                                            // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    fiveBackGroundRect.w = 200;                                                            // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    fiveBackGroundRect.h = 200;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    sixBackGroundSurface = IMG_Load("six.png");                                          //("/*图片文件名*/")//规则界面
    sixBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, sixBackGroundSurface); // 将画笔放在窗口上
    sixBackGroundRect.x = 1000;                                                          // 同下
    sixBackGroundRect.y = 400;                                                           // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    sixBackGroundRect.w = 200;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    sixBackGroundRect.h = 200;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    nowBackGroundSurface = IMG_Load("now.png");                                          //("/*图片文件名*/")//规则界面
    nowBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, nowBackGroundSurface); // 将画笔放在窗口上
    nowBackGroundRect.x = 1000;                                                          // 同下
    nowBackGroundRect.y = 0;                                                             // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    nowBackGroundRect.w = 200;                                                           // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    nowBackGroundRect.h = 200;                                                           // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    yellowplayBackGroundSurface = IMG_Load("yellowplay.png");                                          //("/*图片文件名*/")//规则界面
    yellowplayBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, yellowplayBackGroundSurface); // 将画笔放在窗口上
    yellowplayBackGroundRect.x = 1000;                                                                 // 同下
    yellowplayBackGroundRect.y = 200;                                                                  // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    yellowplayBackGroundRect.w = 200;                                                                  // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    yellowplayBackGroundRect.h = 200;                                                                  // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    blueplayBackGroundSurface = IMG_Load("blueplay.png");                                          //("/*图片文件名*/")//规则界面
    blueplayBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, blueplayBackGroundSurface); // 将画笔放在窗口上
    blueplayBackGroundRect.x = 1000;                                                               // 同下
    blueplayBackGroundRect.y = 200;                                                                // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    blueplayBackGroundRect.w = 200;                                                                // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    blueplayBackGroundRect.h = 200;                                                                // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    greenplayBackGroundSurface = IMG_Load("greenplay.png");                                          //("/*图片文件名*/")//规则界面
    greenplayBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, greenplayBackGroundSurface); // 将画笔放在窗口上
    greenplayBackGroundRect.x = 1000;                                                                // 同下
    greenplayBackGroundRect.y = 200;                                                                 // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    greenplayBackGroundRect.w = 200;                                                                 // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    greenplayBackGroundRect.h = 200;                                                                 // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    redplayBackGroundSurface = IMG_Load("redplay.png");                                          //("/*图片文件名*/")//规则界面
    redplayBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, redplayBackGroundSurface); // 将画笔放在窗口上
    redplayBackGroundRect.x = 1000;                                                              // 同下
    redplayBackGroundRect.y = 200;                                                               // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    redplayBackGroundRect.w = 200;                                                               // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    redplayBackGroundRect.h = 200;                                                               // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    ywinBackGroundSurface = IMG_Load("ywin.png");                                          //("/*图片文件名*/")//规则界面
    ywinBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, ywinBackGroundSurface); // 将画笔放在窗口上
    ywinBackGroundRect.x = 155;                                                            // 同下
    ywinBackGroundRect.y = 230;                                                            // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    ywinBackGroundRect.w = 690;                                                            // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    ywinBackGroundRect.h = 530;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    bwinBackGroundSurface = IMG_Load("bwin.png");                                          //("/*图片文件名*/")//规则界面
    bwinBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, bwinBackGroundSurface); // 将画笔放在窗口上
    bwinBackGroundRect.x = 155;                                                            // 同下
    bwinBackGroundRect.y = 230;                                                            // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    bwinBackGroundRect.w = 690;                                                            // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    bwinBackGroundRect.h = 530;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    gwinBackGroundSurface = IMG_Load("gwin.png");                                          //("/*图片文件名*/")//规则界面
    gwinBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, gwinBackGroundSurface); // 将画笔放在窗口上
    gwinBackGroundRect.x = 155;                                                            // 同下
    gwinBackGroundRect.y = 230;                                                            // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    gwinBackGroundRect.w = 690;                                                            // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    gwinBackGroundRect.h = 530;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高

    rwinBackGroundSurface = IMG_Load("rwin.png");                                          //("/*图片文件名*/")//规则界面
    rwinBackGroundTexture = SDL_CreateTextureFromSurface(Renderer, rwinBackGroundSurface); // 将画笔放在窗口上
    rwinBackGroundRect.x = 155;                                                            // 同下
    rwinBackGroundRect.y = 230;                                                            // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    rwinBackGroundRect.w = 690;                                                            // 数值自行改变    /*MainBackGroundSurface->w;//使用原图宽w*/  //定义宽
    rwinBackGroundRect.h = 530;                                                            // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高
} // 数值自行改变    /*MainBackGroundSurface->h;//使用原图高h*/  //定义高
void load_yellowchess(int x, int y)
{
    YellowBackGroundRect.x = x;                                                     // 同下
    YellowBackGroundRect.y = y;                                                     // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    SDL_RenderCopy(Renderer, YellowBackGroundTexture, NULL, &YellowBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                                    // 刷新画笔 打印人数界面
}
void load_bluechess(int x, int y)
{
    BulBackGroundRect.x = x;                                                  // 同下
    BulBackGroundRect.y = y;                                                  // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    SDL_RenderCopy(Renderer, BulBackGroundTexture, NULL, &BulBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔 打印人数界面
}
void load_greenchess(int x, int y)
{

    GreenBackGroundRect.x = x;                                                    // 同下
    GreenBackGroundRect.y = y;                                                    // 加载图片起始点是以窗口x=0，y=0为坐标系开始的
    SDL_RenderCopy(Renderer, GreenBackGroundTexture, NULL, &GreenBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                                  // 刷新画笔 打印人数界面
}
void load_redchess(int x, int y)
{
    RedBackGroundRect.x = x;
    RedBackGroundRect.y = y;
    SDL_RenderCopy(Renderer, RedBackGroundTexture, NULL, &RedBackGroundRect);
    SDL_RenderPresent(Renderer);
}
void start() // 开始游戏
{
    printf("Game Start!\n");                                                    // 测试*/
    SDL_RenderClear(Renderer);                                                  // 清空画笔
    SDL_RenderCopy(Renderer, TypeBackGroundTexture, NULL, &TypeBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                                // 刷新画笔 打印模式界面
    type_chose();
    // return;
    // other code
}
void rule() // 游戏规则
{
    printf("This is rule!");
    SDL_RenderClear(Renderer);                                                  // 清空画笔
    SDL_RenderCopy(Renderer, RuleBackGroundTexture, NULL, &RuleBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                                // 刷新画笔
    SDL_Event RuleEvent;                                                        // 主事件
    while (SDL_WaitEvent(&RuleEvent))
    {
        switch (RuleEvent.type) // 事件类型
        {
        case SDL_MOUSEBUTTONUP: // 鼠标互动 松开触发
            // function
            if (RuleEvent.button.x > 894 && RuleEvent.button.x < 996 && RuleEvent.button.y > 8 &&
                RuleEvent.button.y < 97) // 根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                  // 清空画笔
                SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect); // 复制画笔
                SDL_RenderPresent(Renderer);                                                // 刷新画笔
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
void quit() // 退出游戏
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

    SDL_DestroyRenderer(Renderer); // 清除画笔
    SDL_DestroyWindow(Window);     // 清除窗口
    printf("Game Over!\n");
    SDL_Quit(); // return 0
}
void type_chose() // 游戏模式
{
    printf("Chose Type!\n"); // 测试*/
    SDL_Event TypeEvent;     // 主事件
    while (SDL_WaitEvent(&TypeEvent))
    {
        switch (TypeEvent.type) // 事件类型
        {
        case SDL_MOUSEBUTTONUP: // 鼠标互动 松开触发
            // function
            if (TypeEvent.button.x > 334 && TypeEvent.button.x < 626 && TypeEvent.button.y > 394 &&
                TypeEvent.button.y < 486) // 根据点击位置触发指令
            {
                printf("Chose Num!\n"); // 测试*/
                p_c_fight();
                // 人机
            }
            if (TypeEvent.button.x > 321 && TypeEvent.button.x < 627 && TypeEvent.button.y > 606 &&
                TypeEvent.button.y < 700) // 根据点击位置触发指令
            {
                printf("Chose Num!\n"); // 测试*/
                p_p_fight();
                // 人人
            }
            if (TypeEvent.button.x > 894 && TypeEvent.button.x < 996 && TypeEvent.button.y > 8 &&
                TypeEvent.button.y < 97) // 根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                  // 清空画笔
                SDL_RenderCopy(Renderer, MainBackGroundTexture, NULL, &MainBackGroundRect); // 复制画笔
                SDL_RenderPresent(Renderer);                                                // 刷新画笔
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
void p_c_fight() // 人机大战人数选择
{
    SDL_RenderClear(Renderer);                                                // 清空画笔
    SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔 打印人数界面
    SDL_Event p_c_fightEvent;                                                 // 主事件
    while (SDL_WaitEvent(&p_c_fightEvent))
    {
        switch (p_c_fightEvent.type) // 事件类型
        {
        case SDL_MOUSEBUTTONUP: // 鼠标互动 松开触发
            // function
            if (p_c_fightEvent.button.x > 435 && p_c_fightEvent.button.x < 517 && p_c_fightEvent.button.y > 301 &&
                p_c_fightEvent.button.y < 385) // 根据点击位置触发指令
            {
                printf("2");
                pc2(); // 2
            }
            if (p_c_fightEvent.button.x > 428 && p_c_fightEvent.button.x < 519 && p_c_fightEvent.button.y > 474 &&
                p_c_fightEvent.button.y < 556) // 根据点击位置触发指令
            {
                printf("3");
                pc3(); // 3
            }
            if (p_c_fightEvent.button.x > 423 && p_c_fightEvent.button.x < 536 && p_c_fightEvent.button.y > 668 &&
                p_c_fightEvent.button.y < 764) // 根据点击位置触发指令
            {
                printf("4");
                pc4(); // 4
            }
            if (p_c_fightEvent.button.x > 894 && p_c_fightEvent.button.x < 996 && p_c_fightEvent.button.y > 8 &&
                p_c_fightEvent.button.y < 97) // 根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                  // 清空画笔
                SDL_RenderCopy(Renderer, TypeBackGroundTexture, NULL, &TypeBackGroundRect); // 复制画笔
                SDL_RenderPresent(Renderer);                                                // 刷新画笔
                goto t;
                // 返回上一层
            }
            printf("(%d,%d)\n", p_c_fightEvent.button.x, p_c_fightEvent.button.y); // 在命令行打印鼠标坐标
            break;
        default:
            break;
        }
    }
t:
    return;
}
void p_p_fight() // 人人对战人数选择
{
    SDL_RenderClear(Renderer);                                                // 清空画笔
    SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔 打印人数界面
    SDL_Event p_pEvent;                                                       // 主事件
    while (SDL_WaitEvent(&p_pEvent))
    {
        switch (p_pEvent.type) // 事件类型
        {
        case SDL_MOUSEBUTTONUP: // 鼠标互动 松开触发
            // function
            if (p_pEvent.button.x > 435 && p_pEvent.button.x < 517 && p_pEvent.button.y > 301 &&
                p_pEvent.button.y < 385) // 根据点击位置触发指令
            {
                printf("2");
                pp2(); // 2
            }
            if (p_pEvent.button.x > 428 && p_pEvent.button.x < 519 && p_pEvent.button.y > 474 &&
                p_pEvent.button.y < 556) // 根据点击位置触发指令
            {
                printf("3");
                pp3(); // 3
            }
            if (p_pEvent.button.x > 423 && p_pEvent.button.x < 536 && p_pEvent.button.y > 668 &&
                p_pEvent.button.y < 764) // 根据点击位置触发指令
            {
                printf("4");
                pp4(); // 4
            }
            if (p_pEvent.button.x > 894 && p_pEvent.button.x < 996 && p_pEvent.button.y > 8 &&
                p_pEvent.button.y < 97) // 根据点击位置触发指令
            {
                SDL_RenderClear(Renderer);                                                  // 清空画笔
                SDL_RenderCopy(Renderer, TypeBackGroundTexture, NULL, &TypeBackGroundRect); // 复制画笔
                SDL_RenderPresent(Renderer);                                                // 刷新画笔
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
void begin2(int number) // 进入棋盘 二人
{
    SDL_RenderClear(Renderer);                                                // 清空画笔
    SDL_RenderCopy(Renderer, TapBackGroundTexture, NULL, &TapBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);
    originorder(); // 刷新画笔 打印人数界面
    load_chess();
    int count = 0;
    SDL_Event begin2Event; // 主事件
    while (SDL_WaitEvent(&begin2Event))
    {
        switch (begin2Event.type) // 事件类型
        {
        case SDL_MOUSEBUTTONUP: // 鼠标互动 松开触发
            // function
            if (begin2Event.button.x > 960 && begin2Event.button.x < 1000 && begin2Event.button.y > 0 &&
                begin2Event.button.y < 50) // 根据点击位置触发指令
            {
                quit(); // SDL_RenderClear(Renderer);                                                // 清空画笔
                // SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); // 复制画笔
                // SDL_RenderPresent(Renderer);                                              // 刷新画笔
                // goto t;
                //  返回上一层
            }
            else if (begin2Event.button.x > 1000 && begin2Event.button.x < 1200 && begin2Event.button.y > 400 &&
                     begin2Event.button.y < 600)
            {
                if (count == 1)
                {
                    int result = Dice_point("yellow");
                    MoveChess("yellow", 1, 2, result);
                    count = 0;
                }
                else
                {
                    int result = Dice_point("blue");
                    MoveChess("blue", 2, 2, result);
                    count = 1;
                }
            }
            printf("(%d,%d)\n", begin2Event.button.x, begin2Event.button.y); // 在命令行打印鼠标坐标
            break;
        default:
            break;
        }
    }
t:
    return;
}
void begin3() // 进入棋盘 三人
{
    SDL_RenderClear(Renderer);                                                // 清空画笔
    SDL_RenderCopy(Renderer, TapBackGroundTexture, NULL, &TapBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);
    originorder(); // 刷新画笔 打印人数界面
    load_chess();
    int dice_result = 0;
    int count = 0;
    SDL_Event begin3Event; // 主事件
    while (SDL_WaitEvent(&begin3Event))
    {
        switch (begin3Event.type) // 事件类型
        {
        case SDL_MOUSEBUTTONUP: // 鼠标互动 松开触发
            // function
            if (begin3Event.button.x > 960 && begin3Event.button.x < 1000 && begin3Event.button.y > 0 &&
                begin3Event.button.y < 50) // 根据点击位置触发指令
            {
                quit();
                // SDL_RenderClear(Renderer);                                                // 清空画笔
                // SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); // 复制画笔
                // SDL_RenderPresent(Renderer);                                              // 刷新画笔
                // goto t;
                //  返回上一层
            }
            else if (begin3Event.button.x > 1000 && begin3Event.button.x < 1200 && begin3Event.button.y > 400 &&
                     begin3Event.button.y < 600)
            {
                if (count == 1)
                {
                    int result = Dice_point("green");
                    MoveChess("green", 3, 3, result);
                    count = 2;
                }
                else if (count == 0)
                {
                    int result = Dice_point("blue");
                    MoveChess("blue", 2, 3, result);
                    count = 1;
                }
                else if (count == 2)
                {
                    int result = Dice_point("yellow");
                    MoveChess("yellow", 1, 3, result);
                    count = 0;
                }
            }
            printf("(%d,%d)\n", begin3Event.button.x, begin3Event.button.y); // 在命令行打印鼠标坐标
            break;
        default:
            break;
        }
    }
t:
    return;
}
void begin4() // 进入棋盘 四人
{
    SDL_RenderClear(Renderer);                                                // 清空画笔
    SDL_RenderCopy(Renderer, TapBackGroundTexture, NULL, &TapBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);
    originorder(); // 刷新画笔 打印人数界面
    load_chess();
    int dice_result = 0;
    int count = 0;
    const char *name[4] = {"yellow", "blue", "green", "red"};
    SDL_Event begin4Event; // 主事件
    while (SDL_WaitEvent(&begin4Event))
    {
        switch (begin4Event.type) // 事件类型
        {
        case SDL_MOUSEBUTTONUP: // 鼠标互动 松开触发
            // function
            if (begin4Event.button.x > 960 && begin4Event.button.x < 1000 && begin4Event.button.y > 0 &&
                begin4Event.button.y < 50) // 根据点击位置触发指令
            {
                quit();
                // SDL_RenderClear(Renderer);                                                // 清空画笔
                // SDL_RenderCopy(Renderer, NumBackGroundTexture, NULL, &NumBackGroundRect); // 复制画笔
                // SDL_RenderPresent(Renderer);                                              // 刷新画笔
                // goto t;
                //  返回上一层
            }
            else if (begin4Event.button.x > 1000 && begin4Event.button.x < 1200 && begin4Event.button.y > 400 &&
                     begin4Event.button.y < 600)
            {
                if (count == 1)
                {
                    int result = Dice_point("green");
                    MoveChess("green", 3, 4, result);
                    count = 2;
                }
                else if (count == 0)
                {
                    int result = Dice_point("blue");
                    MoveChess("blue", 2, 4, result);
                    count = 1;
                }
                else if (count == 2)
                {
                    int result = Dice_point("red");
                    MoveChess("red", 4, 4, result);
                    count = 3;
                }
                else if (count == 3)
                {
                    int result = Dice_point("yellow");
                    MoveChess("yellow", 1, 4, result);
                    count = 0;
                }
            }
            printf("(%d,%d)\n", begin4Event.button.x, begin4Event.button.y); // 在命令行打印鼠标坐标
            break;
        default:
            break;
        }
    }
t:
    return;
}
void load_chess() // 加载棋子
{
    // 黄色
    load_yellowchess(ChessPointNow.yellow1[0], ChessPointNow.yellow1[1]);
    load_yellowchess(ChessPointNow.yellow2[0], ChessPointNow.yellow2[1]);
    load_yellowchess(ChessPointNow.yellow3[0], ChessPointNow.yellow3[1]);
    load_yellowchess(ChessPointNow.yellow4[0], ChessPointNow.yellow4[1]);
    // 黄色

    // 蓝色

    load_bluechess(ChessPointNow.blue1[0], ChessPointNow.blue1[1]);
    load_bluechess(ChessPointNow.blue2[0], ChessPointNow.blue2[1]);
    load_bluechess(ChessPointNow.blue3[0], ChessPointNow.blue3[1]);
    load_bluechess(ChessPointNow.blue4[0], ChessPointNow.blue4[1]);
    // 蓝色

    // 绿色
    load_greenchess(ChessPointNow.green1[0], ChessPointNow.green1[1]);
    load_greenchess(ChessPointNow.green2[0], ChessPointNow.green2[1]);
    load_greenchess(ChessPointNow.green3[0], ChessPointNow.green3[1]);
    load_greenchess(ChessPointNow.green4[0], ChessPointNow.green4[1]);
    // 绿色

    // 红色
    load_redchess(ChessPointNow.red1[0], ChessPointNow.red1[1]);
    load_redchess(ChessPointNow.red2[0], ChessPointNow.red2[1]);
    load_redchess(ChessPointNow.red3[0], ChessPointNow.red3[1]);
    load_redchess(ChessPointNow.red4[0], ChessPointNow.red4[1]);
    // 红色
}
void reload(const char name[10], int x, int y) // 改变棋子位置并重新加载
{
    SDL_RenderCopy(Renderer, TapBackGroundTexture, NULL, &TapBackGroundRect);
    SDL_RenderPresent(Renderer);
    if (CmpName(name) == 1)
    {
        ChessPointNow.yellow1[0] = x;
        ChessPointNow.yellow1[1] = y;
    }
    else if (CmpName(name) == 2)
    {
        ChessPointNow.yellow2[0] = x;
        ChessPointNow.yellow2[1] = y;
    }
    else if (CmpName(name) == 3)
    {
        ChessPointNow.yellow3[0] = x;
        ChessPointNow.yellow3[1] = y;
    }
    else if (CmpName(name) == 4)
    {
        ChessPointNow.yellow4[0] = x;
        ChessPointNow.yellow4[1] = y;
    }
    else if (CmpName(name) == 5)
    {
        ChessPointNow.blue1[0] = x;
        ChessPointNow.blue1[1] = y;
    }
    else if (CmpName(name) == 6)
    {
        ChessPointNow.blue2[0] = x;
        ChessPointNow.blue2[1] = y;
    }
    else if (CmpName(name) == 7)
    {
        ChessPointNow.blue3[0] = x;
        ChessPointNow.blue3[1] = y;
    }
    else if (CmpName(name) == 8)
    {
        ChessPointNow.blue4[0] = x;
        ChessPointNow.blue4[1] = y;
    }
    else if (CmpName(name) == 9)
    {
        ChessPointNow.green1[0] = x;
        ChessPointNow.green1[1] = y;
    }
    else if (CmpName(name) == 10)
    {
        ChessPointNow.green2[0] = x;
        ChessPointNow.green2[1] = y;
    }
    else if (CmpName(name) == 11)
    {
        ChessPointNow.green3[0] = x;
        ChessPointNow.green3[1] = y;
    }
    else if (CmpName(name) == 12)
    {
        ChessPointNow.green4[0] = x;
        ChessPointNow.green4[1] = y;
    }
    else if (CmpName(name) == 13)
    {
        ChessPointNow.red1[0] = x;
        ChessPointNow.red1[1] = y;
    }
    else if (CmpName(name) == 14)
    {
        ChessPointNow.red2[0] = x;
        ChessPointNow.red2[1] = y;
    }
    else if (CmpName(name) == 15)
    {
        ChessPointNow.red3[0] = x;
        ChessPointNow.red3[1] = y;
    }
    else if (CmpName(name) == 16)
    {
        ChessPointNow.red4[0] = x;
        ChessPointNow.red4[1] = y;
    }
    load_chess();
}
void pp2() // 人名2
{
    SDL_RenderCopy(Renderer, pp2BackGroundTexture, NULL, &pp2BackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔
    SDL_Event pp2Event;                                                       // 主事件
    while (SDL_WaitEvent(&pp2Event))
    {
        switch (pp2Event.type) // 事件类型
        {
        case SDL_QUIT: // 退出游戏
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
    begin2(2);
}
void pp3() // 人名3
{
    SDL_RenderCopy(Renderer, pp3BackGroundTexture, NULL, &pp3BackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔
    SDL_Event pp3Event;                                                       // 主事件
    while (SDL_WaitEvent(&pp3Event))
    {
        switch (pp3Event.type) // 事件类型
        {
        case SDL_QUIT: // 退出游戏
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
void pp4() // 人名4
{
    SDL_RenderCopy(Renderer, pp4BackGroundTexture, NULL, &pp4BackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔
    SDL_Event pp4Event;                                                       // 主事件
    while (SDL_WaitEvent(&pp4Event))
    {
        switch (pp4Event.type) // 事件类型
        {
        case SDL_QUIT: // 退出游戏
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
void pc2() // 电脑名2
{
    SDL_RenderCopy(Renderer, pc2BackGroundTexture, NULL, &pc2BackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔
    SDL_Event pc2Event;                                                       // 主事件
    while (SDL_WaitEvent(&pc2Event))
    {
        switch (pc2Event.type) // 事件类型
        {
        case SDL_QUIT: // 退出游戏
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
    begin2(2);
}
void pc3() // 电脑名3
{
    SDL_RenderCopy(Renderer, pc3BackGroundTexture, NULL, &pc3BackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔
    SDL_Event pc3Event;                                                       // 主事件
    while (SDL_WaitEvent(&pc3Event))
    {
        switch (pc3Event.type) // 事件类型
        {
        case SDL_QUIT: // 退出游戏
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
void pc4() // 电脑名4
{
    SDL_RenderCopy(Renderer, pc4BackGroundTexture, NULL, &pc4BackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                              // 刷新画笔
    SDL_Event pc4Event;                                                       // 主事件
    while (SDL_WaitEvent(&pc4Event))
    {
        switch (pc4Event.type) // 事件类型
        {
        case SDL_QUIT: // 退出游戏
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
int CmpName(const char name[10])
{
    if (!strcmp(name, "yellow1"))
        return 1; // 黄一号
    else if (!strcmp(name, "yellow2"))
        return 2;
    else if (!strcmp(name, "yellow3"))
        return 3;
    else if (!strcmp(name, "yellow4"))
        return 4;
    else if (!strcmp(name, "blue1"))
        return 5;
    else if (!strcmp(name, "blue2"))
        return 6;
    else if (!strcmp(name, "blue3"))
        return 7;
    else if (!strcmp(name, "blue4"))
        return 8;
    else if (!strcmp(name, "green1"))
        return 9;
    else if (!strcmp(name, "green2"))
        return 10;
    else if (!strcmp(name, "green3"))
        return 11;
    else if (!strcmp(name, "green4"))
        return 12;
    else if (!strcmp(name, "red1"))
        return 13;
    else if (!strcmp(name, "red2"))
        return 14;
    else if (!strcmp(name, "red3"))
        return 15;
    else if (!strcmp(name, "red4"))
        return 16;
}
int Dice_point(const char name[10]) // 骰子
{
    srand((unsigned)time(NULL));
    int result = 0;
    result = rand() % 6 + 1;
    Load_dice(result, name);
    printf("result:%d\n", result);
    return result;
}
void Load_dice(int result, const char name[10]) // 加载骰子
{
    switch (result)
    {
    case 1:
        SDL_RenderCopy(Renderer, oneBackGroundTexture, NULL, &oneBackGroundRect);
        SDL_RenderPresent(Renderer);
        break;
    case 2:
        SDL_RenderCopy(Renderer, twoBackGroundTexture, NULL, &twoBackGroundRect);
        SDL_RenderPresent(Renderer);
        break;
    case 3:
        SDL_RenderCopy(Renderer, threeBackGroundTexture, NULL, &threeBackGroundRect);
        SDL_RenderPresent(Renderer);
        break;
    case 4:
        SDL_RenderCopy(Renderer, fourBackGroundTexture, NULL, &fourBackGroundRect);
        SDL_RenderPresent(Renderer);
        break;
    case 5:
        SDL_RenderCopy(Renderer, fiveBackGroundTexture, NULL, &fiveBackGroundRect);
        SDL_RenderPresent(Renderer);
        break;
    case 6:
        SDL_RenderCopy(Renderer, sixBackGroundTexture, NULL, &sixBackGroundRect);
        SDL_RenderPresent(Renderer);
        break;
    }
    if (!strcmp(name, "yellow"))
    {
        SDL_RenderCopy(Renderer, yellowplayBackGroundTexture, NULL, &yellowplayBackGroundRect);
        SDL_RenderPresent(Renderer);
    }
    else if (!strcmp(name, "blue"))
    {
        SDL_RenderCopy(Renderer, blueplayBackGroundTexture, NULL, &blueplayBackGroundRect);
        SDL_RenderPresent(Renderer);
    }
    else if (!strcmp(name, "red"))
    {
        SDL_RenderCopy(Renderer, redplayBackGroundTexture, NULL, &redplayBackGroundRect);
        SDL_RenderPresent(Renderer);
    }
    else if (!strcmp(name, "green"))
    {
        SDL_RenderCopy(Renderer, greenplayBackGroundTexture, NULL, &greenplayBackGroundRect);
        SDL_RenderPresent(Renderer);
    }
}
void MoveChess(const char name[10], int player, int type, int result)
{
    SDL_Event FirstMove;
    if (player == 1)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (StartedChess.YellowEndChess[i] == 0)
                count++;
            if (count == 4 && result != 6)
                return;
        }
        while (SDL_WaitEvent(&FirstMove))
        {
            switch (FirstMove.type)
            {
            case SDL_MOUSEBUTTONUP:
                if (FirstMove.button.x > ChessPointNow.yellow1[0] &&
                    FirstMove.button.x < ChessPointNow.yellow1[0] + 50 &&
                    FirstMove.button.y > ChessPointNow.yellow1[1] &&
                    FirstMove.button.y < ChessPointNow.yellow1[1] + 50)
                {
                    if (result == 6 && StartedChess.YellowEndChess[0] != 1)
                    {
                        reload("yellow1", 20, 250);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("yellow");
                                    JudgeChess(&ChessPointNow.yellow1[0], &ChessPointNow.yellow1[1], result);
                                    jump("yellow1");
                                    cross();
                                    attack("yellow", ChessPointNow.yellow1[0], ChessPointNow.yellow1[1]);
                                    reload("yellow1", ChessPointNow.yellow1[0], ChessPointNow.yellow1[1]);
                                    StartedChess.YellowEndChess[0] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    else if (StartedChess.YellowEndChess[0] == 1 && EndChessNum.YellowEndChess[0] == 0)
                    {
                        if ((ChessPointNow.yellow1[1] == 686 && ChessPointNow.yellow1[0] <= 315) || (ChessPointNow.yellow1[0] == 103 && ChessPointNow.yellow1[1] > 280))
                        {
                            EndChessNum.YellowEndChess[0] = 1;
                            goto yellow1;
                        }
                        JudgeChess(&ChessPointNow.yellow1[0], &ChessPointNow.yellow1[1], result);
                        jump("yellow1");
                        cross();
                        attack("yellow", ChessPointNow.yellow1[0], ChessPointNow.yellow1[1]);
                        reload("yellow1", ChessPointNow.yellow1[0], ChessPointNow.yellow1[1]);
                        return;
                    }
                    else if (EndChessNum.YellowEndChess[0] == 1)
                    {
                    yellow1:
                        EndJump("yellow", &ChessPointNow.yellow1[0], &ChessPointNow.yellow1[1], result);
                        jump("yellow1");
                        attack("yellow", ChessPointNow.yellow1[0], ChessPointNow.yellow1[1]);
                        if (ChessPointNow.yellow1[0] < 0)
                            StartedChess.YellowEndChess[0] = 0;
                        reload("yellow1", ChessPointNow.yellow1[0], ChessPointNow.yellow1[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.yellow2[0] &&
                         FirstMove.button.x < ChessPointNow.yellow2[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.yellow2[1] &&
                         FirstMove.button.y < ChessPointNow.yellow2[1] + 50)
                {
                    if (result == 6 && StartedChess.YellowEndChess[1] != 1)
                    {
                        reload("yellow2", 20, 250);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("yellow");
                                    JudgeChess(&ChessPointNow.yellow2[0], &ChessPointNow.yellow2[1], result);
                                    jump("yellow2");
                                    cross();
                                    attack("yellow", ChessPointNow.yellow2[0], ChessPointNow.yellow2[1]);
                                    reload("yellow2", ChessPointNow.yellow2[0], ChessPointNow.yellow2[1]);
                                    StartedChess.YellowEndChess[1] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    else if (StartedChess.YellowEndChess[1] == 1 && EndChessNum.YellowEndChess[1] == 0)
                    {
                        if ((ChessPointNow.yellow2[1] == 686 && ChessPointNow.yellow2[0] <= 315) || (ChessPointNow.yellow2[0] == 103 && ChessPointNow.yellow2[1] > 280))
                        {
                            EndChessNum.YellowEndChess[1] = 1;
                            goto yellow2;
                        }
                        JudgeChess(&ChessPointNow.yellow2[0], &ChessPointNow.yellow2[1], result);
                        jump("yellow2");
                        cross();
                        attack("yellow", ChessPointNow.yellow2[0], ChessPointNow.yellow2[1]);
                        reload("yellow2", ChessPointNow.yellow2[0], ChessPointNow.yellow2[1]);
                        return;
                    }
                    else if (EndChessNum.YellowEndChess[1] == 1)
                    {
                    yellow2:
                        printf("yellow2change\n");
                        EndJump("yellow", &ChessPointNow.yellow2[0], &ChessPointNow.yellow2[1], result);
                        jump("yellow2");
                        attack("yellow", ChessPointNow.yellow2[0], ChessPointNow.yellow2[1]);
                        if (ChessPointNow.yellow2[0] < 0)
                            StartedChess.YellowEndChess[1] = 0;
                        reload("yellow2", ChessPointNow.yellow2[0], ChessPointNow.yellow2[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.yellow3[0] &&
                         FirstMove.button.x < ChessPointNow.yellow3[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.yellow3[1] &&
                         FirstMove.button.y < ChessPointNow.yellow3[1] + 50)
                {
                    if (result == 6 && StartedChess.YellowEndChess[2] != 1)
                    {
                        reload("yellow3", 20, 250);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("yellow");
                                    JudgeChess(&ChessPointNow.yellow3[0], &ChessPointNow.yellow3[1], result);
                                    jump("yellow3");
                                    cross();
                                    attack("yellow", ChessPointNow.yellow3[0], ChessPointNow.yellow3[1]);
                                    reload("yellow3", ChessPointNow.yellow3[0], ChessPointNow.yellow3[1]);
                                    StartedChess.YellowEndChess[2] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.YellowEndChess[2] == 1 && EndChessNum.YellowEndChess[2] == 0)
                    {
                        if ((ChessPointNow.yellow3[1] == 686 && ChessPointNow.yellow3[0] <= 315) || (ChessPointNow.yellow3[0] == 103 && ChessPointNow.yellow3[1] > 280))
                        {
                            EndChessNum.YellowEndChess[2] = 1;
                            goto yellow3;
                        }
                        JudgeChess(&ChessPointNow.yellow3[0], &ChessPointNow.yellow3[1], result);
                        jump("yellow3");
                        cross();
                        attack("yellow", ChessPointNow.yellow3[0], ChessPointNow.yellow3[1]);
                        reload("yellow3", ChessPointNow.yellow3[0], ChessPointNow.yellow3[1]);
                        return;
                    }
                    else if (EndChessNum.YellowEndChess[2] == 1)
                    {
                    yellow3:
                        EndJump("yellow", &ChessPointNow.yellow3[0], &ChessPointNow.yellow3[1], result);
                        jump("yellow3");
                        attack("yellow", ChessPointNow.yellow3[0], ChessPointNow.yellow3[1]);
                        if (ChessPointNow.yellow3[0] < 0)
                            StartedChess.YellowEndChess[2] = 0;
                        reload("yellow3", ChessPointNow.yellow3[0], ChessPointNow.yellow3[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.yellow4[0] &&
                         FirstMove.button.x < ChessPointNow.yellow4[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.yellow4[1] &&
                         FirstMove.button.y < ChessPointNow.yellow4[1] + 50)
                {
                    if (result == 6 && StartedChess.YellowEndChess[3] != 1)
                    {
                        reload("yellow4", 20, 250);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("yellow");
                                    JudgeChess(&ChessPointNow.yellow4[0], &ChessPointNow.yellow4[1], result);
                                    jump("yellow4");
                                    cross();
                                    attack("yellow", ChessPointNow.yellow4[0], ChessPointNow.yellow4[1]);
                                    reload("yellow4", ChessPointNow.yellow4[0], ChessPointNow.yellow4[1]);
                                    StartedChess.YellowEndChess[3] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.YellowEndChess[3] == 1 && EndChessNum.YellowEndChess[3] == 0)
                    {
                        if ((ChessPointNow.yellow4[1] == 686 && ChessPointNow.yellow4[0] <= 315) || (ChessPointNow.yellow4[0] == 103 && ChessPointNow.yellow4[1] > 280))
                        {
                            EndChessNum.YellowEndChess[3] = 1;
                            goto yellow4;
                        }
                        JudgeChess(&ChessPointNow.yellow4[0], &ChessPointNow.yellow4[1], result);
                        jump("yellow4");
                        cross();
                        attack("yellow", ChessPointNow.yellow4[0], ChessPointNow.yellow4[1]);
                        reload("yellow4", ChessPointNow.yellow4[0], ChessPointNow.yellow4[1]);
                        return;
                    }
                    else if (EndChessNum.YellowEndChess[3] == 1)
                    {
                    yellow4:
                        EndJump("yellow", &ChessPointNow.yellow4[0], &ChessPointNow.yellow4[1], result);
                        jump("yellow4");
                        attack("yellow", ChessPointNow.yellow4[0], ChessPointNow.yellow4[1]);
                        if (ChessPointNow.yellow4[0] < 0)
                            StartedChess.YellowEndChess[3] = 0;
                        reload("yellow4", ChessPointNow.yellow4[0], ChessPointNow.yellow4[1]);
                        end();
                        return;
                    }
                }
            }
        }
    }
    else if (player == 2)
    {

        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (StartedChess.BlueEndChess[i] == 0)
                count++;
            if (count == 4 && result != 6)
                return;
        }
        while (SDL_WaitEvent(&FirstMove))
        {
            switch (FirstMove.type)
            {
            case SDL_MOUSEBUTTONUP:
                if (FirstMove.button.x > ChessPointNow.blue1[0] &&
                    FirstMove.button.x < ChessPointNow.blue1[0] + 50 &&
                    FirstMove.button.y > ChessPointNow.blue1[1] &&
                    FirstMove.button.y < ChessPointNow.blue1[1] + 50)
                {
                    if (result == 6 && StartedChess.BlueEndChess[0] != 1)
                    {
                        reload("blue1", 682, 16);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("blue");
                                    JudgeChess(&ChessPointNow.blue1[0], &ChessPointNow.blue1[1], result);
                                    jump("blue1");
                                    cross();
                                    attack("blue", ChessPointNow.blue1[0], ChessPointNow.blue1[1]);
                                    reload("blue1", ChessPointNow.blue1[0], ChessPointNow.blue1[1]);
                                    StartedChess.BlueEndChess[0] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.BlueEndChess[0] == 1 && EndChessNum.BlueEndChess[0] == 0)
                    {
                        if ((ChessPointNow.blue1[1] == 92 && ChessPointNow.blue1[0] < 633) || (ChessPointNow.blue1[0] == 315 && ChessPointNow.blue1[1] <= 280))
                        {
                            EndChessNum.BlueEndChess[0] = 1;
                            goto blue1;
                        }
                        JudgeChess(&ChessPointNow.blue1[0], &ChessPointNow.blue1[1], result);
                        jump("blue1");
                        cross();
                        attack("blue", ChessPointNow.blue1[0], ChessPointNow.blue1[1]);
                        reload("blue1", ChessPointNow.blue1[0], ChessPointNow.blue1[1]);
                        return;
                    }
                    else if (EndChessNum.BlueEndChess[0] == 1)
                    {
                    blue1:
                        EndJump("blue", &ChessPointNow.blue1[0], &ChessPointNow.blue1[1], result);
                        jump("blue1");
                        attack("blue", ChessPointNow.blue1[0], ChessPointNow.blue1[1]);
                        if (ChessPointNow.blue1[0] < 0)
                            StartedChess.BlueEndChess[0] = 0;
                        reload("blue1", ChessPointNow.blue1[0], ChessPointNow.blue1[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.blue2[0] &&
                         FirstMove.button.x < ChessPointNow.blue2[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.blue2[1] &&
                         FirstMove.button.y < ChessPointNow.blue2[1] + 50)
                {
                    if (result == 6 && StartedChess.BlueEndChess[1] != 1)
                    {
                        reload("blue2", 682, 16);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("blue");
                                    JudgeChess(&ChessPointNow.blue2[0], &ChessPointNow.blue2[1], result);
                                    jump("blue2");
                                    cross();
                                    attack("blue", ChessPointNow.blue2[0], ChessPointNow.blue2[1]);
                                    reload("blue2", ChessPointNow.blue2[0], ChessPointNow.blue2[1]);
                                    StartedChess.BlueEndChess[1] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.BlueEndChess[1] == 1 && EndChessNum.BlueEndChess[1] == 0)
                    {
                        if ((ChessPointNow.blue2[1] == 92 && ChessPointNow.blue2[0] < 633) || (ChessPointNow.blue2[0] == 315 && ChessPointNow.blue2[1] <= 280))
                        {
                            EndChessNum.BlueEndChess[1] = 1;
                            goto blue2;
                        }
                        JudgeChess(&ChessPointNow.blue2[0], &ChessPointNow.blue2[1], result);
                        jump("blue2");
                        cross();
                        attack("blue", ChessPointNow.blue2[0], ChessPointNow.blue2[1]);
                        reload("blue2", ChessPointNow.blue2[0], ChessPointNow.blue2[1]);
                        return;
                    }
                    else if (EndChessNum.BlueEndChess[1] == 1)
                    {
                    blue2:
                        EndJump("blue", &ChessPointNow.blue2[0], &ChessPointNow.blue2[1], result);
                        jump("blue2");
                        attack("blue", ChessPointNow.blue2[0], ChessPointNow.blue2[1]);
                        if (ChessPointNow.blue2[0] < 0)
                            StartedChess.BlueEndChess[1] = 0;
                        reload("blue2", ChessPointNow.blue2[0], ChessPointNow.blue2[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.blue3[0] &&
                         FirstMove.button.x < ChessPointNow.blue3[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.blue3[1] &&
                         FirstMove.button.y < ChessPointNow.blue3[1] + 50)
                {
                    if (result == 6 && StartedChess.BlueEndChess[2] != 1)
                    {
                        reload("blue3", 682, 16);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("blue");
                                    JudgeChess(&ChessPointNow.blue3[0], &ChessPointNow.blue3[1], result);
                                    jump("blue3");
                                    cross();
                                    attack("blue", ChessPointNow.blue3[0], ChessPointNow.blue3[1]);
                                    reload("blue3", ChessPointNow.blue3[0], ChessPointNow.blue3[1]);
                                    StartedChess.BlueEndChess[2] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.BlueEndChess[2] == 1 && EndChessNum.BlueEndChess[2] == 0)
                    {
                        if ((ChessPointNow.blue3[1] == 92 && ChessPointNow.blue3[0] < 633) || (ChessPointNow.blue3[0] == 315 && ChessPointNow.blue3[1] <= 280))
                        {
                            EndChessNum.BlueEndChess[2] = 1;
                            goto blue3;
                        }
                        JudgeChess(&ChessPointNow.blue3[0], &ChessPointNow.blue3[1], result);
                        jump("blue3");
                        cross();
                        attack("blue", ChessPointNow.blue3[0], ChessPointNow.blue3[1]);
                        reload("blue3", ChessPointNow.blue3[0], ChessPointNow.blue3[1]);
                        return;
                    }
                    else if (EndChessNum.BlueEndChess[2] == 1)
                    {
                    blue3:
                        EndJump("blue", &ChessPointNow.blue3[0], &ChessPointNow.blue3[1], result);
                        jump("blue3");
                        attack("blue", ChessPointNow.blue3[0], ChessPointNow.blue3[1]);
                        if (ChessPointNow.blue3[0] < 0)
                            StartedChess.BlueEndChess[2] = 0;
                        reload("blue3", ChessPointNow.blue3[0], ChessPointNow.blue3[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.blue4[0] &&
                         FirstMove.button.x < ChessPointNow.blue4[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.blue4[1] &&
                         FirstMove.button.y < ChessPointNow.blue4[1] + 50)
                {
                    if (result == 6 && StartedChess.BlueEndChess[3] != 1)
                    {
                        reload("blue4", 682, 16);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("blue");
                                    JudgeChess(&ChessPointNow.blue4[0], &ChessPointNow.blue4[1], result);
                                    jump("blue4");
                                    cross();
                                    attack("blue", ChessPointNow.blue4[0], ChessPointNow.blue4[1]);
                                    reload("blue4", ChessPointNow.blue4[0], ChessPointNow.blue4[1]);
                                    StartedChess.BlueEndChess[3] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.BlueEndChess[3] == 1 && EndChessNum.BlueEndChess[3] == 0)
                    {
                        if ((ChessPointNow.blue4[1] == 92 && ChessPointNow.blue4[0] < 633) || (ChessPointNow.blue4[0] == 315 && ChessPointNow.blue4[1] <= 280))
                        {
                            EndChessNum.BlueEndChess[3] = 1;
                            goto blue4;
                        }
                        JudgeChess(&ChessPointNow.blue4[0], &ChessPointNow.blue4[1], result);
                        jump("blue4");
                        cross();
                        attack("blue", ChessPointNow.blue4[0], ChessPointNow.blue4[1]);
                        reload("blue4", ChessPointNow.blue4[0], ChessPointNow.blue4[1]);
                        return;
                    }
                    else if (EndChessNum.BlueEndChess[0] == 1)
                    {
                    blue4:
                        EndJump("blue", &ChessPointNow.blue4[0], &ChessPointNow.blue4[1], result);
                        jump("blue4");
                        attack("blue", ChessPointNow.blue4[0], ChessPointNow.blue4[1]);
                        if (ChessPointNow.blue4[0] < 0)
                            StartedChess.BlueEndChess[3] = 0;
                        reload("blue4", ChessPointNow.blue4[0], ChessPointNow.blue4[1]);
                        end();
                        return;
                    }
                }
            }
        }
    }
    else if (player == 3)
    {

        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (StartedChess.GreenEndChess[i] == 0)
                count++;
            if (count == 4 && result != 6)
                return;
        }
        while (SDL_WaitEvent(&FirstMove))
        {
            switch (FirstMove.type)
            {
            case SDL_MOUSEBUTTONUP:
                if (FirstMove.button.x > ChessPointNow.green1[0] &&
                    FirstMove.button.x < ChessPointNow.green1[0] + 50 &&
                    FirstMove.button.y > ChessPointNow.green1[1] &&
                    FirstMove.button.y < ChessPointNow.green1[1] + 50)
                {
                    if (result == 6 && StartedChess.GreenEndChess[0] != 1)
                    {
                        reload("green1", 276, 837);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("green");
                                    JudgeChess(&ChessPointNow.green1[0], &ChessPointNow.green1[1], result);
                                    jump("green1");
                                    cross();
                                    attack("green", ChessPointNow.green1[0], ChessPointNow.green1[1]);
                                    reload("green1", ChessPointNow.green1[0], ChessPointNow.green1[1]);
                                    StartedChess.GreenEndChess[0] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.GreenEndChess[0] == 1 && EndChessNum.GreenEndChess[0] == 0)
                    {
                        if ((ChessPointNow.green1[1] == 750 && ChessPointNow.green1[0] > 315) || (ChessPointNow.green1[0] == 633 && ChessPointNow.green1[1] >= 562))
                        {
                            EndChessNum.GreenEndChess[0] = 1;
                            goto green1;
                        }
                        JudgeChess(&ChessPointNow.green1[0], &ChessPointNow.green1[1], result);
                        jump("green1");
                        cross();
                        attack("green", ChessPointNow.green1[0], ChessPointNow.green1[1]);
                        reload("green1", ChessPointNow.green1[0], ChessPointNow.green1[1]);
                        return;
                    }
                    else if (EndChessNum.GreenEndChess[0] == 1)
                    {
                    green1:
                        EndJump("green", &ChessPointNow.green1[0], &ChessPointNow.green1[1], result);
                        jump("green1");
                        attack("green", ChessPointNow.green1[0], ChessPointNow.green1[1]);
                        if (ChessPointNow.green1[0] < 0)
                            StartedChess.GreenEndChess[0] = 0;
                        reload("green1", ChessPointNow.green1[0], ChessPointNow.green1[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.green2[0] &&
                         FirstMove.button.x < ChessPointNow.green2[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.green2[1] &&
                         FirstMove.button.y < ChessPointNow.green2[1] + 50)
                {
                    if (result == 6 && StartedChess.GreenEndChess[1] != 1)
                    {
                        reload("green2", 276, 837);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("green");
                                    JudgeChess(&ChessPointNow.green2[0], &ChessPointNow.green2[1], result);
                                    jump("green2");
                                    cross();
                                    attack("green", ChessPointNow.green2[0], ChessPointNow.green2[1]);
                                    reload("green2", ChessPointNow.green2[0], ChessPointNow.green2[1]);
                                    StartedChess.GreenEndChess[1] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.GreenEndChess[1] == 1 && EndChessNum.GreenEndChess[1] == 0)
                    {
                        if ((ChessPointNow.green2[1] == 750 && ChessPointNow.green2[0] > 315) || (ChessPointNow.green2[0] == 633 && ChessPointNow.green2[1] >= 562))
                        {
                            EndChessNum.GreenEndChess[1] = 1;
                            goto green2;
                        }
                        JudgeChess(&ChessPointNow.green2[0], &ChessPointNow.green2[1], result);
                        jump("green2");
                        cross();
                        attack("green", ChessPointNow.green2[0], ChessPointNow.green2[1]);
                        reload("green2", ChessPointNow.green2[0], ChessPointNow.green2[1]);
                        return;
                    }
                    else if (EndChessNum.GreenEndChess[1] == 1)
                    {
                    green2:
                        EndJump("green", &ChessPointNow.green2[0], &ChessPointNow.green2[1], result);
                        jump("green2");
                        attack("green", ChessPointNow.green2[0], ChessPointNow.green2[1]);
                        if (ChessPointNow.green2[0] < 0)
                            StartedChess.GreenEndChess[1] = 0;
                        reload("green2", ChessPointNow.green2[0], ChessPointNow.green2[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.green3[0] &&
                         FirstMove.button.x < ChessPointNow.green3[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.green3[1] &&
                         FirstMove.button.y < ChessPointNow.green3[1] + 50)
                {
                    if (result == 6 && StartedChess.GreenEndChess[2] != 1)
                    {
                        reload("green3", 276, 837);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("green");
                                    JudgeChess(&ChessPointNow.green3[0], &ChessPointNow.green3[1], result);
                                    jump("green3");
                                    cross();
                                    attack("green", ChessPointNow.green3[0], ChessPointNow.green3[1]);
                                    reload("green3", ChessPointNow.green3[0], ChessPointNow.green3[1]);
                                    StartedChess.GreenEndChess[2] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.GreenEndChess[2] == 1 && EndChessNum.GreenEndChess[2] == 0)
                    {
                        if ((ChessPointNow.green3[1] == 750 && ChessPointNow.green3[0] > 315) || (ChessPointNow.green3[0] == 633 && ChessPointNow.green3[1] >= 562))
                        {
                            EndChessNum.GreenEndChess[2] = 1;
                            goto green3;
                        }
                        JudgeChess(&ChessPointNow.green3[0], &ChessPointNow.green3[1], result);
                        jump("green3");
                        cross();
                        attack("green", ChessPointNow.green3[0], ChessPointNow.green3[1]);
                        reload("green3", ChessPointNow.green3[0], ChessPointNow.green3[1]);
                        return;
                    }
                    else if (EndChessNum.GreenEndChess[2] == 1)
                    {
                    green3:
                        EndJump("green", &ChessPointNow.green3[0], &ChessPointNow.green3[1], result);
                        jump("green3");
                        attack("green", ChessPointNow.green3[0], ChessPointNow.green3[1]);
                        if (ChessPointNow.green3[0] < 0)
                            StartedChess.GreenEndChess[2] = 0;
                        reload("green3", ChessPointNow.green3[0], ChessPointNow.green3[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.green4[0] &&
                         FirstMove.button.x < ChessPointNow.green4[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.green4[1] &&
                         FirstMove.button.y < ChessPointNow.green4[1] + 50)
                {
                    if (result == 6 && StartedChess.GreenEndChess[3] != 1)
                    {
                        reload("green4", 276, 837);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("green");
                                    JudgeChess(&ChessPointNow.green4[0], &ChessPointNow.green4[1], result);
                                    jump("green4");
                                    cross();
                                    attack("green", ChessPointNow.green4[0], ChessPointNow.green4[1]);
                                    reload("green4", ChessPointNow.green4[0], ChessPointNow.green4[1]);
                                    StartedChess.GreenEndChess[3] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.GreenEndChess[3] == 1 && EndChessNum.GreenEndChess[3] == 0)
                    {
                        if ((ChessPointNow.green4[1] == 750 && ChessPointNow.green4[0] > 315) || (ChessPointNow.green4[0] == 633 && ChessPointNow.green4[1] >= 562))
                        {
                            EndChessNum.GreenEndChess[3] = 1;
                            goto green4;
                        }
                        JudgeChess(&ChessPointNow.green4[0], &ChessPointNow.green4[1], result);
                        jump("green4");
                        cross();
                        attack("green", ChessPointNow.green4[0], ChessPointNow.green4[1]);
                        reload("green4", ChessPointNow.green4[0], ChessPointNow.green4[1]);
                        return;
                    }
                    else if (EndChessNum.GreenEndChess[3] == 1)
                    {
                    green4:
                        EndJump("green", &ChessPointNow.green4[0], &ChessPointNow.green4[1], result);
                        jump("green4");
                        attack("green", ChessPointNow.green4[0], ChessPointNow.green4[1]);
                        if (ChessPointNow.green4[0] < 0)
                            StartedChess.GreenEndChess[3] = 0;
                        reload("green4", ChessPointNow.green4[0], ChessPointNow.green4[1]);
                        end();
                        return;
                    }
                }
            }
        }
    }
    else if (player == 4)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (StartedChess.RedEndChess[i] == 0)
                count++;
            if (count == 4 && result != 6)
                return;
        }
        while (SDL_WaitEvent(&FirstMove))
        {
            switch (FirstMove.type)
            {
            case SDL_MOUSEBUTTONUP:
                if (FirstMove.button.x > ChessPointNow.red1[0] &&
                    FirstMove.button.x < ChessPointNow.red1[0] + 50 &&
                    FirstMove.button.y > ChessPointNow.red1[1] &&
                    FirstMove.button.y < ChessPointNow.red1[1] + 50)
                {
                    if (result == 6 && StartedChess.RedEndChess[0] != 1)
                    {
                        reload("red1", 929, 612);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("red");
                                    JudgeChess(&ChessPointNow.red1[0], &ChessPointNow.red1[1], result);
                                    jump("red1");
                                    cross();
                                    attack("red", ChessPointNow.red1[0], ChessPointNow.red1[1]);
                                    reload("red1", ChessPointNow.red1[0], ChessPointNow.red1[1]);
                                    StartedChess.RedEndChess[0] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.RedEndChess[0] == 1 && EndChessNum.RedEndChess[0] == 0)
                    {
                        if ((ChessPointNow.red1[1] == 280 && ChessPointNow.red1[0] >= 633) || (ChessPointNow.red1[0] == 845 && ChessPointNow.red1[1] < 562))
                        {
                            EndChessNum.RedEndChess[0] = 1;
                            goto red1;
                        }
                        JudgeChess(&ChessPointNow.red1[0], &ChessPointNow.red1[1], result);
                        jump("red1");
                        cross();
                        attack("red", ChessPointNow.red1[0], ChessPointNow.red1[1]);
                        reload("red1", ChessPointNow.red1[0], ChessPointNow.red1[1]);
                        return;
                    }
                    else if (EndChessNum.RedEndChess[0] == 1)
                    {
                    red1:
                        EndJump("red", &ChessPointNow.red1[0], &ChessPointNow.red1[1], result);
                        jump("red1");
                        attack("red", ChessPointNow.red1[0], ChessPointNow.red1[1]);
                        if (ChessPointNow.red1[0] < 0)
                            StartedChess.RedEndChess[0] = 0;
                        reload("red1", ChessPointNow.red1[0], ChessPointNow.red1[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.red2[0] &&
                         FirstMove.button.x < ChessPointNow.red2[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.red2[1] &&
                         FirstMove.button.y < ChessPointNow.red2[1] + 50)
                {
                    if (result == 6 && StartedChess.RedEndChess[1] != 1)
                    {
                        reload("red2", 929, 612);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("red");
                                    JudgeChess(&ChessPointNow.red2[0], &ChessPointNow.red2[1], result);
                                    jump("red2");
                                    cross();
                                    attack("red", ChessPointNow.red2[0], ChessPointNow.red2[1]);
                                    reload("red2", ChessPointNow.red2[0], ChessPointNow.red2[1]);
                                    StartedChess.RedEndChess[1] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.RedEndChess[1] == 1 && EndChessNum.RedEndChess[1] == 0)
                    {
                        if ((ChessPointNow.red2[1] == 280 && ChessPointNow.red2[0] >= 633) || (ChessPointNow.red2[0] == 845 && ChessPointNow.red2[1] < 562))
                        {
                            EndChessNum.RedEndChess[1] = 1;
                            goto red2;
                        }
                        JudgeChess(&ChessPointNow.red2[0], &ChessPointNow.red2[1], result);
                        jump("red2");
                        cross();
                        attack("red", ChessPointNow.red2[0], ChessPointNow.red2[1]);
                        reload("red2", ChessPointNow.red2[0], ChessPointNow.red2[1]);
                        return;
                    }
                    else if (EndChessNum.RedEndChess[1] == 1)
                    {
                    red2:
                        EndJump("red", &ChessPointNow.red2[0], &ChessPointNow.red2[1], result);
                        jump("red2");
                        attack("red", ChessPointNow.red2[0], ChessPointNow.red2[1]);
                        if (ChessPointNow.red2[0] < 0)
                            StartedChess.RedEndChess[1] = 0;
                        reload("red2", ChessPointNow.red2[0], ChessPointNow.red2[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.red3[0] &&
                         FirstMove.button.x < ChessPointNow.red3[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.red3[1] &&
                         FirstMove.button.y < ChessPointNow.red3[1] + 50)
                {
                    if (result == 6 && StartedChess.RedEndChess[2] != 1)
                    {
                        reload("red3", 929, 612);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("red");
                                    JudgeChess(&ChessPointNow.red3[0], &ChessPointNow.red3[1], result);
                                    jump("red3");
                                    cross();
                                    attack("red", ChessPointNow.red3[0], ChessPointNow.red3[1]);
                                    reload("red3", ChessPointNow.red3[0], ChessPointNow.red3[1]);
                                    StartedChess.RedEndChess[2] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.RedEndChess[2] == 1 && EndChessNum.RedEndChess[2] == 0)
                    {
                        if ((ChessPointNow.red3[1] == 280 && ChessPointNow.red3[0] >= 633) || (ChessPointNow.red3[0] == 845 && ChessPointNow.red3[1] < 562))
                        {
                            EndChessNum.RedEndChess[2] = 1;
                            goto red3;
                        }
                        JudgeChess(&ChessPointNow.red3[0], &ChessPointNow.red3[1], result);
                        jump("red3");
                        cross();
                        attack("red", ChessPointNow.red3[0], ChessPointNow.red3[1]);
                        reload("red3", ChessPointNow.red3[0], ChessPointNow.red3[1]);
                        return;
                    }
                    else if (EndChessNum.RedEndChess[2] == 1)
                    {
                    red3:
                        EndJump("red", &ChessPointNow.red3[0], &ChessPointNow.red3[1], result);
                        jump("red3");
                        attack("red", ChessPointNow.red3[0], ChessPointNow.red3[1]);
                        if (ChessPointNow.red3[0] < 0)
                            StartedChess.RedEndChess[2] = 0;
                        reload("red3", ChessPointNow.red3[0], ChessPointNow.red3[1]);
                        end();
                        return;
                    }
                }
                else if (FirstMove.button.x > ChessPointNow.red4[0] &&
                         FirstMove.button.x < ChessPointNow.red4[0] + 50 &&
                         FirstMove.button.y > ChessPointNow.red4[1] &&
                         FirstMove.button.y < ChessPointNow.red4[1] + 50)
                {
                    if (result == 6 && StartedChess.RedEndChess[3] != 1)
                    {
                        reload("red4", 929, 612);
                        while (SDL_WaitEvent(&FirstMove))
                        {
                            switch (FirstMove.type)
                            {
                            case SDL_MOUSEBUTTONUP:
                                if (FirstMove.button.x > 1000 &&
                                    FirstMove.button.x < 1200 &&
                                    FirstMove.button.y > 400 &&
                                    FirstMove.button.y < 600)
                                {
                                    result = Dice_point("red");
                                    JudgeChess(&ChessPointNow.red4[0], &ChessPointNow.red4[1], result);
                                    jump("red4");
                                    cross();
                                    attack("red", ChessPointNow.red4[0], ChessPointNow.red4[1]);
                                    reload("red4", ChessPointNow.red4[0], ChessPointNow.red4[1]);
                                    StartedChess.RedEndChess[3] = 1;
                                    return;
                                }
                            }
                        }
                    }
                    if (StartedChess.RedEndChess[3] == 1 && EndChessNum.RedEndChess[3] == 0)
                    {
                        if ((ChessPointNow.red4[1] == 280 && ChessPointNow.red4[0] >= 633) || (ChessPointNow.red4[0] == 845 && ChessPointNow.red1[1] < 562))
                        {
                            EndChessNum.RedEndChess[3] = 1;
                            goto red4;
                        }
                        JudgeChess(&ChessPointNow.red4[0], &ChessPointNow.red4[1], result);
                        jump("red4");
                        cross();
                        attack("red", ChessPointNow.red4[0], ChessPointNow.red4[1]);
                        reload("red4", ChessPointNow.red4[0], ChessPointNow.red4[1]);
                        return;
                    }
                    else if (EndChessNum.RedEndChess[3] == 1)
                    {
                    red4:
                        EndJump("red", &ChessPointNow.red4[0], &ChessPointNow.red4[1], result);
                        jump("red4");
                        attack("red", ChessPointNow.red4[0], ChessPointNow.red4[1]);
                        if (ChessPointNow.red4[0] < 0)
                            StartedChess.RedEndChess[3] = 0;
                        reload("red4", ChessPointNow.red4[0], ChessPointNow.red4[1]);
                        end();
                        return;
                    }
                }
            }
        }
    }
} // 有红棋子动不了
void firsttap(int result, int player, int type)
{
    SDL_Event ChessMove;
    while (SDL_WaitEvent(&ChessMove))
    {
        switch (ChessMove.type)
        {
        case SDL_MOUSEBUTTONUP:
            if (player == 1)
            {
                if (ChessMove.button.x > ChessPointNow.yellow1[0] &&
                    ChessMove.button.x < ChessPointNow.yellow1[0] + 50 &&
                    ChessMove.button.y > ChessPointNow.yellow1[1] &&
                    ChessMove.button.y < ChessPointNow.yellow1[1] + 50)
                {
                }
                else if (ChessMove.button.x > ChessPointNow.yellow2[0] &&
                         ChessMove.button.x < ChessPointNow.yellow2[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.yellow2[1] &&
                         ChessMove.button.y < ChessPointNow.yellow2[1] + 50)
                {
                    reload("yellow2", 103 + 53 * (result - 1), 280);
                }
                else if (ChessMove.button.x > ChessPointNow.yellow3[0] &&
                         ChessMove.button.x < ChessPointNow.yellow3[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.yellow3[1] &&
                         ChessMove.button.y < ChessPointNow.yellow3[1] + 50)
                {
                    reload("yellow3", 103 + 53 * (result - 1), 280);
                }
                else if (ChessMove.button.x > ChessPointNow.yellow4[0] &&
                         ChessMove.button.x < ChessPointNow.yellow4[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.yellow4[1] &&
                         ChessMove.button.y < ChessPointNow.yellow4[1] + 50)
                {
                    reload("yellow4", 103 + 53 * (result - 1), 280);
                }
                player = 2;
                return; // MoveChess("blue", player, type);
            }
            else if (player == 2)
            {
                if (ChessMove.button.x > ChessPointNow.blue1[0] && ChessMove.button.x < ChessPointNow.blue1[0] + 50 &&
                    ChessMove.button.y > ChessPointNow.blue1[1] && ChessMove.button.y < ChessPointNow.blue1[1] + 50)
                {
                    reload("blue1", 633, 98 + 47 * (result - 1));
                }
                else if (ChessMove.button.x > ChessPointNow.blue2[0] &&
                         ChessMove.button.x < ChessPointNow.blue2[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.blue2[1] &&
                         ChessMove.button.y < ChessPointNow.blue2[1] + 50)
                {
                    reload("blue2", 633, 98 + 47 * (result - 1));
                }
                else if (ChessMove.button.x > ChessPointNow.blue3[0] &&
                         ChessMove.button.x < ChessPointNow.blue3[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.blue3[1] &&
                         ChessMove.button.y < ChessPointNow.blue3[1] + 50)
                {
                    reload("blue3", 633, 98 + 47 * (result - 1));
                }
                else if (ChessMove.button.x > ChessPointNow.blue4[0] &&
                         ChessMove.button.x < ChessPointNow.blue4[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.blue4[1] &&
                         ChessMove.button.y < ChessPointNow.blue4[1] + 50)
                {
                    reload("blue4", 633, 98 + 47 * (result - 1));
                }
                if (type == 2)
                {
                    player = 1;
                    return; // MoveChess("yellow", player, type);
                }
                else if (type == 3 || type == 4)
                {
                    player = 3;
                    return; // MoveChess("green", player, type);
                }
            }
            else if (player == 3)
            {
                if (ChessMove.button.x > ChessPointNow.green1[0] && ChessMove.button.x < ChessPointNow.green1[0] + 50 &&
                    ChessMove.button.y > ChessPointNow.green1[1] && ChessMove.button.y < ChessPointNow.green1[1] + 50)
                {
                    reload("green1", 315, 756 - 47 * (result - 1));
                }
                else if (ChessMove.button.x > ChessPointNow.green2[0] &&
                         ChessMove.button.x < ChessPointNow.green2[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.green2[1] &&
                         ChessMove.button.y < ChessPointNow.green2[1] + 50)
                {
                    reload("green2", 315, 756 - 47 * (result - 1));
                }
                else if (ChessMove.button.x > ChessPointNow.green3[0] &&
                         ChessMove.button.x < ChessPointNow.green3[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.green3[1] &&
                         ChessMove.button.y < ChessPointNow.green3[1] + 50)
                {
                    reload("green3", 315, 756 - 47 * (result - 1));
                }
                else if (ChessMove.button.x > ChessPointNow.green4[0] &&
                         ChessMove.button.x < ChessPointNow.green4[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.green4[1] &&
                         ChessMove.button.y < ChessPointNow.green4[1] + 50)
                {
                    reload("green4", 315, 756 - 47 * (result - 1));
                }
                if (type == 3)
                {
                    player = 1;
                    return; // MoveChess("yellow", player, type);
                }
                else if (type == 4)
                {
                    player = 4;
                    return; // MoveChess("red", player, type);
                }
            }
            else if (player == 4)
            {
                if (ChessMove.button.x > ChessPointNow.red1[0] && ChessMove.button.x < ChessPointNow.red1[0] + 50 &&
                    ChessMove.button.y > ChessPointNow.red1[1] && ChessMove.button.y < ChessPointNow.red1[1] + 50)
                {
                    reload("red1", 845 - 53 * (result - 1), 568);
                }
                else if (ChessMove.button.x > ChessPointNow.red2[0] &&
                         ChessMove.button.x < ChessPointNow.red2[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.red2[1] &&
                         ChessMove.button.y < ChessPointNow.red2[1] + 50)
                {
                    reload("red2", 845 - 53 * (result - 1), 568);
                }
                else if (ChessMove.button.x > ChessPointNow.red3[0] &&
                         ChessMove.button.x < ChessPointNow.red3[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.red3[1] &&
                         ChessMove.button.y < ChessPointNow.red3[1] + 50)
                {
                    reload("red3", 845 - 53 * (result - 1), 568);
                }
                else if (ChessMove.button.x > ChessPointNow.red4[0] &&
                         ChessMove.button.x < ChessPointNow.red4[0] + 50 &&
                         ChessMove.button.y > ChessPointNow.red4[1] &&
                         ChessMove.button.y < ChessPointNow.red4[1] + 50)
                {
                    reload("red4", 845 - 53 * (result - 1), 568);
                }
                player = 1;
                return; // MoveChess("yellow", player, type);
            }
        }
    }
}
void JudgeChess(int *x, int *y, int result) // 判断棋子转弯
{
    if (*x == 20 && *y == 250)
    {
        *x = 103;
        *y = 280;
        result--;
    }
    if (*x == 682 && *y == 16)
    {
        *x = 633;
        *y = 92;
        result--;
    }
    if (*x == 276 && *y == 837)
    {
        *x = 315;
        *y = 750;
        result--;
    }
    if (*x == 929 && *y == 612)
    {
        *x = 845;
        *y = 562;
        result--;
    }
    if (*x == 103 && *y - result * 47 >= 280 && *y != 280)
    {
        *y -= result * 47;
        return;
    }
    if (*x == 103 && *y - result * 47 < 280 && *y != 280)
    {
        result -= (*y - 280) / 47;
        *y = 280;
        *x += 53 * result;
        if (*x > 262)
        {
            result -= (*x - 262) / 53;
            *x = 315;
            *y -= 47 * result;
        }
        return;
    }
    if (*y == 280 && *x + result * 53 <= 262 && *x != 262 && *x < 360)
    {
        *x += result * 53;
        return;
    }
    if (*y == 280 && *x + result * 53 > 262 && *x != 262 && *x < 360)
    {
        result -= (262 - *x) / 53;
        *x = 315;
        *y -= 47 * result;
        if (*y < 92)
        {
            result -= (92 - *y) / 47;
            *y = 92;
            *x += result * 53;
        }
        return;
    }
    if ((*x == 315 || *x == 262) && *y - result * 47 >= 92 && *y != 92 && *y < 290)
    {
        if (*x == 262)
        {
            *x = 315;
        }
        *y -= result * 47;
        return;
    }
    if ((*x == 315 || *x == 262) && *y - result * 47 < 92 && *y != 92 && *y < 290)
    {
        if (*x == 262)
        {
            *x = 315;
        }
        result -= (*y - 92) / 47;
        *y = 92;
        *x += result * 53;
        return;
    }
    if (*y == 92 && *x + result * 53 <= 633 && *x != 633)
    {
        *x += result * 53;
        return;
    }
    if (*y == 92 && *x + result * 53 > 633 && *x != 633)
    {
        result -= (633 - *x) / 53;
        *x = 633;
        *y += result * 47;
        if (*y > 233)
        {
            result -= (*y - 233) / 47;
            *y = 280;
            *x += result * 53;
        }
        return;
    }
    if (*x == 633 && *y + result * 47 <= 233 && *y != 233 && *y < 290)
    {
        *y += result * 47;
        return;
    }
    if (*x == 633 && *y + result * 47 > 233 && *y != 233 && *y < 290)
    {
        result -= (233 - *y) / 47;
        *y = 280;
        *x += result * 53;
        if (*x > 845)
        {
            result -= (*x - 845) / 53;
            *x = 845;
            *y += result * 47;
        }
        return;
    }
    if ((*y == 280 || *y == 233) && *x + result * 53 <= 845 && *x != 845)
    {
        if (*y == 233)
        {
            *y = 280;
        }
        *x += result * 53;
        return;
    }
    if ((*y == 280 || *y == 233) && *x + result * 53 > 845 && *x != 845)
    {
        if (*y == 233)
        {
            *y == 280;
        }
        if (result != 0)
            result -= (845 - *x) / 53;
        *x = 845;
        *y += result * 47;
        return;
    }
    if (*x == 845 && *y + result * 47 <= 562 && *y != 562)
    {
        *y += result * 47;
        return;
    }
    if (*x == 845 && *y + result * 47 > 562 && *y != 562)
    {
        result -= (562 - *y) / 47;
        *y = 562;
        *x -= result * 53;
        if (*x < 686)
        {
            result -= (686 - *x) / 53;
            *x = 633;
            *y += result * 47;
        }
        return;
    }
    if (*y == 562 && *x - result * 53 >= 686 && *x != 686 && *x > 580)
    {
        *x -= result * 53;
        return;
    }
    if (*y == 562 && *x - result * 53 < 686 && *x != 686 && *x > 580)
    {
        result -= (*x - 686) / 53;
        *x = 633;
        *y += result * 47;
        if (*y > 750)
        {
            result -= (*y - 750);
            *y = 750;
            *x -= result * 53;
        }
        return;
    }
    if ((*x == 633 || *x == 686) && *y + 47 * result <= 750 && *y != 750)
    {
        if (*x == 686)
        {
            *x = 633;
        }
        *y += result * 47;
        return;
    }
    if ((*x == 633 || *x == 686) && *y + 47 * result > 756 && *y != 756)
    {
        if (*x == 686)
        {
            *x = 633;
        }
        result -= (756 - *y) / 47;
        *y = 750;
        *x -= result * 53;
        return;
    }
    if (*y == 750 && *x - result * 53 >= 315 && *x != 315)
    {
        *x -= result * 53;
        return;
    }
    if (*y == 750 && *x - result * 53 < 315 && *x != 315)
    {
        result -= (*x - 315) / 53;
        *x = 315;
        *y -= result * 47;
        if (*y < 609)
        {
            result -= (609 - *y) / 47;
            *y = 609;
            *x -= result * 53;
        }
        return;
    }
    if (*x == 315 && *y - result * 47 >= 609 && *y != 609)
    {
        *y -= result * 47;
        return;
    }
    if (*x == 315 && *y - result * 47 < 615 && *y != 609)
    {
        result -= (*y - 609) / 47;
        *y = 562;
        *x -= 53 * result;
        if (*x < 103)
        {
            result -= (103 - *x) / 53;
            *x = 103;
            *y -= result * 47;
        }
        return;
    }
    if ((*y == 562 || *y == 609) && *x - result * 53 >= 103 && *x != 103)
    {
        if (*y == 609)
        {
            *y = 562;
        }
        *x -= result * 53;
        return;
    }
    if ((*y == 562 || *y == 609) && *x - result * 53 < 103 && *x != 103)
    {
        if (*y == 609)
        {
            *y = 562;
        }
        result -= (*x - 103) / 53;
        *x = 103;
        *y -= result * 47;
        return;
    }
}
void EndJump(const char name[10], int *x, int *y, int result)
{
    if (!strcmp(name, "yellow"))
    {
        if (*y == 686 && *x > 103)
        {
            printf("0\n");
            *x -= result * 53;
            if (*x <= 103)
            {
                result = (103 - *x) / 53;
                *x = 103;
            }
        }
        if (*x == 103 && *y > 280)
        {
            *y -= result * 47;
            if (*y <= 421)
            {
                result = (421 - *y) / 47;
                *y = 421;
            }
        }
        if (*y == 421 && *x >= 103)
        {
            *x += result * 53;
            if (*x > 421)
            {
                result = ((*x - 421) / 53);
                *x = 421 - result * 53;
            }
            else if (*x == 421)
            {
                EndChessNum.endyellowchess++;
                *x = -200;
                *y = -200;
                return;
            }
        }
        return;
    }
    else if (!strcmp(name, "blue"))
    {
        if (*x == 315 && *y > 92)
        {
            *y -= result * 47;
            if (*y <= 92)
            {
                result = (92 - *y) / 47;
                *y = 92;
            }
        }
        if (*y == 92 && *x < 474)
        {
            *x += result * 53;
            if (*x >= 474)
            {
                result = (*x - 474) / 53;
                *x = 474;
            }
        }
        if (*x == 474 && *y <= 374)
        {
            *y += result * 47;
            if (*y > 374)
            {
                result = ((*y - 374) / 47);
                *y = 374 - result * 47;
            }
            else if (*y == 374)
            {
                EndChessNum.endbluechess++;
                *x = -300;
                *y = -300;
                return;
            }
        }
        return;
    }
    else if (!strcmp(name, "red"))
    {
        if (*y == 280 && *x < 845)
        {
            *x += result * 53;
            if (*x >= 845)
            {
                result = (*x - 845) / 53;
                *x = 845;
            }
        }
        if (*x == 845 && *y < 421)
        {
            *y += result * 47;
            if (*y >= 421)
            {
                result = (*y - 421) / 47;
                *y = 421;
            }
        }
        if (*y == 421 && *x >= 527)
        {
            *x -= result * 53;
            if (*x < 527)
            {
                result = ((527 - *x) / 53);
                *x = 527 + result * 53;
            }
            else if (*x == 527)
            {
                EndChessNum.endredchess++;
                *x = -400;
                *y = -400;
                return;
            }
        }
        return;
    }
    else if (!strcmp(name, "green"))
    {
        if (*x == 633 && *y < 750)
        {
            *y += result * 47;
            if (*y >= 750)
            {
                result = (*y - 750) / 47;
                *y = 750;
            }
        }
        if (*y == 750 && *x > 474)
        {
            *x -= result * 53;
            if (*x <= 474)
            {
                result = (474 - *x) / 53;
                *x = 474;
            }
        }
        if (*x == 474 && *y >= 468)
        {
            *y -= result * 47;
            if (*y < 468)
            {
                result = ((468 - *y) / 47);
                *y = 468 + result * 47;
            }
            else if (*y == 468)
            {
                EndChessNum.endgreenchess++;
                *x = -500;
                *y = -500;
                return;
            }
        }
        return;
    }
}
void originorder() // 初始命令行
{
    SDL_RenderCopy(Renderer, nowBackGroundTexture, NULL, &nowBackGroundRect);               // 复制画笔
    SDL_RenderPresent(Renderer);                                                            // 刷新画笔
    SDL_RenderCopy(Renderer, yellowplayBackGroundTexture, NULL, &yellowplayBackGroundRect); // 复制画笔
    SDL_RenderPresent(Renderer);                                                            // 刷新画笔
    SDL_RenderCopy(Renderer, oneBackGroundTexture, NULL, &oneBackGroundRect);               // 复制画笔
    SDL_RenderPresent(Renderer);                                                            // 刷新画笔
}
void cross()
{
    if (ChessPointNow.yellow1[0] == 686 && ChessPointNow.yellow1[1] == 280) // ��ɫ
    {
        ChessPointNow.yellow1[1] = 562;
        load_chess();
    }
    else if (ChessPointNow.yellow2[0] == 686 && ChessPointNow.yellow2[1] == 280)
    {
        ChessPointNow.yellow2[1] = 562;
        load_chess();
    }
    else if (ChessPointNow.yellow3[0] == 686 && ChessPointNow.yellow3[1] == 280)
    {
        ChessPointNow.yellow3[1] = 562;
        load_chess();
    }
    else if (ChessPointNow.yellow3[0] == 686 && ChessPointNow.yellow3[1] == 280)
    {
        ChessPointNow.yellow3[1] = 562;
        load_chess();
    }
    /////////
    if (ChessPointNow.blue1[0] == 633 && ChessPointNow.blue1[1] == 609) // ��ɫ
    {
        ChessPointNow.blue1[0] = 315;
        load_chess();
    }
    else if (ChessPointNow.blue2[0] == 633 && ChessPointNow.blue2[1] == 609) // ��ɫ
    {
        ChessPointNow.blue2[0] = 315;
        load_chess();
    }
    else if (ChessPointNow.blue3[0] == 633 && ChessPointNow.blue3[1] == 609) // ��ɫ
    {
        ChessPointNow.blue3[0] = 315;
        load_chess();
    }
    else if (ChessPointNow.blue4[0] == 633 && ChessPointNow.blue4[1] == 609) // ��ɫ
    {
        ChessPointNow.blue4[0] = 315;
        load_chess();
    }
    ////////////////
    if (ChessPointNow.green1[0] == 315 && ChessPointNow.green1[1] == 233) // ��ɫ
    {
        ChessPointNow.green1[0] = 633;
        load_chess();
    }
    else if (ChessPointNow.green2[0] == 315 && ChessPointNow.green2[1] == 233)
    {
        ChessPointNow.green2[0] = 633;
        load_chess();
    }
    else if (ChessPointNow.green3[0] == 315 && ChessPointNow.green3[1] == 233)
    {
        ChessPointNow.green3[0] = 633;
        load_chess();
    }
    else if (ChessPointNow.green4[0] == 315 && ChessPointNow.green4[1] == 233)
    {
        ChessPointNow.green4[0] = 633;
        load_chess();
    }
    //////////////
    if (ChessPointNow.red1[0] == 262 && ChessPointNow.red1[1] == 562) // ��ɫ
    {
        ChessPointNow.red1[1] = 280;
        load_chess();
    }
    else if (ChessPointNow.red2[0] == 262 && ChessPointNow.red2[1] == 562) // ��ɫ
    {
        ChessPointNow.red2[1] = 280;
        load_chess();
    }
    else if (ChessPointNow.red3[0] == 262 && ChessPointNow.red3[1] == 562) // ��ɫ
    {
        ChessPointNow.red3[1] = 280;
        load_chess();
    }
    else if (ChessPointNow.red4[0] == 262 && ChessPointNow.red4[1] == 562) // ��ɫ
    {
        ChessPointNow.red4[1] = 280;
        load_chess();
    }
}
void jump(char name[10])
{
    if (strcmp(name, "yellow1") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.yellow1[0] == YellowPoint.LeftYellowPoint[i][0] && ChessPointNow.yellow1[1] == YellowPoint.LeftYellowPoint[i][1])
            {
                ChessPointNow.yellow1[0] = YellowPoint.LeftYellowPoint[i + 1][0];
                ChessPointNow.yellow1[1] = YellowPoint.LeftYellowPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.yellow1[0] == YellowPoint.TopYellowPoint[i][0] && ChessPointNow.yellow1[1] == YellowPoint.TopYellowPoint[i][1])
            {
                ChessPointNow.yellow1[0] = YellowPoint.TopYellowPoint[i + 1][0];
                ChessPointNow.yellow1[1] = YellowPoint.TopYellowPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "yellow2") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.yellow2[0] == YellowPoint.LeftYellowPoint[i][0] && ChessPointNow.yellow2[1] == YellowPoint.LeftYellowPoint[i][1])
            {
                ChessPointNow.yellow2[0] = YellowPoint.LeftYellowPoint[i + 1][0];
                ChessPointNow.yellow2[1] = YellowPoint.LeftYellowPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.yellow2[0] == YellowPoint.TopYellowPoint[i][0] && ChessPointNow.yellow2[1] == YellowPoint.TopYellowPoint[i][1])
            {
                ChessPointNow.yellow2[0] = YellowPoint.TopYellowPoint[i + 1][0];
                ChessPointNow.yellow2[1] = YellowPoint.TopYellowPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "yellow3") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.yellow3[0] == YellowPoint.LeftYellowPoint[i][0] && ChessPointNow.yellow3[1] == YellowPoint.LeftYellowPoint[i][1])
            {
                ChessPointNow.yellow3[0] = YellowPoint.LeftYellowPoint[i + 1][0];
                ChessPointNow.yellow3[1] = YellowPoint.LeftYellowPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.yellow3[0] == YellowPoint.TopYellowPoint[i][0] && ChessPointNow.yellow3[1] == YellowPoint.TopYellowPoint[i][1])
            {
                ChessPointNow.yellow3[0] = YellowPoint.TopYellowPoint[i + 1][0];
                ChessPointNow.yellow3[1] = YellowPoint.TopYellowPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "yellow4") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.yellow4[0] == YellowPoint.LeftYellowPoint[i][0] && ChessPointNow.yellow4[1] == YellowPoint.LeftYellowPoint[i][1])
            {
                ChessPointNow.yellow4[0] = YellowPoint.LeftYellowPoint[i + 1][0];
                ChessPointNow.yellow4[1] = YellowPoint.LeftYellowPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.yellow4[0] == YellowPoint.TopYellowPoint[i][0] && ChessPointNow.yellow4[1] == YellowPoint.TopYellowPoint[i][1])
            {
                ChessPointNow.yellow4[0] = YellowPoint.TopYellowPoint[i + 1][0];
                ChessPointNow.yellow4[1] = YellowPoint.TopYellowPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    //////////////////////////////
    if (strcmp(name, "blue1") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.blue1[0] == BluePoint.LeftBluePoint[i][0] && ChessPointNow.blue1[1] == BluePoint.LeftBluePoint[i][1])
            {
                ChessPointNow.blue1[0] = BluePoint.LeftBluePoint[i + 1][0];
                ChessPointNow.blue1[1] = BluePoint.LeftBluePoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.blue1[0] == BluePoint.TopBluePoint[i][0] && ChessPointNow.blue1[1] == BluePoint.TopBluePoint[i][1])
            {
                ChessPointNow.blue1[0] = BluePoint.TopBluePoint[i + 1][0];
                ChessPointNow.blue1[1] = BluePoint.TopBluePoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "blue2") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.blue2[0] == BluePoint.LeftBluePoint[i][0] && ChessPointNow.blue2[1] == BluePoint.LeftBluePoint[i][1])
            {
                ChessPointNow.blue2[0] = BluePoint.LeftBluePoint[i + 1][0];
                ChessPointNow.blue2[1] = BluePoint.LeftBluePoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.blue2[0] == BluePoint.TopBluePoint[i][0] && ChessPointNow.blue2[1] == BluePoint.TopBluePoint[i][1])
            {
                ChessPointNow.blue2[0] = BluePoint.TopBluePoint[i + 1][0];
                ChessPointNow.blue2[1] = BluePoint.TopBluePoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "blue3") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.blue3[0] == BluePoint.LeftBluePoint[i][0] && ChessPointNow.blue3[1] == BluePoint.LeftBluePoint[i][1])
            {
                ChessPointNow.blue3[0] = BluePoint.LeftBluePoint[i + 1][0];
                ChessPointNow.blue3[1] = BluePoint.LeftBluePoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.blue3[0] == BluePoint.TopBluePoint[i][0] && ChessPointNow.blue3[1] == BluePoint.TopBluePoint[i][1])
            {
                ChessPointNow.blue3[0] = BluePoint.TopBluePoint[i + 1][0];
                ChessPointNow.blue3[1] = BluePoint.TopBluePoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "blue4") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.blue4[0] == BluePoint.LeftBluePoint[i][0] && ChessPointNow.blue4[1] == BluePoint.LeftBluePoint[i][1])
            {
                ChessPointNow.blue4[0] = BluePoint.LeftBluePoint[i + 1][0];
                ChessPointNow.blue4[1] = BluePoint.LeftBluePoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.blue4[0] == BluePoint.TopBluePoint[i][0] && ChessPointNow.blue4[1] == BluePoint.TopBluePoint[i][1])
            {
                ChessPointNow.blue4[0] = BluePoint.TopBluePoint[i + 1][0];
                ChessPointNow.blue4[1] = BluePoint.TopBluePoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    /////////////////////////////
    if (strcmp(name, "green1") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.green1[0] == GreenPoint.LeftGreenPoint[i][0] && ChessPointNow.green1[1] == GreenPoint.LeftGreenPoint[i][1])
            {
                ChessPointNow.green1[0] = GreenPoint.LeftGreenPoint[i + 1][0];
                ChessPointNow.green1[1] = GreenPoint.LeftGreenPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.green1[0] == GreenPoint.TopGreenPoint[i][0] && ChessPointNow.green1[1] == GreenPoint.TopGreenPoint[i][1])
            {
                ChessPointNow.green1[0] = GreenPoint.TopGreenPoint[i + 1][0];
                ChessPointNow.green1[1] = GreenPoint.TopGreenPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "green2") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.green2[0] == GreenPoint.LeftGreenPoint[i][0] && ChessPointNow.green2[1] == GreenPoint.LeftGreenPoint[i][1])
            {
                ChessPointNow.green2[0] = GreenPoint.LeftGreenPoint[i + 1][0];
                ChessPointNow.green2[1] = GreenPoint.LeftGreenPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.green2[0] == GreenPoint.TopGreenPoint[i][0] && ChessPointNow.green2[1] == GreenPoint.TopGreenPoint[i][1])
            {
                ChessPointNow.green2[0] = GreenPoint.TopGreenPoint[i + 1][0];
                ChessPointNow.green2[1] = GreenPoint.TopGreenPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "green3") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.green3[0] == GreenPoint.LeftGreenPoint[i][0] && ChessPointNow.green3[1] == GreenPoint.LeftGreenPoint[i][1])
            {
                ChessPointNow.green3[0] = GreenPoint.LeftGreenPoint[i + 1][0];
                ChessPointNow.green3[1] = GreenPoint.LeftGreenPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.green3[0] == GreenPoint.TopGreenPoint[i][0] && ChessPointNow.green3[1] == GreenPoint.TopGreenPoint[i][1])
            {
                ChessPointNow.green3[0] = GreenPoint.TopGreenPoint[i + 1][0];
                ChessPointNow.green3[1] = GreenPoint.TopGreenPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "green4") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.green4[0] == GreenPoint.LeftGreenPoint[i][0] && ChessPointNow.green4[1] == GreenPoint.LeftGreenPoint[i][1])
            {
                ChessPointNow.green4[0] = GreenPoint.LeftGreenPoint[i + 1][0];
                ChessPointNow.green4[1] = GreenPoint.LeftGreenPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.green4[0] == GreenPoint.TopGreenPoint[i][0] && ChessPointNow.green4[1] == GreenPoint.TopGreenPoint[i][1])
            {
                ChessPointNow.green4[0] = GreenPoint.TopGreenPoint[i + 1][0];
                ChessPointNow.green4[1] = GreenPoint.TopGreenPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    /////////////////////////////////
    if (strcmp(name, "red1") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.red1[0] == RedPoint.LeftRedPoint[i][0] && ChessPointNow.red1[1] == RedPoint.LeftRedPoint[i][1])
            {
                ChessPointNow.red1[0] = RedPoint.LeftRedPoint[i + 1][0];
                ChessPointNow.red1[1] = RedPoint.LeftRedPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.red1[0] == RedPoint.TopRedPoint[i][0] && ChessPointNow.red1[1] == RedPoint.TopRedPoint[i][1])
            {
                ChessPointNow.red1[0] = RedPoint.TopRedPoint[i + 1][0];
                ChessPointNow.red1[1] = RedPoint.TopRedPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "red2") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.red2[0] == RedPoint.LeftRedPoint[i][0] && ChessPointNow.red2[1] == RedPoint.LeftRedPoint[i][1])
            {
                ChessPointNow.red2[0] = RedPoint.LeftRedPoint[i + 1][0];
                ChessPointNow.red2[1] = RedPoint.LeftRedPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.red2[0] == RedPoint.TopRedPoint[i][0] && ChessPointNow.red2[1] == RedPoint.TopRedPoint[i][1])
            {
                ChessPointNow.red2[0] = RedPoint.TopRedPoint[i + 1][0];
                ChessPointNow.red2[1] = RedPoint.TopRedPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "red3") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.red3[0] == RedPoint.LeftRedPoint[i][0] && ChessPointNow.red3[1] == RedPoint.LeftRedPoint[i][1])
            {
                ChessPointNow.red3[0] = RedPoint.LeftRedPoint[i + 1][0];
                ChessPointNow.red3[1] = RedPoint.LeftRedPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.red3[0] == RedPoint.TopRedPoint[i][0] && ChessPointNow.red3[1] == RedPoint.TopRedPoint[i][1])
            {
                ChessPointNow.red3[0] = RedPoint.TopRedPoint[i + 1][0];
                ChessPointNow.red3[1] = RedPoint.TopRedPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
    if (strcmp(name, "red4") == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (ChessPointNow.red4[0] == RedPoint.LeftRedPoint[i][0] && ChessPointNow.red4[1] == RedPoint.LeftRedPoint[i][1])
            {
                ChessPointNow.red4[0] = RedPoint.LeftRedPoint[i + 1][0];
                ChessPointNow.red4[1] = RedPoint.LeftRedPoint[i + 1][1];
                load_chess();
                return;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            if (ChessPointNow.red4[0] == RedPoint.TopRedPoint[i][0] && ChessPointNow.red4[1] == RedPoint.TopRedPoint[i][1])
            {
                ChessPointNow.red4[0] = RedPoint.TopRedPoint[i + 1][0];
                ChessPointNow.red4[1] = RedPoint.TopRedPoint[i + 1][1];
                load_chess();
                return;
            }
        }
    }
}
void attack(char *name, int x, int y)
{
    SDL_RenderCopy(Renderer, TapBackGroundTexture, NULL, &TapBackGroundRect);
    SDL_RenderPresent(Renderer);
    if (!strcmp(name, "yellow"))
    {
        if (ChessPointNow.blue1[0] == x && ChessPointNow.blue1[1] == y)
        {
            ChessPointNow.blue1[0] = 800;
            ChessPointNow.blue1[1] = 75;
            load_chess();
            StartedChess.BlueEndChess[0] = 0;
            EndChessNum.BlueEndChess[0] = 0;
        }
        else if (ChessPointNow.blue2[0] == x && ChessPointNow.blue2[1] == y)
        {
            ChessPointNow.blue2[0] = 800;
            ChessPointNow.blue2[1] = 145;
            load_chess();
            StartedChess.BlueEndChess[1] = 0;
            EndChessNum.BlueEndChess[1] = 0;
        }
        else if (ChessPointNow.blue3[0] == x && ChessPointNow.blue3[1] == y)
        {
            ChessPointNow.blue3[0] = 875;
            ChessPointNow.blue3[1] = 75;
            load_chess();
            StartedChess.BlueEndChess[2] = 0;
            EndChessNum.BlueEndChess[2] = 0;
        }
        else if (ChessPointNow.blue4[0] == x && ChessPointNow.blue4[1] == y)
        {
            ChessPointNow.blue4[0] = 875;
            ChessPointNow.blue4[1] = 145;
            load_chess();
            StartedChess.BlueEndChess[3] = 0;
            EndChessNum.BlueEndChess[3] = 0;
        }
        //////蓝色
        else if (ChessPointNow.green1[0] == x && ChessPointNow.green1[1] == y)
        {
            ChessPointNow.green1[0] = 85;
            ChessPointNow.green1[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[0] = 0;
            EndChessNum.GreenEndChess[0] = 0;
        }
        else if (ChessPointNow.green2[0] == x && ChessPointNow.green2[1] == y)
        {
            ChessPointNow.green2[0] = 85;
            ChessPointNow.green2[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[1] = 0;
            EndChessNum.GreenEndChess[1] = 0;
        }
        else if (ChessPointNow.green3[0] == x && ChessPointNow.green3[1] == y)
        {
            ChessPointNow.green3[0] = 165;
            ChessPointNow.green3[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[2] = 0;
            EndChessNum.GreenEndChess[2] = 0;
        }
        else if (ChessPointNow.green4[0] == x && ChessPointNow.green4[1] == y)
        {
            ChessPointNow.green4[0] = 165;
            ChessPointNow.green4[1] = 790;
            load_chess();
            StartedChess.GreenEndChess[3] = 0;
            EndChessNum.GreenEndChess[3] = 0;
        }
        //////绿色
        else if (ChessPointNow.red1[0] == x && ChessPointNow.red1[1] == y)
        {
            ChessPointNow.red1[0] = 795;
            ChessPointNow.red1[1] = 710;
            load_chess();
            StartedChess.RedEndChess[0] = 0;
            EndChessNum.RedEndChess[0] = 0;
        }
        else if (ChessPointNow.red2[0] == x && ChessPointNow.red2[1] == y)
        {
            ChessPointNow.red2[0] = 795;
            ChessPointNow.red2[1] = 790;
            load_chess();
            StartedChess.RedEndChess[1] = 0;
            EndChessNum.RedEndChess[1] = 0;
        }
        else if (ChessPointNow.red3[0] == x && ChessPointNow.red3[1] == y)
        {
            ChessPointNow.red3[0] = 880;
            ChessPointNow.red3[1] = 710;
            load_chess();
            StartedChess.RedEndChess[2] = 0;
            EndChessNum.RedEndChess[2] = 0;
        }
        else if (ChessPointNow.red4[0] == x && ChessPointNow.red4[1] == y)
        {
            ChessPointNow.red4[0] = 880;
            ChessPointNow.red4[1] = 790;
            load_chess();
            StartedChess.RedEndChess[3] = 0;
            EndChessNum.RedEndChess[3] = 0;
        }
    }
    else if (!strcmp(name, "blue"))
    {
        if (ChessPointNow.yellow1[0] == x && ChessPointNow.yellow1[1] == y)
        {
            ChessPointNow.yellow1[0] = 85;
            ChessPointNow.yellow1[1] = 68;
            load_chess();
            StartedChess.YellowEndChess[0] = 0;
            EndChessNum.YellowEndChess[0] = 0;
        }
        else if (ChessPointNow.yellow2[0] == x && ChessPointNow.yellow2[1] == y)
        {
            ChessPointNow.yellow2[0] = 163;
            ChessPointNow.yellow2[1] = 68;
            load_chess();
            StartedChess.YellowEndChess[1] = 0;
            EndChessNum.YellowEndChess[1] = 0;
        }
        else if (ChessPointNow.yellow3[0] == x && ChessPointNow.yellow3[1] == y)
        {
            ChessPointNow.yellow3[0] = 85;
            ChessPointNow.yellow3[1] = 145;
            load_chess();
            StartedChess.YellowEndChess[2] = 0;
            EndChessNum.YellowEndChess[2] = 0;
        }
        else if (ChessPointNow.yellow4[0] == x && ChessPointNow.yellow4[1] == y)
        {
            ChessPointNow.yellow4[0] = 163;
            ChessPointNow.yellow4[1] = 145;
            load_chess();
            StartedChess.YellowEndChess[3] = 0;
            EndChessNum.YellowEndChess[3] = 0;
        }
        //////黄色
        else if (ChessPointNow.green1[0] == x && ChessPointNow.green1[1] == y)
        {
            ChessPointNow.green1[0] = 85;
            ChessPointNow.green1[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[0] = 0;
            EndChessNum.GreenEndChess[0] = 0;
        }
        else if (ChessPointNow.green2[0] == x && ChessPointNow.green2[1] == y)
        {
            ChessPointNow.green2[0] = 85;
            ChessPointNow.green2[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[1] = 0;
            EndChessNum.GreenEndChess[1] = 0;
        }
        else if (ChessPointNow.green3[0] == x && ChessPointNow.green3[1] == y)
        {
            ChessPointNow.green3[0] = 165;
            ChessPointNow.green3[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[2] = 0;
            EndChessNum.GreenEndChess[2] = 0;
        }
        else if (ChessPointNow.green4[0] == x && ChessPointNow.green4[1] == y)
        {
            ChessPointNow.green4[0] = 165;
            ChessPointNow.green4[1] = 790;
            load_chess();
            StartedChess.GreenEndChess[3] = 0;
            EndChessNum.GreenEndChess[3] = 0;
        }
        //////绿色
        else if (ChessPointNow.red1[0] == x && ChessPointNow.red1[1] == y)
        {
            ChessPointNow.red1[0] = 795;
            ChessPointNow.red1[1] = 710;
            load_chess();
            StartedChess.RedEndChess[0] = 0;
            EndChessNum.RedEndChess[0] = 0;
        }
        else if (ChessPointNow.red2[0] == x && ChessPointNow.red2[1] == y)
        {
            ChessPointNow.red2[0] = 795;
            ChessPointNow.red2[1] = 790;
            load_chess();
            StartedChess.RedEndChess[1] = 0;
            EndChessNum.RedEndChess[1] = 0;
        }
        else if (ChessPointNow.red3[0] == x && ChessPointNow.red3[1] == y)
        {
            ChessPointNow.red3[0] = 880;
            ChessPointNow.red3[1] = 710;
            load_chess();
            StartedChess.RedEndChess[2] = 0;
            EndChessNum.RedEndChess[2] = 0;
        }
        else if (ChessPointNow.red4[0] == x && ChessPointNow.red4[1] == y)
        {
            ChessPointNow.red4[0] = 880;
            ChessPointNow.red4[1] = 790;
            load_chess();
            StartedChess.RedEndChess[3] = 0;
            EndChessNum.RedEndChess[3] = 0;
        }
    }
    else if (!strcmp(name, "green"))
    {
        if (ChessPointNow.yellow1[0] == x && ChessPointNow.yellow1[1] == y)
        {
            ChessPointNow.yellow1[0] = 85;
            ChessPointNow.yellow1[1] = 68;
            load_chess();
            StartedChess.YellowEndChess[0] = 0;
            EndChessNum.YellowEndChess[0] = 0;
        }
        else if (ChessPointNow.yellow2[0] == x && ChessPointNow.yellow2[1] == y)
        {
            ChessPointNow.yellow2[0] = 163;
            ChessPointNow.yellow2[1] = 68;
            load_chess();
            StartedChess.YellowEndChess[1] = 0;
            EndChessNum.YellowEndChess[1] = 0;
        }
        else if (ChessPointNow.yellow3[0] == x && ChessPointNow.yellow3[1] == y)
        {
            ChessPointNow.yellow3[0] = 85;
            ChessPointNow.yellow3[1] = 145;
            load_chess();
            StartedChess.YellowEndChess[2] = 0;
            EndChessNum.YellowEndChess[2] = 0;
        }
        else if (ChessPointNow.yellow4[0] == x && ChessPointNow.yellow4[1] == y)
        {
            ChessPointNow.yellow4[0] = 163;
            ChessPointNow.yellow4[1] = 145;
            load_chess();
            StartedChess.YellowEndChess[3] = 0;
            EndChessNum.YellowEndChess[3] = 0;
        }
        //////黄色
        else if (ChessPointNow.blue1[0] == x && ChessPointNow.blue1[1] == y)
        {
            ChessPointNow.blue1[0] = 800;
            ChessPointNow.blue1[1] = 75;
            load_chess();
            StartedChess.BlueEndChess[0] = 0;
            EndChessNum.BlueEndChess[0] = 0;
        }
        else if (ChessPointNow.blue2[0] == x && ChessPointNow.blue2[1] == y)
        {
            ChessPointNow.blue2[0] = 800;
            ChessPointNow.blue2[1] = 145;
            load_chess();
            StartedChess.BlueEndChess[1] = 0;
            EndChessNum.BlueEndChess[1] = 0;
        }
        else if (ChessPointNow.blue3[0] == x && ChessPointNow.blue3[1] == y)
        {
            ChessPointNow.blue3[0] = 875;
            ChessPointNow.blue3[1] = 75;
            load_chess();
            StartedChess.BlueEndChess[2] = 0;
            EndChessNum.BlueEndChess[2] = 0;
        }
        else if (ChessPointNow.blue4[0] == x && ChessPointNow.blue4[1] == y)
        {
            ChessPointNow.blue4[0] = 875;
            ChessPointNow.blue4[1] = 145;
            load_chess();
            StartedChess.BlueEndChess[3] = 0;
            EndChessNum.BlueEndChess[3] = 0;
        }
        //////蓝色
        else if (ChessPointNow.red1[0] == x && ChessPointNow.red1[1] == y)
        {
            ChessPointNow.red1[0] = 795;
            ChessPointNow.red1[1] = 710;
            load_chess();
            StartedChess.RedEndChess[0] = 0;
            EndChessNum.RedEndChess[0] = 0;
        }
        else if (ChessPointNow.red2[0] == x && ChessPointNow.red2[1] == y)
        {
            ChessPointNow.red2[0] = 795;
            ChessPointNow.red2[1] = 790;
            load_chess();
            StartedChess.RedEndChess[1] = 0;
            EndChessNum.RedEndChess[1] = 0;
        }
        else if (ChessPointNow.red3[0] == x && ChessPointNow.red3[1] == y)
        {
            ChessPointNow.red3[0] = 880;
            ChessPointNow.red3[1] = 710;
            load_chess();
            StartedChess.RedEndChess[2] = 0;
            EndChessNum.RedEndChess[2] = 0;
        }
        else if (ChessPointNow.red4[0] == x && ChessPointNow.red4[1] == y)
        {
            ChessPointNow.red4[0] = 880;
            ChessPointNow.red4[1] = 790;
            load_chess();
            StartedChess.RedEndChess[3] = 0;
            EndChessNum.RedEndChess[3] = 0;
        }
    }
    else if (!strcmp(name, "red"))
    {
        if (ChessPointNow.yellow1[0] == x && ChessPointNow.yellow1[1] == y)
        {
            ChessPointNow.yellow1[0] = 85;
            ChessPointNow.yellow1[1] = 68;
            load_chess();
            StartedChess.YellowEndChess[0] = 0;
            EndChessNum.YellowEndChess[0] = 0;
        }
        else if (ChessPointNow.yellow2[0] == x && ChessPointNow.yellow2[1] == y)
        {
            ChessPointNow.yellow2[0] = 163;
            ChessPointNow.yellow2[1] = 68;
            load_chess();
            StartedChess.YellowEndChess[1] = 0;
            EndChessNum.YellowEndChess[1] = 0;
        }
        else if (ChessPointNow.yellow3[0] == x && ChessPointNow.yellow3[1] == y)
        {
            ChessPointNow.yellow3[0] = 85;
            ChessPointNow.yellow3[1] = 145;
            load_chess();
            StartedChess.YellowEndChess[2] = 0;
            EndChessNum.YellowEndChess[2] = 0;
        }
        else if (ChessPointNow.yellow4[0] == x && ChessPointNow.yellow4[1] == y)
        {
            ChessPointNow.yellow4[0] = 163;
            ChessPointNow.yellow4[1] = 145;
            load_chess();
            StartedChess.YellowEndChess[3] = 0;
            EndChessNum.YellowEndChess[3] = 0;
        }
        //////黄色
        else if (ChessPointNow.blue1[0] == x && ChessPointNow.blue1[1] == y)
        {
            ChessPointNow.blue1[0] = 800;
            ChessPointNow.blue1[1] = 75;
            load_chess();
            StartedChess.BlueEndChess[0] = 0;
            EndChessNum.BlueEndChess[0] = 0;
        }
        else if (ChessPointNow.blue2[0] == x && ChessPointNow.blue2[1] == y)
        {
            ChessPointNow.blue2[0] = 800;
            ChessPointNow.blue2[1] = 145;
            load_chess();
            StartedChess.BlueEndChess[1] = 0;
            EndChessNum.BlueEndChess[1] = 0;
        }
        else if (ChessPointNow.blue3[0] == x && ChessPointNow.blue3[1] == y)
        {
            ChessPointNow.blue3[0] = 875;
            ChessPointNow.blue3[1] = 75;
            load_chess();
            StartedChess.BlueEndChess[2] = 0;
            EndChessNum.BlueEndChess[2] = 0;
        }
        else if (ChessPointNow.blue4[0] == x && ChessPointNow.blue4[1] == y)
        {
            ChessPointNow.blue4[0] = 875;
            ChessPointNow.blue4[1] = 145;
            load_chess();
            StartedChess.BlueEndChess[3] = 0;
            EndChessNum.BlueEndChess[3] = 0;
        }
        //////蓝色
        else if (ChessPointNow.green1[0] == x && ChessPointNow.green1[1] == y)
        {
            ChessPointNow.green1[0] = 85;
            ChessPointNow.green1[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[0] = 0;
            EndChessNum.GreenEndChess[0] = 0;
        }
        else if (ChessPointNow.green2[0] == x && ChessPointNow.green2[1] == y)
        {
            ChessPointNow.green2[0] = 85;
            ChessPointNow.green2[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[1] = 0;
            EndChessNum.GreenEndChess[1] = 0;
        }
        else if (ChessPointNow.green3[0] == x && ChessPointNow.green3[1] == y)
        {
            ChessPointNow.green3[0] = 165;
            ChessPointNow.green3[1] = 710;
            load_chess();
            StartedChess.GreenEndChess[2] = 0;
            EndChessNum.GreenEndChess[2] = 0;
        }
        else if (ChessPointNow.green4[0] == x && ChessPointNow.green4[1] == y)
        {
            ChessPointNow.green4[0] = 165;
            ChessPointNow.green4[1] = 790;
            load_chess();
            StartedChess.GreenEndChess[3] = 0;
            EndChessNum.GreenEndChess[3] = 0;
        }
        //////绿色
    }
}
void end()
{
    if (EndChessNum.endyellowchess == 4)
    {
        SDL_RenderCopy(Renderer, ywinBackGroundTexture, NULL, &ywinBackGroundRect); // 复制画笔
        SDL_RenderPresent(Renderer);
        over(); // 刷新画笔
    }
    else if (EndChessNum.endbluechess == 4)
    {
        SDL_RenderCopy(Renderer, bwinBackGroundTexture, NULL, &bwinBackGroundRect); // 复制画笔
        SDL_RenderPresent(Renderer);
        over();
    }
    else if (EndChessNum.endgreenchess == 4)
    {
        SDL_RenderCopy(Renderer, gwinBackGroundTexture, NULL, &gwinBackGroundRect); // 复制画笔
        SDL_RenderPresent(Renderer);
        over();
    }
    else if (EndChessNum.endredchess == 4)
    {
        SDL_RenderCopy(Renderer, rwinBackGroundTexture, NULL, &rwinBackGroundRect); // 复制画笔
        SDL_RenderPresent(Renderer);
        over();
    }
}
void over()
{
    SDL_Event overEvent; // 主事件
    while (SDL_WaitEvent(&overEvent))
    {
        switch (overEvent.type) // 事件类型
        {
        case SDL_KEYDOWN:
            switch (overEvent.key.keysym.sym)
            case SDLK_SPACE:
                quit();
        default:
            break;
        }
    }
}
// 函数区

// 棋子大小 50x50