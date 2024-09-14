#pragma once
#include "source2sdk/server/CMarkupVolume.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7c8
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CMarkupVolumeTagged : public server::CMarkupVolume
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x790[0x30]; // 0x790
        bool m_bIsGroup; // 0x7c0        
        bool m_bGroupByPrefab; // 0x7c1        
        bool m_bGroupByVolume; // 0x7c2        
        bool m_bGroupOtherGroups; // 0x7c3        
        bool m_bIsInGroup; // 0x7c4        
        [[maybe_unused]] std::uint8_t pad_0x7c5[0x3];
        
        // Datamap fields:
        // void m_GroupNames; // 0x790
        // void m_Tags; // 0x7a8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeTagged because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeTagged) == 0x7c8);
};
