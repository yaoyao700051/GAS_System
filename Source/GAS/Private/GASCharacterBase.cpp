// 没有版权


#include "GASCharacterBase.h"

// 设置默认值
AGASCharacterBase::AGASCharacterBase()
{
	// 将这个角色设置为每帧调用Tick（）。如果您不需要它，可以关闭它以提高性能。
	PrimaryActorTick.bCanEverTick = false;

}

// 在游戏开始或生成时调用
void AGASCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}



