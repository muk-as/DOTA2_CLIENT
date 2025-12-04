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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            std::int32_t m_nTutorialState; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskProgress; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskSteps; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTaskSecondsRemianing; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nUIState; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nShopState; // 0x_            
            // metadata: MNetworkEnable
            Vector m_TargetLocation; // 0x_            
            // m_TargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_TargetEntity;
            char m_TargetEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "m_SpeechBubbles"
            // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_SpeechBubbleInfo> m_SpeechBubbles;
            char m_SpeechBubbles[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nLocationID; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGuideChanged"
            char m_GuideStr[256]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuyChanged"
            char m_QuickBuyStr[256]; // 0x_            
            std::int32_t m_nPreTutorialState; // 0x_            
            std::int32_t m_nPreUIState; // 0x_            
            std::int32_t m_nPreShopState; // 0x_            
            Vector m_vecPrevTargetLocation; // 0x_            
            // m_hPrevTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrevTargetEntity;
            char m_hPrevTargetEntity[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DotaTutorialNetworker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DotaTutorialNetworker) == 0x_);
    };
};
