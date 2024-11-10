#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CSpeechBubbleInfo.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa60
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "CSpeechBubbleInfo m_SpeechBubbles"
    #pragma pack(push, 1)
    class CSpeechBubbleManager : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "m_SpeechBubbles"
        // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::CSpeechBubbleInfo> m_SpeechBubbles;
        char m_SpeechBubbles[0x578]; // 0x4e0        
        uint16_t m_unBubbleCount; // 0xa58        
        [[maybe_unused]] std::uint8_t pad_0xa5a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSpeechBubbleManager because it is not a standard-layout class
    static_assert(sizeof(CSpeechBubbleManager) == 0xa60);
};
