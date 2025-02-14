// 没有版权

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GASCharacterBase.generated.h"

//标记抽象类
UCLASS(Abstract)
class GAS_API AGASCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// 设置默认值
	AGASCharacterBase();

protected:
	//在游戏开始或生成时调用
	virtual void BeginPlay() override;

	//基类中 不需要 每帧运行 和 角色控制
};

