#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_SpeechBubbleInfo.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xce0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nTutorialState"
    // static metadata: MNetworkVarNames "int m_nTaskProgress"
    // static metadata: MNetworkVarNames "int m_nTaskSteps"
    // static metadata: MNetworkVarNames "int m_nTaskSecondsRemianing"
    // static metadata: MNetworkVarNames "int m_nUIState"
    // static metadata: MNetworkVarNames "int m_nShopState"
    // static metadata: MNetworkVarNames "Vector m_TargetLocation"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_TargetEntity"
    // static metadata: MNetworkVarNames "C_SpeechBubbleInfo m_SpeechBubbles"
    // static metadata: MNetworkVarNames "int m_nLocationID"
    // static metadata: MNetworkVarNames "char m_GuideStr"
    // static metadata: MNetworkVarNames "char m_QuickBuyStr"
    #pragma pack(push, 1)
    class C_DotaTutorialNetworker : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nTutorialState; // 0x538        
        // metadata: MNetworkEnable
        int32_t m_nTaskProgress; // 0x53c        
        // metadata: MNetworkEnable
        int32_t m_nTaskSteps; // 0x540        
        // metadata: MNetworkEnable
        int32_t m_nTaskSecondsRemianing; // 0x544        
        // metadata: MNetworkEnable
        int32_t m_nUIState; // 0x548        
        // metadata: MNetworkEnable
        int32_t m_nShopState; // 0x54c        
        // metadata: MNetworkEnable
        Vector m_TargetLocation; // 0x550        
        // metadata: MNetworkEnable
        // metadata: MNetworkDisable
        // m_TargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_TargetEntity;
        char m_TargetEntity[0x4]; // 0x55c        
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "m_SpeechBubbles"
        // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::C_SpeechBubbleInfo> m_SpeechBubbles;
        char m_SpeechBubbles[0x560]; // 0x560        
        // metadata: MNetworkEnable
        int32_t m_nLocationID; // 0xac0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGuideChanged"
        char m_GuideStr[256]; // 0xac4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnQuickBuyChanged"
        char m_QuickBuyStr[256]; // 0xbc4        
        int32_t m_nPreTutorialState; // 0xcc4        
        int32_t m_nPreUIState; // 0xcc8        
        int32_t m_nPreShopState; // 0xccc        
        Vector m_vecPrevTargetLocation; // 0xcd0        
        // m_hPrevTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPrevTargetEntity;
        char m_hPrevTargetEntity[0x4]; // 0xcdc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DotaTutorialNetworker because it is not a standard-layout class
    static_assert(sizeof(C_DotaTutorialNetworker) == 0xce0);
};
