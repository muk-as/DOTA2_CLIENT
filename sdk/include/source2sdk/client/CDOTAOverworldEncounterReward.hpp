#pragma once
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
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAOverworldEncounterReward
    {
    public:
        uint32_t m_unRewardData; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_sEventAction; // 0x8        
        KeyValues3 m_kvRewardExtraData; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldEncounterReward, m_unRewardData) == 0x0);
    static_assert(offsetof(CDOTAOverworldEncounterReward, m_sEventAction) == 0x8);
    static_assert(offsetof(CDOTAOverworldEncounterReward, m_kvRewardExtraData) == 0x10);
    
    static_assert(sizeof(CDOTAOverworldEncounterReward) == 0x20);
};
