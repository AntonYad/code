#define 等于  =

整形 从0加到99（）
{
	定义 整形 计数器 初始值为零；
	定义 整形 临时变量 初始值为零；
	反复循环
	{
			计数器 = 计数器 + 临时变量；
			临时变量 自增；
	}直到（临时变量 大于等于 100）；
	返回 计数器；
}

整形 主函数（）
{
	定义 整形 和 等于 从0加到99（）；
	输出 和；
	返回 零；
}