#pragma once
#include "source2sdk/client/CDOTAOverworldEncounterReward.hpp"
#include "source2sdk/client/EOverworldEncounterRewardStyle.hpp"
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
    // Size: 0x70
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAOverworldEncounter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        CUtlString m_sName; // 0x8        
        CUtlString m_sTemplate; // 0x10        
        CUtlString m_sLocName; // 0x18        
        CUtlString m_sLocDescription; // 0x20        
        CPanoramaImageName m_sImage; // 0x28        
        client::EOverworldEncounterRewardStyle m_eRewardStyle; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4]; // 0x3c
        // m_vecRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAOverworldEncounterReward> m_vecRewards;
        char m_vecRewards[0x18]; // 0x40        
        CUtlString m_sDefaultDialogue; // 0x58        
        KeyValues3 m_kvCustomData; // 0x60        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldEncounter, m_sName) == 0x8);
    static_assert(offsetof(CDOTAOverworldEncounter, m_sTemplate) == 0x10);
    static_assert(offsetof(CDOTAOverworldEncounter, m_sLocName) == 0x18);
    static_assert(offsetof(CDOTAOverworldEncounter, m_sLocDescription) == 0x20);
    static_assert(offsetof(CDOTAOverworldEncounter, m_sImage) == 0x28);
    static_assert(offsetof(CDOTAOverworldEncounter, m_eRewardStyle) == 0x38);
    static_assert(offsetof(CDOTAOverworldEncounter, m_vecRewards) == 0x40);
    static_assert(offsetof(CDOTAOverworldEncounter, m_sDefaultDialogue) == 0x58);
    static_assert(offsetof(CDOTAOverworldEncounter, m_kvCustomData) == 0x60);
    
    static_assert(sizeof(CDOTAOverworldEncounter) == 0x70);
};
