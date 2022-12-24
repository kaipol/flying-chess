#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// 函数声明
void load();                    // 加载图片
void start();                   // 开始游戏
void rule();                    // 游戏规则
void quit();                    // 退出游戏
void type_chose();              // 游戏模式选择
void p_c_fight();               // 人机对战
void p_p_fight();               // 人人对战
void begin(int);                // 进入棋盘 二人
void load_chess();              // 初始棋子位置
void load_greenchess(int, int); // 加载棋子
void load_yellowchess(int, int);
void load_redchess(int, int);
void load_bluechess(int, int);
void pp(int); // 玩家名称
void pc(int); // 电脑名称
int Dice_point(const char *);
void Load_dice(int, const char *);
void reload(const char *, int, int);
void TurnChess(int, int);
void MoveChess(const char *, int, int);
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
int type = 0;
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
struct YellowJumpPonint
{
    int LeftYellowPoint[5][2];   // 飞行点之前
    int TopYellowPoint[8][2];    // 飞行点之后
    int RightYellowPoint[1][2];  // 进终点
    int FlyingYellowPoint[1][2]; // 飞行点
    int EndYellowPoint[1][2];    // 终点
    int StartYellowPoint[1][2];  // 起飞点
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
    int StartBluePoint[1][2];  // 起飞点
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
    int StartRedPoint[1][2];  // 起飞点
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
    int StartYellowPoint[1][2]; // 起飞点
} GreenPoint = {{{315, 703}, {209, 562}, {103, 468}, {103, 280}, {315, 233}},
                {{368, 92}, {580, 92}, {633, 233}, {845, 280}, {845, 468}, {739, 562}, {633, 703}, {474, 750}},
                {{474, 750}},
                {{315, 233}},
                {{474, 468}},
                {{276, 837}}};
// 主函数