#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_SpeechBubbleInfo.hpp"

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
        // Size: 0x1410
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "C_SpeechBubbleInfo m_SpeechBubbles"
        #pragma pack(push, 1)
        class C_SpeechBubbleManager : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "m_SpeechBubbles"
            // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_SpeechBubbleInfo> m_SpeechBubbles;
            char m_SpeechBubbles[0x578]; // 0x5e8            
            uint8_t _pad0b60[0x840]; // 0xb60
            std::uint32_t m_nLastCountInQueue[4]; // 0x13a0            
            uint8_t _pad13b0[0x60];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SpeechBubbleManager because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SpeechBubbleManager) == 0x1410);
    };
};
