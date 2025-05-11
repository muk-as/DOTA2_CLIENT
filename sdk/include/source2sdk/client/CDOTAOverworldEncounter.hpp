#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAOverworldEncounterReward.hpp"
#include "source2sdk/client/EOverworldEncounterRewardStyle.hpp"

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
        // Standard-layout class: true
        // Size: 0x78
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldEncounter
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_sName; // 0x8            
            CUtlString m_sTemplate; // 0x10            
            CUtlString m_sLocName; // 0x18            
            CUtlString m_sLocDescription; // 0x20            
            CPanoramaImageName m_sImage; // 0x28            
            source2sdk::client::EOverworldEncounterRewardStyle m_eRewardStyle; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            // m_vecRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldEncounterReward> m_vecRewards;
            char m_vecRewards[0x18]; // 0x40            
            CUtlString m_sDefaultDialogue; // 0x58            
            KeyValues3 m_kvCustomData; // 0x60            
            bool m_bRequiresNodeToBeUnlockedToClaimRewards; // 0x70            
            uint8_t _pad0071[0x3]; // 0x71
            std::int32_t m_nLeaderboardCount; // 0x74            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sTemplate) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sLocName) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sLocDescription) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sImage) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_eRewardStyle) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_vecRewards) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sDefaultDialogue) == 0x58);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_kvCustomData) == 0x60);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_bRequiresNodeToBeUnlockedToClaimRewards) == 0x70);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_nLeaderboardCount) == 0x74);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldEncounter) == 0x78);
    };
};
