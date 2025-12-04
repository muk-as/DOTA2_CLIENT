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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldEncounter
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sName; // 0x_            
            CUtlString m_sTemplate; // 0x_            
            CUtlString m_sLocName; // 0x_            
            CUtlString m_sLocDescription; // 0x_            
            CPanoramaImageName m_sImage; // 0x_            
            source2sdk::client::EOverworldEncounterRewardStyle m_eRewardStyle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAOverworldEncounterReward> m_vecRewards;
            char m_vecRewards[0x_]; // 0x_            
            CUtlString m_sDefaultDialogue; // 0x_            
            KeyValues3 m_kvCustomData; // 0x_            
            bool m_bRequiresNodeToBeUnlockedToClaimRewards; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nLeaderboardCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sTemplate) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sLocDescription) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_eRewardStyle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_vecRewards) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_sDefaultDialogue) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_kvCustomData) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_bRequiresNodeToBeUnlockedToClaimRewards) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounter, m_nLeaderboardCount) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldEncounter) == 0x_);
    };
};
