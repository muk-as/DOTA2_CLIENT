#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_SpeechBubbleInfo.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xcd0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "int m_nTutorialState"
        // static metadata: MNetworkVarNames "int m_nTaskProgress"
        // static metadata: MNetworkVarNames "int m_nTaskSteps"
        // static metadata: MNetworkVarNames "int m_nTaskSecondsRemianing"
        // static metadata: MNetworkVarNames "int m_nUIState"
        // static metadata: MNetworkVarNames "int m_nShopState"
        // static metadata: MNetworkVarNames "Vector m_TargetLocation"
        // static metadata: MNetworkVarNames "C_SpeechBubbleInfo m_SpeechBubbles"
        // static metadata: MNetworkVarNames "int m_nLocationID"
        // static metadata: MNetworkVarNames "char m_GuideStr"
        // static metadata: MNetworkVarNames "char m_QuickBuyStr"
        #pragma pack(push, 1)
        class C_DotaTutorialNetworker : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nTutorialState; // 0x510            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskProgress; // 0x514            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskSteps; // 0x518            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskSecondsRemianing; // 0x51c            
            // metadata: MNetworkEnable
            std::int32_t m_nUIState; // 0x520            
            // metadata: MNetworkEnable
            std::int32_t m_nShopState; // 0x524            
            // metadata: MNetworkEnable
            Vector m_TargetLocation; // 0x528            
            // m_TargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_TargetEntity;
            char m_TargetEntity[0x4]; // 0x534            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "m_SpeechBubbles"
            // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_SpeechBubbleInfo> m_SpeechBubbles;
            char m_SpeechBubbles[0x578]; // 0x538            
            // metadata: MNetworkEnable
            std::int32_t m_nLocationID; // 0xab0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGuideChanged"
            char m_GuideStr[256]; // 0xab4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuyChanged"
            char m_QuickBuyStr[256]; // 0xbb4            
            std::int32_t m_nPreTutorialState; // 0xcb4            
            std::int32_t m_nPreUIState; // 0xcb8            
            std::int32_t m_nPreShopState; // 0xcbc            
            Vector m_vecPrevTargetLocation; // 0xcc0            
            // m_hPrevTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrevTargetEntity;
            char m_hPrevTargetEntity[0x4]; // 0xccc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DotaTutorialNetworker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DotaTutorialNetworker) == 0xcd0);
    };
};
