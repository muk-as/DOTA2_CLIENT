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
        // Size: 0xda0
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
            std::int32_t m_nTutorialState; // 0x5e0            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskProgress; // 0x5e4            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskSteps; // 0x5e8            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskSecondsRemianing; // 0x5ec            
            // metadata: MNetworkEnable
            std::int32_t m_nUIState; // 0x5f0            
            // metadata: MNetworkEnable
            std::int32_t m_nShopState; // 0x5f4            
            // metadata: MNetworkEnable
            Vector m_TargetLocation; // 0x5f8            
            // m_TargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_TargetEntity;
            char m_TargetEntity[0x4]; // 0x604            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "m_SpeechBubbles"
            // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_SpeechBubbleInfo> m_SpeechBubbles;
            char m_SpeechBubbles[0x578]; // 0x608            
            // metadata: MNetworkEnable
            std::int32_t m_nLocationID; // 0xb80            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGuideChanged"
            char m_GuideStr[256]; // 0xb84            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuyChanged"
            char m_QuickBuyStr[256]; // 0xc84            
            std::int32_t m_nPreTutorialState; // 0xd84            
            std::int32_t m_nPreUIState; // 0xd88            
            std::int32_t m_nPreShopState; // 0xd8c            
            Vector m_vecPrevTargetLocation; // 0xd90            
            // m_hPrevTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrevTargetEntity;
            char m_hPrevTargetEntity[0x4]; // 0xd9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DotaTutorialNetworker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DotaTutorialNetworker) == 0xda0);
    };
};
