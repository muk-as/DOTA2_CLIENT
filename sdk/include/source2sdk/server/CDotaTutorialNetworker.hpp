#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CSpeechBubbleInfo.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
        // static metadata: MNetworkVarNames "CSpeechBubbleInfo m_SpeechBubbles"
        // static metadata: MNetworkVarNames "int m_nLocationID"
        // static metadata: MNetworkVarNames "char m_GuideStr"
        // static metadata: MNetworkVarNames "char m_QuickBuyStr"
        #pragma pack(push, 1)
        class CDotaTutorialNetworker : public source2sdk::server::CBaseEntity
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "m_SpeechBubbles"
            // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CSpeechBubbleInfo> m_SpeechBubbles;
            char m_SpeechBubbles[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nLocationID; // 0x_            
            // metadata: MNetworkEnable
            char m_GuideStr[256]; // 0x_            
            // metadata: MNetworkEnable
            char m_QuickBuyStr[256]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaTutorialNetworker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaTutorialNetworker) == 0x_);
    };
};
