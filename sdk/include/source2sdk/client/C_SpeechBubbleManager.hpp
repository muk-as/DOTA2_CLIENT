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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1368
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "C_SpeechBubbleInfo m_SpeechBubbles"
    #pragma pack(push, 1)
    class C_SpeechBubbleManager : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "m_SpeechBubbles"
        // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::C_SpeechBubbleInfo> m_SpeechBubbles;
        char m_SpeechBubbles[0x560]; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0xa98[0x840]; // 0xa98
        uint32_t m_nLastCountInQueue[4]; // 0x12d8        
        [[maybe_unused]] std::uint8_t pad_0x12e8[0x80];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SpeechBubbleManager because it is not a standard-layout class
    static_assert(sizeof(C_SpeechBubbleManager) == 0x1368);
};
